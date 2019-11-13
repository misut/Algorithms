#include <iostream>

using namespace std;

int kakao17( int rank ) {
    if     ( rank == 0  ) return       0;
    else if( rank == 1  ) return 5000000;
    else if( rank <= 3  ) return 3000000;
    else if( rank <= 6  ) return 2000000;
    else if( rank <= 10 ) return  500000;
    else if( rank <= 15 ) return  300000;
    else if( rank <= 21 ) return  100000;
    else                  return       0;
}

int kakao18( int rank ) {
    if     ( rank == 0  ) return       0;
    else if( rank == 1  ) return 5120000;
    else if( rank <= 3  ) return 2560000;
    else if( rank <= 7  ) return 1280000;
    else if( rank <= 15 ) return  640000;
    else if( rank <= 31 ) return  320000;
    else                  return       0;
}

int main() {
    int nc;
    cin >> nc;
    for( int cs = 0; cs < nc; ++cs ) {
        int a, b;
        cin >> a >> b;
        cout << kakao17( a ) + kakao18( b ) << endl;
    }
}
