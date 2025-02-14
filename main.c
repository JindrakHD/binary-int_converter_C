#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int findMaxBit(unsigned int userInt){
    bool found = false;
    int counter = 0;
    int bit;

    while (found != true){
        counter += 1;
        bit = pow(2,counter);
        //printf("%d:%d ", counter,bit);
        if (userInt < bit && counter > 0){
            counter -= 1;
            found = true;
        }
    }
    return counter; //returns the bits position used
}

int IntToBin(){
    int userInt, bit;
    char lastBit; //parity bit
    bool found = false; 
    printf("\nWrite int: ");
    scanf("%d", &userInt);
    if (userInt == 0){
        printf("\nBin representation: ");
        return 0;
    }
    else if ((userInt % 2) == 1){
        lastBit = '1';
        userInt -= 1;
    }
    else {
        lastBit = '0';
    }
    printf("\nBin representation:\n");

    int position = findMaxBit(userInt);
    //printf("\nTot pos: %d\n", position);

    while (position > 0){
        bit = pow(2,position);
        if ((userInt-bit) == 0 || (userInt-bit) > 0){
            userInt -= bit;
            printf("1");
        }
        else {
            printf("0");
        }
        position -= 1;
    }
    printf("%c\n", lastBit);
    return 0;
}

int findLen(long long int userInt){ //finding length of an bin (int)
    bool found = false;
    int position;
    int counter = 0; 
    while (found != true) {
        counter += 1;
        position = pow(10, counter);
        if ((int)(userInt/position) < 1){
            counter -= 1;
            found = true;
            break;
        }
        counter += 1;
    }
    return counter;
}

int calcInt(int list1[], int lenList){
    int finalInt = 0;
    for (int i = 0; i<= lenList; i++){
        if (list1[i] == 1){
            finalInt += pow(2,lenList-i);
        }
        else if (list1[i] == 0){
            continue;
        }
    }
    return finalInt;
}

int BinToInt(void){
    long long int userInt,bit;
    printf("\nWrite bin: ");
    scanf("%lld", &userInt); //in int because array limits
    int lenNum = (findLen(userInt)); //takes how long the number is
    //printf("\nLenNum: %d", lenNum);
    int binList[lenNum];

    for (int j = 0, i=lenNum; i >= 0; i--,j++){ //i-for moving the positions down, j-for adding into list from a beginning
        bit = pow(10,i);
        if ((userInt/bit) >= 1 && (userInt/bit) < 2){
            binList[j] = 1;
            userInt -= bit;
        }
        else if ((userInt/bit) <= 0){
            binList[j] = 0;
        }
    }
    int finalInt = calcInt(binList, lenNum);
    printf("\nInteger  Representation:\n%d\n", finalInt);
    return 0;
}

int main() {
    int choice;
    printf("\nInt to Bin(1) or Bin to Int(2): ");
    scanf("%d", &choice);
    if (choice == 1){
        IntToBin();
    }
    else if (choice == 2){
        BinToInt();       
    }
    else {
        printf("\nInvalid choice!");
    }
    return 0;
}