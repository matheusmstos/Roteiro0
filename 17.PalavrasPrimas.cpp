#include <bits/stdc++.h>
using namespace std;


int convert(char ch){
  if(isupper(ch)){
    return 26 + ch - 'A';
  }else{
    return 1 + ch - 'a';
  }
}

int sum(string st){
  int num=0;
  int total_sum=0;

  for (int i = 0; i < st.size(); i++) {
    num = convert(st.at(i));
    total_sum += num;
  }

  return total_sum;
}

void is_prime(int prime_num){
  int div = 0;

  for (int i = 1; i <= prime_num; i++) {
    if(prime_num%i == 0){
      div++;
    }
  }

  if(div == 2 || prime_num == 1){
    cout << "It is a prime word." << '\n';
  }else{
    cout << "It is not a prime word." << '\n';
  }
}




int main(int argc, char const *argv[]) {
  string word;
  int num = 0;

  while(cin >> word){
  num = sum(word);
  is_prime(num);
}

  return 0;
}
