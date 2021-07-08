#include <stdio.h>
#include <stdlib.h>
#define MAX 2000

int main(){
    int ** graph, sequence[MAX];
    int i,j,k,n,deg,eulCheck;
    FILE *InputGraph;

    /*Allocating enough memory for the 2D array so the program doesnt seg fault*/
    graph = (int **)malloc(sizeof(int*)*MAX);
    for(i = 0; i < MAX; i++){
        graph[i] = (int*)malloc(sizeof(int)*MAX);
    }
    
    /*Reads from the roper text file*/
    InputGraph = fopen("euler-graphs.txt","r");

    /*Loops through all 5 graphs */
    for(k = 1; k <=5 ; k++){
        eulCheck = 0;

        /*Resets degree sequence */
        for(i = 0; i < MAX; i++){ 
            sequence[i] = 0;
        }

        /*Scans latest grpah size*/
        fscanf(InputGraph, "%d", &n);

        /*Finds the degree of every vertex and adds it to the sequence array*/
        for(i = 0; i < n; i++){
            deg = 0;
            for(j = 0; j < n; j++){
                fscanf(InputGraph, "%d", &graph[i][j]);
                if(graph[i][j] == 1){
                    deg++;
                }
            }

            sequence[deg]++;

        }
        
        /*Goes throught the latest degree sequence and deteremines if all
        vertex degrees are even*/
        for(i = 0; i < n; i++){
            for(j = 0; j < sequence[i]; j++){
                if((i%2) == 0){
                    eulCheck++;
                }
            }
        }

        /*If all vertices are of an even degree then the program states 
        that the given graph is Eulerian*/
        if(eulCheck == n){
            printf("Graph %d: Eulerian. \n", k);
        } else {
            printf("Graph %d: NOT Eulerian. \n", k);
        }

    } 

    /*Frees allocated memory */
    for(i = 0; i < MAX; i++){
        free(graph[i]);
    }
    free(graph);
    
    fclose(InputGraph);

    return 0;
}

/*
What the program prints out:
Graph 1: Eulerian. 
Graph 2: NOT Eulerian. 
Graph 3: NOT Eulerian. 
Graph 4: Eulerian. 
Graph 5: Eulerian. 
*/
