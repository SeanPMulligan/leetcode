/*
https://leetcode.com/problems/first-unique-character-in-a-string/

Given a string, find the first non-repeating character in it and return it's
index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
*/
import java.util.HashMap;

class Solution {
  public int firstUniqChar(String s) {
    HashMap<Character, Integer> map = buildCharHash(s);
    
    for (int i = 0; i < s.length(); i++) {
      Integer count = map.get(s.charAt(i)); 
      if (count == 1) {
        return i;
      }
    }
       
    return -1;
  }
  
  public HashMap<Character, Integer> buildCharHash(String str) {
    HashMap<Character, Integer> map = new HashMap<>();
    for (int i = 0; i < str.length(); i++) {
      Character c = str.charAt(i);
      if (map.get(c) == null) {
        map.put(c, 1);
      } else {
        int count = map.get(c);
        map.put(c, count + 1);
      }
    }
    
    return map;
  }
}
