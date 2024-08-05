// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int checkStationNumber(char *answer, char **stations)
{
    for (int i = 0; i < 19; i++)
    {
        if (strupr(answer) == strupr(stations[i]))
        {
            return i;
        }
    }
}

int main()
{

    // Stations in LRT2
    char stations[][18] = {"Antipolo", "Marikina-Pasig", "Santolan", "Katipunan", "Anonas", "Araneta", "Center-Cubao", "Betty Go Belmonte", "Gilmore", "J. Ruiz", "V. Mapa", "Pureza", "Legarda", "Recto"};

    // Chart for payments in LRT2

    char fromStation;
    char toStation;
    int stationNumFrom;
    int stationNumTo;

    printf("Antipolo -> Marikina-Pasig -> Santolan -> Katipunan -> Anonas -> Araneta -> Center-Cubao -> Betty Go Belmonte -> Gilmore -> J. Ruiz -> V. Mapa -> Pureza -> Legarda -> Recto\n \nWhich station are you from:");
    scanf("%s", &fromStation);

    printf("Which station to:");
    scanf("%s", &toStation);

    printf("%s\n", stations[0]);

    return 0;
}