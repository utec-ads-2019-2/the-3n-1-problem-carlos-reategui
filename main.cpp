#include <iostream>

int main(){
    int i, j;
    while((scanf("%u %u", &i, &j)) == 2){
        unsigned int maxCycleLength = 0, i2, j2;
        i2 = i<=j ? i:j;
        j2 = i<=j ? j:i;
        for(int n = i2; n <= j2; n++){
            int copyOfn = n, cycleLength = 1;
            while(copyOfn != 1){
                if(copyOfn % 2) copyOfn = 3 * copyOfn + 1;
                else copyOfn /= 2;
                cycleLength++;
            }
            if(maxCycleLength < cycleLength) maxCycleLength = cycleLength;
        }
        printf("%u %u %u\n", i, j, maxCycleLength);
    }
    return 0;
}
