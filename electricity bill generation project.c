#include<stdio.h>
int main()
{
    float x=50, amt, totalamt;
    // printf("Enter unit charges ");
    // scanf(" %f ",x);
    switch( x <=50 )
    {
        case 1: amt = x * 0.5;
                break;
        case 0: switch( x <= 150 )
                {
                    case 1: amt = 25 + (x-50) * 0.75;
                            break;
                    case 0: switch( x <= 250 ) 
                            {
                            case 1: amt = 100 + (x-150) * 1.20;
                                    break;
                            case 0: amt = 220 + (x-250) * 1.5;
                                    break;
                            }
                }
    }

    totalamt = amt + (amt * 0.2);
    printf("total amt is %.2f", totalamt);
     
} 
