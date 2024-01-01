#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> g = {10,9,8,7};
  vector<int> s = {5,6,7,8};
  int con = 0, gsize = g.size() - 1, ssize = s.size() - 1, gsort = 0, ssort = 0;
  for (int j = 0; j < gsize || j < ssize; j++) {
    if (gsort && ssort) break;
    int gs = 1, ss = 1;
    for (int i = 0; i < gsize || i < ssize; i++) {
      // cout << "i ";
    if (!gsort && i < gsize && g[i] > g[i+1]) { int temp = g[i]; g[i] = g[i+1]; g[i+1] = temp; gs=0; }
    if (!ssort && i < ssize && s[i] > s[i+1]) { int temp = s[i]; s[i] = s[i+1]; s[i+1] = temp; ss=0; }
    }
  }
  for (int j = 0; j <= ssize; j++) { cout << s[j] << ' '; }
  cout << endl;
  for (int i = 0; i <= gsize; i++) { cout << g[i] << ' '; }
}