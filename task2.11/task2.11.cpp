#include <stdio.h>
#include <locale.h>

int main() {
    int input ,i ,num = 0 ,ans = 0 ;
    printf( "User Input : " ) ;
    scanf ( "%d" ,&input ) ;
    printf( "-------\n" ) ;
    printf( "Series = " ) ;
    for ( i = 1 ; i <= input ; i++ ) {
        num = num * 10 + 9 ;
        printf( "%d" ,num ) ;
        if ( i != input ) {
            printf( " + " ) ;
        }
        ans = ans + num ;
    }
    setlocale(LC_NUMERIC, "");
    printf( "\nSum = %'d\n" ,ans ) ;
    return 0 ;
}
