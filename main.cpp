/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: promethelinhp
 *
 * Created on February 15, 2020, 6:01 AM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    
    printf("bu bir denemedir");
    
    
    for (int i=0; i< 10; i++)
    {
        
        i % 2 ? printf("tek :%d\n",i) : printf("cift %d\n",i);
        
        
    }
    
    
    getchar();

    return 0;
}

