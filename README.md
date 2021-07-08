# euler-checking-algorithm
C algorithm that checks if a given graph is Eulerian or not

### Euler Checking Algorithm

This C algorithm takes the text file `euler-graphs.txt` and runs through the input to determine if its contents contain a Euler graph.
The algorithm checks the initial line of a graph to determine the length of the graph and uses that information to know how many
lines it must go through to gather all the info of the graph.
It will repeat this process until it reaches EOF.

Here's an example of graph output (taken from `euler-graphs.txt`):

```
7
0 1 1 1 1 1 1
1 0 1 1 1 1 1
1 1 0 1 1 1 1
1 1 1 0 1 1 1
1 1 1 1 0 1 1
1 1 1 1 1 0 1
1 1 1 1 1 1 0
```

### Setup

Run `make` to generate an executable

which can be executed by running `./EulerCycle`

### Euler Checks

The textfile `euler-graphs.txt` can be modified to check different graphs or the code itself can be modified to use a different text file.
