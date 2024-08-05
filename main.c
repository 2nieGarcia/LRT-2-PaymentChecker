#include <stdio.h>

int main() {
    //Chart for payments in LRT2
    
    int stationPayment[13][13] = {
    {13, 16, 18, 21, 22, 23, 25, 26, 27, 29, 30, 32, 33},
    {16, 13, 15, 18, 19, 21, 22, 23, 24, 26, 28, 29, 31},
    {18, 15, 13, 16, 17, 19, 20, 21, 22, 24, 26, 27, 28},
    {21, 18, 16, 13, 14, 16, 18, 19, 20, 22, 23, 25, 26},
    {22, 19, 17, 14, 13, 15, 16, 18, 19, 20, 22, 24, 25},
    {23, 21, 19, 16, 15, 13, 15, 16, 17, 19, 20, 22, 23},
    {25, 22, 20, 18, 16, 15, 13, 15, 16, 17, 19, 21, 22},
    {26, 23, 21, 19, 18, 16, 15, 13, 14, 16, 18, 19, 21},
    {27, 24, 22, 20, 19, 17, 16, 14, 13, 15, 16, 18, 19},
    {29, 26, 24, 22, 20, 19, 17, 16, 15, 13, 15, 17, 18},
    {30, 28, 26, 23, 22, 20, 19, 18, 16, 15, 13, 15, 16},
    {32, 29, 27, 25, 24, 22, 21, 19, 18, 17, 15, 13, 15},
    {33, 31, 28, 26, 25, 23, 22, 21, 19, 18, 16, 15, 13}
};
        
   
    int stationNumFrom;
    int stationNumTo;
    
    printf("LRT 2 Payment Checker\n\n"
"1. Antipolo\n"
"2. Marikina-Pasig\n"
"3. Santolan\n"
"4. Katipunan\n"
"5. Anonas\n"
"6. AranetaCenter-Cubao\n"
"7. Betty Go Belmonte\n"
"8. Gilmore\n"
"9. J. Ruiz\n"
"10. V. Mapa\n"
"11. Pureza\n"
"12. Legarda\n"
"13. Recto\n\n");
    
    printf("Please select the number corresponding to the station you are from:");
    scanf("%d", &stationNumFrom);

    printf("Please select the number corresponding to the station you are went:");
    scanf("%d", &stationNumTo);
    
    if(stationNumTo > 13 || stationNumFrom > 13 || stationNumTo < 0 || stationNumFrom < 0){
        printf("Transaction Failed please try again");
        return 0;
    }
    
    
    printf("The Payment is: ");
    printf("%d",stationPayment[stationNumFrom - 1][stationNumTo - 1]);

    return 0;
}
