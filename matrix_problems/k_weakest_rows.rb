=begin
https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

Given a m * n matrix mat of ones (representing soldiers) and zeros
(representing civilians), return the indexes of the k weakest rows
in the matrix ordered from the weakest to the strongest.

A row i is weaker than row j, if the number of soldiers in row i is
less than the number of soldiers in row j, or they have the same number
of soldiers but i is less than j. Soldiers are always stand in the
frontier of a row, that is, always ones may appear first and then zeros.
=end

# @param {Integer[][]} mat
# @param {Integer} k
# @return {Integer[]}
def k_weakest_rows(mat, k)
  strength_map = {}
  result = []
  el = 0

  mat.each_with_index do |row, idx|
    strength_map[idx] = row.sum
  end

  sorted_strength = strength_map.sort_by { |_, v| v }

  while el < k
    result.push(sorted_strength[el][0])
    el += 1
  end

  result
end
