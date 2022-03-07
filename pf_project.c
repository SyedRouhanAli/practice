#include<stdio.h>
int main()
{
    int u,d,r,l,k;
   
    printf("\n RJS Rent A Car \n");
    printf("\n ----------------------- \n");
    printf("\n Press 1 For  5 Seater\n");
    printf("\n Press 2 For  Long Trip Vehicle (more than 5 seater) \n");
    printf("\n Press 3 For  Luxury Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n Please Click Option According To Your Condition: \n");
    scanf("%d", &u);
    switch(u)
    {
        case 1:
        printf("\n You have chosen 5 Seater Vehicle \n");
        printf("\n Vehicle Available are : \n");
        printf("\n Vitz , Corolla , Civic \n");
        printf("\n ------------------------------ \n");
        printf("\n Your Vehicle :  Press 1 for Vitz , 2 For Corolla , 3 For Civic \n");
        scanf("%d", &d);
        switch(d)
        {
            case 1:
            printf("\n You have selected Vitz | Cost 4000rs per day \n");
            break;

            case 2:
            printf("\n You have selected Corolla | Cost 5000rs per day \n");
            break;

            case 3:
            printf("\n You have selected Civic | Cost 6000 per day \n");
            break;
        }
        printf("\n Do You Want driver ? \n");
        printf("\n Press 1 For Yes | 2 For No \n");
        scanf("%d" , &k);
        switch(k)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
            printf("\n---------------------------------\n");	
        	printf("\n Your Vehicle is Ready");
            printf("\n---------------------------------\n");
		}
        break;

        case 2:
        printf("\n You have chosen Long Trip Vehicles \n");
        printf("\n Vehicles Available are :\n");
        printf("\n Hiace(20 seater) , Bus(50 seater) \n");
        printf("\n ----------------------------- \n");
        printf("\n Your Vehicle :  press 1 For Hiace , 2 For Bus \n");
        scanf("%d", &r);
        switch (r)
        {
            case 1:
            printf("\n You have selected Hiace | Cost 8000rs per day \n");
            break;

            case 2:
            printf("\n You have selected Bus | Cost 12,000rs per day \n");
            break;

        }
        printf("\n Do You Want driver ? \n");
        printf("\n Press 1 For Yes | 2 For No \n");
        scanf("%d" , &k);
        switch(k)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
            printf("\n---------------------------------\n");
		}
        break;

        case 3:
        printf("\n You have chosen Luxury Car \n");
        printf("\n Vehicles Available are : \n");
        printf("\n Mercedes-BENZ , BMW M5 , AUDI A8 \n");
        printf("\n ------------------------------ \n");
        printf("\n Your Vehicles : Press 1 For Mercedes-Benz , 2 For BMW M5 , 3 For Audi A8 \n");
        scanf("%d", &l);
        switch(l)
        {
            case 1:
            printf("\n You have selected Mercedes-Benz | Cost 40,000rs per day \n");
            break;

            case 2:
            printf("\n You have selected BMW M5 | Cost 45,000rs per day \n");
            break;

            case 3:
            printf("\n You have selected Audi A8 | Cost 50,000rs per day \n");
            break;
        }
        printf("\n Do You Want driver ? \n");
        printf("\n Press 1 For Yes | 2 For No \n");
        scanf("%d" , &k);
        switch(k)
        {     	
            case 1:
            printf("\n---------------------------------\n");
            printf("\n You have seleced driver \n");
            printf("\n Enjoy Your Ride \n");
            printf("\n---------------------------------\n");
            break;
        	case 2:
        	printf("\n---------------------------------\n");
        	printf("\n Your Vehicle is Ready");
        	printf("\n---------------------------------\n");
		}
			break;
    }
    return 0;
}
