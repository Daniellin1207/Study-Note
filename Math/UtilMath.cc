#include <stdlib.h>
namespace UTIL{
    
    int GetRandInt(int low,int high){
        int range=high-low;
        return rand()%range + low;
    }
}