=begin
https://leetcode.com/problems/to-lower-case/

Implement function ToLowerCase() that has a string parameter str, and returns
the same string in lowercase.

Example 1:

Input: "Hello"
Output: "hello"
Example 2:

Input: "here"
Output: "here"
Example 3:

Input: "LOVELY"
Output: "lovely"
=end

# @param {String} str
# @return {String}
def to_lower_case(str)
  lower = ('a'..'z').to_a
  upper = ('A'..'Z').to_a
  i = 0

  to_lower_hash =
    upper.each_with_object({}) do |up, h|
      h[up] = lower[i]
      i += 1
    end

  j = 0
  str.each_char do |char|
    str[j] = to_lower_hash[char] if to_lower_hash[char]

    j += 1
  end

  str
end
