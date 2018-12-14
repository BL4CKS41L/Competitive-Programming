#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    int cases = 0;
    while ( testCase-- )
    {
        int marks [7];

        for ( int i = 0; i < 7; i++ )
            scanf ("%d", &marks [i]);

        sort (marks + 4, marks + 7);
        double sum = 0;
        for ( int i = 0; i < 4; i++ )
            sum += marks [i];

        sum += ((marks [5] + marks [6]) / 2.0);
        printf ("Case %d: ", ++cases);
        if ( sum >= 90 )
            printf ( "A");
        else if ( sum >= 80 ) 
            printf ("B");
        else if ( sum >= 70 )
            printf ("C");
        else if ( sum >= 60 )
            printf ("D");
        else
            printf ("F");
        printf ("\n");
    }
    return 0;
}  
