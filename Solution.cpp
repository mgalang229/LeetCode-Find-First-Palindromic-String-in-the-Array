class Solution {
public:
  string firstPalindrome(vector<string>& words) {
    for (auto& w : words) {
      int n = w.size();
      bool p = true;
      for (int i = 0; i < n / 2; i++) {
        p &= (w[i] == w[n - 1 - i]);
      }
      if (!p) {
        continue;
      }
      return w;
    }
    return "";
  }
};
