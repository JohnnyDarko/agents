#include <stdio.h>
#include "Navigation.h"

// Nodes
#include "Gps.h"


Gps gps;

Navigation::Navigation(){

}

void Navigation::cycle(int hz )//, nSync pointer)
{
    
    switch(hz)
    {
        case 400:
        {
            //printf("Navigation: 400\n");
            break;
        }
        case 200:
        {
            //printf("Navigation: 200\n");
            break;
        }
        case 100:
        {
            //printf("Navigation: 100\n");
            break;
        }
        case 50:
        {
            //printf("Navigation: 50\n");
            
            break;
        }
        case 10:
        {
            //printf("Navigation: 10\n");

            break;
        }
        case 5:
        {
            //printf("Navigation: 5\n");
            int res = 0;
            res = gps.update();
            printf("***************** TOA: %lld.%.9ld\n", (long long)gps.data.TOA.tv_sec, gps.data.TOA.tv_nsec);
            printf("UTC time: %f\n",gps.data.utc_time);
            printf("gps fix quality: %d\n",gps.data.fix_quality);
            printf("gps latitude: %f\n",gps.data.latitude);
            printf("gps longitude: %f\n",gps.data.longitude);
            printf("gps altitude: %f\n",gps.data.altitude);
            printf("gps Hdop: %f\n",gps.data.hdop);
            printf("gps # sats: %d\n",gps.data.num_sats);
            printf("gps nav mode: %s\n",gps.data.nav_mode);
            printf("gps cog magnetic: %f\n",gps.data.cog_m);
            printf("gps sog kps: %f\n",gps.data.sog_kph);
            printf("gps sog mps: %f\n",gps.data.sog_mps);
            break;
            if(res != 0)
            {
                printf("gps update failed");
            }
              
        }
    }
}
