#include <stdio.h>
#include <string.h>

int main() {
	// Input
    int n, m, l, q;
    scanf("%d %d %d %d", &n, &m, &l, &q);
    char s[n][m];
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		scanf(" %c", &s[i][j]);
    	}
    }
    char dir[l];
    scanf(" %s", dir);

    // Array Navigation
    int startX = 0, startY = 0, ind = 0;
    char newString[1002];
    newString[0] = '\0';
    if(s[startX][startY]!='a' && s[startX][startY]!='e' && s[startX][startY]!='i' && s[startX][startY]!='o' && s[startX][startY]!='u'){
    	newString[ind] = s[startX][startY];
	    ind++;
    }
    for(int i=0;i<l;i++){
    	if(dir[i]=='l') startY--;
    	else if(dir[i]=='r') startY++;
    	else if(dir[i]=='u') startX--;
    	else startX++;
    	if(s[startX][startY]!='a' && s[startX][startY]!='e' && s[startX][startY]!='i' && s[startX][startY]!='o' && s[startX][startY]!='u'){
	    	newString[ind] = s[startX][startY];
		    ind++;
	    }
    }
    newString[ind] = '\0';
    printf("%s\n", newString);
    int len = strlen(newString);

    // Query Handling
    for(int i=0;i<q;i++){
    	char x[1001];
    	scanf(" %s", x);
    	int queryStrLen = strlen(x), fg = 0;
    	for(int j=0, k=0;j<len;j++){
    		if(x[k]==newString[j]) k++;
    		if(k==queryStrLen){
    			fg = 1;
    			break;
    		}
    	}
    	if(fg) printf("YES\n");
    	else printf("NO\n");
    }
}
