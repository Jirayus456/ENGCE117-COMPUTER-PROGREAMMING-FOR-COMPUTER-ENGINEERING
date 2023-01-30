#include <stdio.h>

int main() {
    int inputloop, cont, num, array[999] ;
    printf( "Input number of element to be install array : " ) ;
    scanf ( "%d", &inputloop ) ;
    printf( "------\n" ) ;
    for ( int i = 0 ; i < inputloop ; i++ ) {
        printf( "Element[%d] : ", i+1 ) ;
        scanf( "%d", &array[i] ) ;
    }
    for ( int j = 0 ; j < inputloop - 1 ; j++ ) {
        for ( int k = j + 1 ; k < inputloop ; k++ ) {
            if ( array[k] < array[j] ) {
                num = array[k] ;
                array[k] = array[j] ;
                array[j] = num ;
            }
        }
    }
    printf( "------\n" ) ;
    for ( int l = 0 ; l < inputloop ; l++ ) {
        cont = 0 ;
        for ( int m = 0  ; m < inputloop ; m++ ) {
            if ( array[l] == array[m] ) {
                cont++;
            }
        }
        if ( array[l] != array[l+1] ) {	
			printf( "%d -> %d\n", array[l], cont ) ;
		}
    }
    return 0 ;
}
