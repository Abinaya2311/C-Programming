#include <stdio.h>
int main() 
{
    struct zoho 
	{
        int employees;
        char comp[5];
        
        struct founder 
		{
            char ceo[10];
        } p;
    };
    struct zoho zs = {4000, "zoho", "sridhar"};
    printf("%d %s %s", zs.employees, zs.comp, zs.p.ceo);
    return 0;
}
