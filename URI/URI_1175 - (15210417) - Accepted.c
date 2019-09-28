#include <stdio.h>
 
int main() {
    int i, ve[20];
    
    for(i = 19; i >= 0; --i)
    {
        scanf("%d", &ve[i]);
    }
    for(i = 0; i < 20 ; ++i)
    {
        printf("N[%d] = %d\n", i,ve[i]);
    }
    return 0;
}