#include<stdio.h>

struct SelfReferential {
    int data;
    struct SelfReferential *selfPointer;
};

int main() {   
    struct SelfReferential node1, node2, node3;
    int data1,data2,data3;
    printf("enter data1");
    scanf("%d",&data1);
    printf("enter data 2");
    scanf("%d",&data2);
     printf("enter data 3");
    scanf("%d",&data3);
   
    node1.data = data1;
    node2.data = data2;
    node3.data = data3;

    node1.selfPointer = &node2;
    node2.selfPointer = &node3;
    node3.selfPointer = NULL;  
    printf("Node 1 data: %d\n", node1.data);
    printf("Node 2 data: %d\n", node1.selfPointer->data);
    printf("Node 3 data: %d\n", node1.selfPointer->selfPointer->data);

    return 0;
}
