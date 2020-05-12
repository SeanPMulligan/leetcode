=begin
 https://leetcode.com/problems/lucky-numbers-in-a-matrix/

 Given a m * n matrix of distinct numbers, return all lucky
 numbers in the matrix in any order.

 A lucky number is an element of the matrix such that it is
 the minimum element in its row and maximum in its column.

 Example 1:

 Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
 Output: [15]
 Explanation: 15 is the only lucky number since it is the minimum
 in its row and the maximum in its column
=end

# @param {Integer[][]} matrix
# @return {Integer[]}
def lucky_numbers(matrix)
  result = []
  matrix.each_with_index do |m, idx|
    smallest_el = m.min
    index = m.index(smallest_el)

    lucky = true
    el = 0

    while el < matrix.length
      if el == idx
        el += 1
        next
      end

      if matrix[el][index] > smallest_el
        lucky = false
        break
      end
      el += 1
    end

    result.push(smallest_el) if lucky
  end

  result
end
