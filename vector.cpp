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


struct NODE
{
	int val;
	NODE *pNext;
};

struct Vector
{
	NODE *pHead, *pTail;

	Vector()
	{
		pHead = NULL;
		pTail = NULL;
	}


	void push_back(int val)
	{
		NODE *x = new NODE;;
		x->val = val;
		x->pNext = NULL;

		if (pHead == NULL) pHead = pTail = x;
		else
		{
			pTail->pNext = x;
			pTail = x;
		}
	}

	bool isEmpty()
	{
		return pHead == NULL;
	}

	void print()
	{
		NODE *p = pHead;
		while (p)
		{
			cout << p->val << " ";
			p = p->pNext;
		}
	}

	void clear()
	{
		pHead = pTail = NULL;
	}
};

int main()
{
	// freopen("input.txt", "r", stdin);

	return 0;
}
