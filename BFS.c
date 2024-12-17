#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,front=0,rear=-1;
void bfs(int v) {
    for(i=1;i<n;i++)
    if(a[v][i] && !visited[i]) 
        q[++rear]=i;
        if(front<=rear) {
            visited[q[front]]=i;
            bfs(q[front++]);
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
    scanf("%d",&v);
    bfs(v);
    printf("Graph traversal : ");
    for(i=1;i<=n;i++) {
        if(visited[i]) {
            printf("%d\t",i);
        } 
        else {
            printf("BFS is not possible");
            break;
        }
    }
}