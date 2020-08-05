#include <iostream>
using namespace std;
int findword(char mat[][],string word,int row,int col);
int check(char a,int row,int col);
int main() {
	int i,j;
	char mat[row][col];
	string word;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<endl;
	cin>>word;
	cout<<findword(mat,word,row,col);
}
int findword(char mat[][],string word,row,col){
	int i,j,k=0,n=word.length();
	
	for(i=0;i<n;i++)
	{
		if(!check(str[i],row,col))
		{
			return 0;
		}
	}
	return 1;
}
int check(char a,row,col){
	int i,j;
	int visited[row][col]={0};
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a==mat[i][j])
			{
				if(visited[i][j]==1)
				{
					return 0;
				}
				visited[i][j]==1;
			}
		}
	}
}
