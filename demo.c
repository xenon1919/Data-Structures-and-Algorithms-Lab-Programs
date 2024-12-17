#include<stdio.h>
int a[20][20],visited[20],q[20],i,j,n,f=0,r=-1;
void BFS(int v) {
    for(i=1;i<n;i++) 
    if(a[v][i] && !visited[i]) 
    q[++r]=i;
    if(f<=r) {
        visited[q[f]]=1;
        BFS(q[f++]);
    }
}
int main() {
    int v;
    printf("Enter the number of vertices : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
    q[i]=0;
    visited[i]=0;
    }
    printf("Enter the adjacency matrix : ");
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the starting vertex : ");
    scanf("%d",&n);
    BFS(v);
    printf("Graph traversal : ");
    for(i=1;i<=n;i++) {
        if(visited[i]) {
        printf("%d\t",i);
    }
    else {
        printf("BFS is not possible ");
        break;
      }
   }
    return 0;
}
    