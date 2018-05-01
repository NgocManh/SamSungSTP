#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define FORN(i,a,b) for(int i = a; i <= b; i++)
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define ll long long
#define ull unsigned long long
#define type_value pair<int, bool>

const int MAXN = 1e5;
const ll mod = 1000000007;

using namespace std;


struct Queue
{
	int l = 0, r = -1;
	type_value a[MAXN];

	type_value top()
	{
		return a[l];
	}
	void push(type_value val)
	{
		a[++r] = val;
	}

	void pop()
	{
		if (!isEmpty())
		{
			l++;
		}
	}

	bool isEmpty()
	{
		return l > r;
	}
};

int main()
{
	// freopen("input.txt", "r", stdin);

	return 0;
}
