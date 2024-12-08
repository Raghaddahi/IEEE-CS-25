#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
vector<int> a(n);
for (int i = 0; i < n; i++)
    {
 cin >>a[i];
    }
int count = 0;
int j = 0;
for(int i = 0; i < n - 2; i++){
while (j<n&&points[j]-points[i]<=d)
{
j++;
}
int m = j - i - 1;
if (m>= 2) {
count += (m*(m-1))/ 2;
}
}
cout << count << endl;
    return 0;
}
