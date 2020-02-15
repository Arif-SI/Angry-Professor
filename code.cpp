#include<cstdio>
#include<stdio.h>

using namespace std;

int main()
{
    int t, n, k;
    scanf("%d", &t);

    for(int i = 0; i<t; ++i){
        scanf("%d%d", &n, &k);
        int a[n], ck=0;
        for(int j=0;j<n;++j){
            scanf("%d", &a[j]);
            if(a[j]<=0) ck++;
        }
        if(ck >= k) printf("NO\n");
        else printf("YES\n");
    }
}
