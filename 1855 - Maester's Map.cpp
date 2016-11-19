#include <bits/stdc++.h>

using namespace std;

char s[100][100];
bool vis[100][100];
int n,m,x,y,dirX,dirY;

bool valid(int x, int y) { return x > -1 and y > -1 and x < n and y < m;}

int main(){
	scanf("%d%d",&m,&n);
	for(int i=0; i<n; i++) scanf("%s",s[i]);
	while(valid(x,y)){
		if(vis[x][y]){
			printf("!\n");
			return 0;
		}
		if(s[x][y]=='*'){
			printf("*\n");
			return 0;
		}
		if(s[x][y]=='>') dirX = 0, dirY = 1;
		else if(s[x][y]=='<') dirX = 0, dirY = -1;
		else if(s[x][y]=='v') dirX = 1, dirY = 0;
		else if(s[x][y]=='^') dirX = -1, dirY = 0;
		vis[x][y] = 1;
		x += dirX, y += dirY;
	}
	return 0;
}
