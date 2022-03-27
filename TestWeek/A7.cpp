#include<bits/stdc++.h>
using namespace std;

void swap(char &x, char &y)
{
	char temp;
	temp = x;
	x = y;
	y = temp;
}

void HoanVi(string a, int l, int r)
{
	if (l == r)
		cout<<a<<endl;
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap((a[l]), (a[i]));
			HoanVi(a, l+1, r);
			swap((a[l]), (a[i]));
		}
	}
}


int main() {
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); i++)
    {
        HoanVi(s, 0, i);
    }
}
