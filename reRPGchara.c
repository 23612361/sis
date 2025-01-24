#include<time.h>
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int in, dex , app ;
    
    srand(time(0));
    in = rand() % 21;
    dex = rand() % (21 - in);
    app = 20 - in - dex;
    
    printf("intelligence ; %d, stamina ; %d, charisma ; %d\n", in, dex, app);
    printf("Job ; ");
    
    if((in >= dex && in >= app &&(dex == app || dex == in)) || (dex == app && dex > in))
    {
        printf("dual\n");
    }
    else if(in >= dex && in >= app)
    {
        printf("mage\n");
    }   
    else if(app >= in && app >= dex)
    {
        printf("knight\n");
    }
    else
    {
        printf("thief\n");
    }

    return 0;
}
