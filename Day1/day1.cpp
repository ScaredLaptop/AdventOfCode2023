#include "bits/stdc++.h"

#define forn(i,b,e) for (int i = (b); i < (e); i++)
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define all(a) (a).begin(), (a).end()
#define sz(a) ((int)(a).size())
 
using namespace std;
 
typedef long long int int64;
typedef long double ldb;
typedef pair<int,int> PII;
typedef vector<int> VI;

inline int readInt() { int x; cin >> x; return x; }
inline int64 readLong() { int64 x; cin >> x; return x; }
inline double readDouble() { double x; cin >> x; return x; }
inline vector<int> readIntArray(int n) { vector<int> res; forn(i,0,n) res.pb(readInt()); return res; }

vector<string> number_strings = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
  srand((unsigned int)time(0));
  ios_base::sync_with_stdio(false);
  cout << setprecision(15);

  std::vector<std::string> s;
  std::string temp;
  auto input = ifstream("day1input.txt");
  while(getline(input, temp)){
    s.push_back(temp);
  }
  long sum = 0;
  int k =0;

  for(auto& str : s){
    cout << "on itr " << k++ << "\n";
    int begin = -1, end = -1;
    VI digits;
    for(int i = 0; i < str.size(); i++){
      if(isdigit(str[i])){ 
        digits.pb(str[i] - '0');
      }
      for(int j = 0; j < number_strings.size(); j++){
        if(str.compare(i, number_strings[j].size(), number_strings[j]) == 0){
          digits.pb(j+1);
        }
      }
    }
    sum += (digits.front() * 10) + digits.back();
  }
  cout << "Sum: " << sum << "\n";
  return 0;
}