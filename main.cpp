#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>> s;

//precompute

  int hash[256] = {0};
  for(int i =0; i<s.length(); i++){
    hash[s[i] - 'a']++;
  }

  
  int q;
  cout <<"enter the number of queries: ";
  cin>>q;

  while(q--){
    char c;
    cout<<"enter the character: ";
    cin>>c;
    cout<<hash[c-'a']<<endl;
  }
}