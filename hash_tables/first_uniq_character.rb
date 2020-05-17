=begin
https://leetcode.com/problems/first-unique-character-in-a-string/

Given a string, find the first non-repeating character in it and return it's
index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
=end

# @param {String} s
# @return {Integer}
def first_uniq_char(str)
  char_hash = build_char_hash(str)

  str.split('').each_with_index do |char, idx|
    return idx if char_hash[char] == 1
  end

  -1
end

def build_char_hash(str)
  char_hash = {}

  str.each_char do |char|
    if char_hash[char]
      char_hash[char] += 1
    else
      char_hash[char] = 1
    end
  end

  char_hash
end
