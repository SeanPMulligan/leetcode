=begin
https://leetcode.com/problems/ransom-note/description/

Given an arbitrary ransom note string and another string containing letters from
all the magazines, write a function that will return true if the ransom note can
be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
=end

# @param {String} ransom_note
# @param {String} magazine
# @return {Boolean}
def can_construct(ransom_note, magazine)
  ransom_chars = {}

  ransom_note.each_char do |r_char|
    if ransom_chars[r_char]
      ransom_chars[r_char] += 1
    else
      ransom_chars[r_char] = 1
    end
  end

  magazine.each_char do |m_char|
    if ransom_chars[m_char] && ransom_chars[m_char] != 0
      ransom_chars[m_char] -= 1
    end
  end

  ransom_chars.values.sum.zero?
end
