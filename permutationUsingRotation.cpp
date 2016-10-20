#include<bits/stdc++.h>
using namespace std;

void rotatePermutate(string str, string out)
{
	if(str.length()==0)
	{
		cout<<out<<endl;
		return;
	}
	
	for(int i=0;i<str.length();i++)
	{
		rotatePermutate(str.substr(1), out+str[0]);
		
		rotate(str.begin(), str.begin()+1, str.end());
	}
}
int main()
{
	string str;
	cin>>str;
	//getline(cin, str);
	int len=str.length();
	string out="";
	rotatePermutate(str,out);
}
