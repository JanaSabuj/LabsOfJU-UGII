#include <stdio.h>
#include <stdlib.h>

#define max_size 100

int m, n;
int adj[max_size+1][max_size+1];
int vector[max_size+1];
int visited[max_size+1];

int queue[max_size];
int front = -1;
int rear = -1;

void enqueue(int val){
	if(front == -1){
		front++;
		rear++;
	}
	else
		rear++;
	queue[rear] = val;
}

int dequeue(){
	int res  = queue[rear];
	rear --;
	if(rear == -1)
		front = -1;
	return res;
}

int isempty(){
	if(front == -1)
		return 1;
	return 0;
}

void DFS(int node){
	printf("%d ", node);
  visited[node] = 1;
	int i;
	for(i = 0; i < vector[node]; i++){
		if(!visited[adj[node][i]])
			DFS(adj[node][i]);
	}
}

void BFS(int node){
	printf("%d ", node);
	visited[node] = 1;
	enqueue(node);
	while(isempty() == 0){
		int head = dequeue();
		for(int i = 0; i < vector[head]; i++){
			if(visited[adj[head][i]] == 0){
				printf("%d ", adj[head][i]);
				visited[adj[head][i]] = 1;
				enqueue(adj[head][i]);
			}
		}
	}
}

void start(){
	printf("Enter number of nodes (nodes start from 1):\n");
	scanf("%d", &n);
	printf("Enter number of edges:\n");
	scanf("%d", &m);
	for(int i = 1; i <= n; i++){
		vector[i] = 0;
	}
	for(int i = 1; i <= n; i++){
		visited[i] = 0;
	}
	printf("Enter edges:\n");
	for(int i = 0; i < m; i++){
		int u,v;
		scanf("%d %d", &u, &v);
		adj[u][vector[u]] = v;
		adj[v][vector[v]] = u;
		vector[u]++;
		vector[v]++;
	}
	printf("DFS traversal:\n");
	DFS(1);
	printf("\n");
  for(int i = 1; i <= n; i++){
		visited[i] = 0;
	}
	printf("BFS traversal:\n");
	BFS(1);
}

int main(void) {
	start();
	return 0;
}
