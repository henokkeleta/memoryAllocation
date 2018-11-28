//
//  main.c
//  memoryAllocation
// The program helps begginers to understand how to allocate memory on the fly
//  Created by Henok Berhe on 11/28/18.
//  Copyright © 2018 Henok Berhe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char *inPut=NULL;
   
    
    unsigned int x=0;
    printf("Enter the number of bytes for the strings plz\n");
    scanf("%d",&x);
    inPut= (char *)malloc(x*sizeof(char));
    printf("The size of the bytes is %d\n",x);
    if(!inPut)
    {
        printf("memory error!\n");
        exit(0);
    }
    printf("Enter the strings");
     scanf(" ");
    //gets(inPut);
    fgets(inPut,x,stdin);
    printf("the entered strings are %s \n",inPut);
    
    free(inPut);
    
    return 0;
}
