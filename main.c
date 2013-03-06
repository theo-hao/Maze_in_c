/**********************
* The Node is a kind of thing that contains the infornmation of the maze map;
* Link the nodes , it will be a map.
* And then ,by the every step calculate , insert the step into the path , and
* get the right way to find out the outlet. Now , just think about one way to find the
* outlet.( Advanced : to get more way and analysis which one is better.)
*
*
***********************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct {
    int row; // the row munber in the maze map
    int line; // the line number in the maze map
    int is_obstacle; // 1 is obstacle, 0 is not obstacle
    struct Node * next; // the next Node
} Node , * PNode;

typedef struct {
    Node node; //The node value
    int step; // the progress
    struct Node * next; // The next node
} Path , *PPath ;


/***
    check the node value ,
***/
void check_node();
/***
    over write the node flag
***/
void overwrite_node();

/***
    write the node into the map
***/
void write_node();

/***
    Analysis the node ,and choose which way to go
****/
void analysis();

/***
    print the maze map
***/
void print_map();

/***
    print the maze path
***/
void print_paths();

/***
    insert node into path ,and write down the index
***/
void insert_node_into_path();


/***
    delete node from path
***/
void delete_node_from_path();


int main()
{
    printf("Hello world!\n");
    return 0;
}
