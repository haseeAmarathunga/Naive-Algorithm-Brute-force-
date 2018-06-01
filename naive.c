#include<stdio.h>
#include<string.h>

void naive(char*txt,char*pat)
{
	int matchCount;
	int n,m,i,j;
	n=strlen(txt);
	m=strlen(pat);
	
	for (i=0;i<=n-m;i++){
		
		matchCount=0;
		
		for (j=0;j<m;j++){
			if (txt[i+j]==pat[j]){
				matchCount++;
			}
			else{
				break;
			}
		}
		if (matchCount==m){
			printf("Pattern Found at index %d.\n",i);
		}
	}
	
}

void main()
{
	char txt[]="leavemealoneme";
	char pat[]="me";
	naive(txt,pat);
	return 0;
}

