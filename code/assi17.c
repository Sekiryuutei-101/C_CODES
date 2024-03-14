/* C program to read 10 integers. Display these numbers by printing 
three numbers in a line separeted by commas.*/
#include<stdio.h>
int main(){
    int x=1;
   
    
    for(int i = 1; i<=10;i++){
        
        
            for(int j = 1; j<=3; j++){
                printf("%d , ",x++);
               if(x==11)
               break;
                
                

            }
            printf("\n");
        if(x==11)
        break;
            
               
    }
    
    return 0;
}

