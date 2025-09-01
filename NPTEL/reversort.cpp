#include <bits/stdc++.h>
using namespace std;

#define ll  long long int
#define vi  vector<int>
#define vll vector<long long int>

int reversort(vi L){
  int cost = 0;

  int len = L.size();

  for(int i = 0; i < len - 1; i++){
    
    
    int m = *min_element(L.begin() + i, L.end());

  
    auto idx = find(L.begin(), L.end(), m);


    reverse(L.begin() + i, idx + 1);

   
    cost += distance(L.begin(),idx) - i + 1; 

  }
  return cost; 
}


int main(){
    std::ios::sync_with_stdio(false);

    int T;
    cin >> T;

    for(int c = 1; c < T+1; c++){

        int n;
        cin >> n;

        vi L;

        for(int j = 0; j < n; j++){
          int e;
          cin >> e;
          L.push_back(e);
        }

        cout << "Case #" << c << ": " << reversort(L) << endl;

    }
}
