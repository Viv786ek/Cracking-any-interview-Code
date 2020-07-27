#include <bits/stdc++.h>
using namespace std;

#define N 100005
typedef long long int lld;

int prime[N];

void sieve(){
for(int i = 2 ; i < N; i++) prime[i] = 1;

for(int i = 2; i < N; i++) {
if(prime[i])
for(int j = i + i; j < N; j += i)
prime[j] = 0;
}
}

int main() {
sieve();
int t;
cin >> t;
while(t--) {
lld n;
cin >> n;
lld num = n;
lld last;
for(int i = 2; i < sqrt(n)+1; i++) {
while(prime[i] and num%i == 0) {
last = i;
num /= i;
}
}
if(num == 1) cout << last << endl;
else cout << num << endl;
}
return 0;
}
