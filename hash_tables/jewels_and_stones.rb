=begin
https://leetcode.com/problems/jewels-and-stones/

You're given strings J representing the types of stones that are jewels, and S
representing the stones you have.  Each character in S is a type of stone you
have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are
letters. Letters are case sensitive, so "a" is considered a different type of
stone from "A".
=end

# @param {String} j
# @param {String} s
# @return {Integer}
def num_jewels_in_stones(j, s)
  jewels = Set.new
  jewel_count = 0

  j.each_char { |jewel| jewels.add(jewel) }

  s.each_char do |char|
    jewel_count += 1 if jewels.include?(char)
  end

  jewel_count
end
