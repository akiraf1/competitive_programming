#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Cheese {
  long long oishisa;
  long long amount;

  // ソートのための演算子定義
  bool operator<( const Cheese& right ) const {
    return oishisa == right.oishisa ? amount < right.amount : oishisa < right.oishisa;
  }
};


int main()
{
  int N, W;
  cin >> N >> W;
  vector<Cheese> cheese_vec(N);

  for (int i = 0; i < N; i++){
    cin >> cheese_vec[i].oishisa >> cheese_vec[i].amount;
  }

  sort(cheese_vec.begin(), cheese_vec.end());


  // for(int i = 0; i < cheese_vec.size(); ++i){
  //   cout << "i " << i << ": " << endl;
  //   cout << "  oishisa: " << cheese_vec[i].oishisa << endl;
  //   cout << "  amount: " << cheese_vec[i].amount << endl;
  // }

  long long amount_sum = 0;
  long long oishisa_sum = 0;
  long long idx = N - 1;

  for (int idx = N -1; idx >= 0; idx--) {
    if (amount_sum + cheese_vec[idx].amount <= W) {
      amount_sum += cheese_vec[idx].amount;
      oishisa_sum += cheese_vec[idx].oishisa * cheese_vec[idx].amount;
    } else {
      oishisa_sum += cheese_vec[idx].oishisa * (W - amount_sum);
      break;
    }
  }

  cout << oishisa_sum << endl;

  return 0;
}