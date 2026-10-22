class Solution {
public:
void sol(vector<char> & a, int left , int right){
    if(left>=right){
        return ;
    }
    swap(a[left], a[right]);
    sol(a, ++left, --right);
    }
    void reverseString(vector<char>& s) {
        sol(s, 0, s.size()-1);
    }
};