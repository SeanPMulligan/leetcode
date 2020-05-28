=begin
https://leetcode.com/problems/defanging-an-ip-address/submissions/

Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

Constraints:

The given address is a valid IPv4 address.
=end

# @param {String} address
# @return {String}
def defang_i_paddr(address)
  # one liner
  # address.gsub(".", "[.]")

  # verbose
  defanged = ''

  address.each_char do |char|
    new_char = char == '.' ? '[.]' : char

    defanged += new_char
  end

  defanged
end
