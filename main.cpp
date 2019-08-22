#include <iostream>
#include <stdio.h>
using namespace std;

unsigned int cycleLength(unsigned int n) {
    unsigned int count = 0;
    do {
        count++;
        if (n == 1)
            break;

        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    } while (n >= 1);
    return count;
}

void cyclePrint(unsigned int n) {
    do {
        if (n == 1) {
            cout << 1;
            break;
        } else
            cout << n << " ";

        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
    } while (n >= 1);
}

unsigned int maxCycleLength(unsigned int n1, unsigned int n2) {
    unsigned int maxLength = 0;
    for (unsigned int i = n1; i <= n2; i++) {
        unsigned int temp = cycleLength(i);
        if(temp > maxLength)
            maxLength = temp;
    }

    return maxLength;
}

using namespace std;
int main() {

    int inputList[4][2];
    for(auto & i : inputList) {
        int n1, n2;
        do {
            scanf("%d %d", &n1, &n2);
        } while(n1 == 0 & n1 >= 10000 & n2 == 0 & n2 >= 10000);
        i[0] = n1;
        i[1] = n2;
    }

    for(auto & i : inputList) {
        cout << i[0] << " " << i[1] << " " << maxCycleLength(i[0], i[1]) << endl;
    }
    return 0;
}
