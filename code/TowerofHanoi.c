/* 4. Write a C program to solved the Tower of Hanoi 
problem using recursive function
*/
#include <stdio.h>

void towerOfHanoi(int n, char from_rod,  char aux_rod , char to_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n = 3;  // number of disks
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are the names of the rods
    return 0;
}
