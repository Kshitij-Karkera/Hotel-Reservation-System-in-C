#include<stdio.h>
#include<stdlib.h>

//Global variables
int choose=0,choose_room=0;
char ans;
char cust_name[10];
int room_no=0;
int phone_no[10];
int members=0;
int matt=0;
int tot_bill=0;
int room_cost=0;
int card_no=0;
int card=0;
int no_days=0;

int main() {
  START:
  printf("\n                       :::::::::::::::::::::::::::::::::::::");
  printf("\n                       ::                                 ::");
  printf("\n                       ::                                 ::");
  printf("\n                       ::                                 ::");
  printf("\n                       ::            WELCOME TO           ::");
  printf("\n                       ::                                 ::");
  printf("\n                       ::          Taj Mahal Hotel        ::");
  printf("\n                       ::                                 ::");
  printf("\n                       ::                                 ::");
  printf("\n                       ::                                 ::");
  printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");

  printf("\t\t\t  1. Rooms\n");
  printf("\t\t\t  2. Room Features\n");
  printf("\t\t\t  3. Book a room\n");
  printf("\t\t\t  4. Services\n");
  printf("\t\t\t  5. Exit\n");

  printf("\t\t\tChoose any one option : ");
  scanf("%i", &choose);

    switch(choose) {
      case 1:
        printf("\n\t                         ROOM AVAILABILITY");
        printf("\n\t                         -------------------\n");
        printf("\n\t| Room No. |     Type     | Charge | Availability |");
        printf("\n\t|    1.    |   General 1  |  3000  |      No      |");
        printf("\n\t|    2.    |   General 2  |  3500  |      Yes     |");
        printf("\n\t|    3.    |   General 3  |  3500  |      No      |");
        printf("\n\t|    4.    |   Couple 1   |  4000  |      No      |");
        printf("\n\t|    5.    |   Couple 2   |  4500  |      No      |");
        printf("\n\t|    6.    |   Couple 3   |  4500  |      No      |");
        printf("\n\t|    7.    |    Delux 1   |  6000  |      Yes     |");
        printf("\n\t|    8.    |    Delux 2   |  6500  |      Yes     |");
        printf("\n\t|    9.    |  Sp. Delux 1 | 10,000 |      Yes     |");
        printf("\n\t|   10.    |  Sp. Delux 2 | 10,000 |      Yes     |");
        printf("\n\nDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans=='Y'||ans=='y') {
            goto START;
          }
        break;

      case 2:
      printf("\t\tEnter a room number between 1-10 : ");
      scanf("%i", &room_no);
      if (room_no == 1) {
        printf("\n\t Room number            :      1");
        printf("\n\t Advance                :      700\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    General");
        printf("\n\t Room charges                :    Rs.3000 per day");
        printf("\n\t 1.Bed                       :    2");
        printf("\n\t 2.Capacity                  :    2");
        printf("\n\t 3.Balcony available         :    -");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  not available");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.TV available");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.100 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans== 'y') {
          goto START;
        }
      } else if (room_no == 2) {
        printf("\n\t Room number            :      2");
        printf("\n\t Advance                :      1000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    General");
        printf("\n\t Room charges                :    Rs.3500 per day");
        printf("\n\t 1.Bed                       :    2");
        printf("\n\t 2.Capacity                  :    3");
        printf("\n\t 3.Balcony available         :    -");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.TV available");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.150 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans == 'y') {
          goto START;
        }
      } else if (room_no == 3) {
        printf("\n\t Room number            :      3");
        printf("\n\t Advance                :      1000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    General");
        printf("\n\t Room charges                :    Rs.3500 per day");
        printf("\n\t 1.Bed                       :    2");
        printf("\n\t 2.Capacity                  :    3");
        printf("\n\t 3.Balcony available         :    -");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.TV available");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.150 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans == 'y') {
          goto START;
        }
      } else if (room_no == 4) {
        printf("\n\t Room number            :      4");
        printf("\n\t Advance                :      1000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Couple");
        printf("\n\t Room charges                :    Rs.4000 per day");
        printf("\n\t 1.Bed                       :    1");
        printf("\n\t 2.Capacity                  :    2");
        printf("\n\t 3.Balcony available         :    1");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available");
        printf("\t\t 2.Geyser available");
        printf("\n\t 3.TV available");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.200 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s",&ans);

        if (ans == 'Y' || ans == 'y') {
          goto START;
        }
      } else if (room_no == 5) {
        printf("\n\t Room number            :      5");
        printf("\n\t Advance                :      1000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Couple");
        printf("\n\t Room charges                :    Rs.4500 per day");
        printf("\n\t 1.Bed                       :    1");
        printf("\n\t 2.Capacity                  :    3");
        printf("\n\t 3.Balcony available         :    1");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.TV available");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.200 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans == 'y') {
          goto START;
        }
      } else if (room_no == 6) {
        printf("\n\t Room number            :      6");
        printf("\n\t Advance                :      1000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Couple");
        printf("\n\t Room charges                :    Rs.4500 per day");
        printf("\n\t 1.Bed                       :    1");
        printf("\n\t 2.Capacity                  :    3");
        printf("\n\t 3.Balcony available         :    1");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.TV available");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.200 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans == 'y') {
          goto START;
        }
      } else if (room_no == 7) {
        printf("\n\t Room number            :      7");
        printf("\n\t Advance                :      2000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Delux");
        printf("\n\t Room charges                :    Rs.6000 per day");
        printf("\n\t 1.Bed                       :    3");
        printf("\n\t 2.Capacity                  :    2");
        printf("\n\t 3.Balcony available         :    2");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available       :   2");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.Extra bathroom");
        printf("\n\t 4.TV available");
        printf("\n\t 5.Extra room");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.300 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y'|| ans == 'y') {
          goto START;
        }
      } else if (room_no == 8) {
        printf("\n\t Room number            :      8");
        printf("\n\t Advance                :      2000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Delux");
        printf("\n\t Room charges                :    Rs.6500 per day");
        printf("\n\t 1.Bed                       :    3");
        printf("\n\t 2.Capacity                  :    3");
        printf("\n\t 3.Balcony available         :    2");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available       :   2");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.Extra bathroom");
        printf("\n\t 4.TV available");
        printf("\n\t 5.Extra room");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.300 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans == 'y') {
          goto START;
        }
      } else if (room_no == 9) {
        printf("\n\t Room number            :      9");
        printf("\n\t Advance                :      3000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Sp.Delux");
        printf("\n\t Room charges                :    Rs.10,000 per day");
        printf("\n\t 1.Bed                       :    4");
        printf("\n\t 2.Capacity                  :    2");
        printf("\n\t 3.Balcony available         :    3");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available       :   2");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.Extra bathroom");
        printf("\n\t 4.TV available         :   2");
        printf("\n\t 5.Extra room           :   2");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.500 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if (ans == 'Y' || ans == 'y'){
          goto START;
        }
      } else if (room_no == 10) {
        printf("\n\t Room number            :      10");
        printf("\n\t Advance                :      3000\n");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                      FEATURES OF THIS ROOM                       ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t Room Type                   :    Sp.Delux");
        printf("\n\t Room charges                :    Rs.10,000 per day");
        printf("\n\t 1.Bed                       :    4");
        printf("\n\t 2.Capacity                  :    2");
        printf("\n\t 3.Balcony available         :    3");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t                     ADDITIONAL FEATURES                        ");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t 1.A/C  available       :   2");
        printf("\n\t 2.Geyser available");
        printf("\n\t 3.Extra bathroom");
        printf("\n\t 4.TV available         :   2");
        printf("\n\t 5.Extra room           :   2");
        printf("\n\t------------------------------------------------------------------");
        printf("\n\t NOTE :- Extra mattress will cost Rs.500 per bed ");
        printf("\n\n\tDo you want to continue? (Y/N) : ");
        scanf("%s", &ans);

        if(ans == 'Y' || ans == 'y') {
          goto START;
        }
      }
      break;

      case 3:
        printf("\n                          BOOK A ROOM");
        printf("\n                         -------------\n");
        printf("\n\t\t\t  1. General 1\n");
        printf("\t\t\t  2. General 2\n");
        printf("\t\t\t  3. General 3\n");
        printf("\t\t\t  4. Couple 1\n");
        printf("\t\t\t  5. Couple 2\n");
        printf("\t\t\t  6. Couple 3\n");
        printf("\t\t\t  7. Delux 1\n");
        printf("\t\t\t  8. Delux 2\n");
        printf("\t\t\t  9. Sp. Delux 1\n");
        printf("\t\t\t  10. Sp. Delux 2\n");

        printf("\t\t\tChoose a room type : ");
        scanf("%i",&choose_room);

        switch(choose_room)
          {
            case 1:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(3000*no_days*members);
            tot_bill=(matt*100)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*100));
              printf("\n\t\tCost of room per person : 3000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*100));
              printf("\n\t\tCost of room per person : 3000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 2:
            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(3500*no_days*members);
            tot_bill=(matt*150)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*150));
              printf("\n\t\tCost of room per person : 3500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*150));
              printf("\n\t\tCost of room per person : 3500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            case 3:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(3500*no_days*members);
            tot_bill=(matt*150)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*150));
              printf("\n\t\tCost of room per person : 3500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*150));
              printf("\n\t\tCost of room per person : 3500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 4:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(4000*no_days*members);
            tot_bill=(matt*200)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*200));
              printf("\n\t\tCost of room per person : 4000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*200));
              printf("\n\t\tCost of room per person : 4000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 5:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(4500*no_days*members);
            tot_bill=(matt*200)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*200));
              printf("\n\t\tCost of room per person : 4500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*200));
              printf("\n\t\tCost of room per person : 4500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 6:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(4500*no_days*members);
            tot_bill=(matt*200)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*200));
              printf("\n\t\tCost of room per person : 4500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*200));
              printf("\n\t\tCost of room per person : 4500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 7:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(6000*no_days*members);
            tot_bill=(matt*300)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*300));
              printf("\n\t\tCost of room per person : 6000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*300));
              printf("\n\t\tCost of room per person : 6000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 8:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(6500*no_days*members);
            tot_bill=(matt*300)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*300));
              printf("\n\t\tCost of room per person : 6500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*300));
              printf("\n\t\tCost of room per person : 6500");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 9:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(10000*no_days*members);
            tot_bill=(matt*500)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*500));
              printf("\n\t\tCost of room per person : 10000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*500));
              printf("\n\t\tCost of room per person : 10000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            case 10:

            printf("\n                          CUSTOMER DETAILS");
            printf("\n                         ------------------\n");
            printf("\t\tEnter your name : ");
            scanf(" %s", cust_name);
            printf("\t\tEnter your phone number : ");
            scanf(" %i", phone_no);
            printf("\t\tEnter the number of days you wish to stay : ");
            scanf(" %i", &no_days);
            printf("\t\tEnter the number of members : ");
            scanf(" %i", &members);
            printf("\t\tEnter the number of extra mattress : ");
            scanf(" %i", &matt);
            room_cost=(10000*no_days*members);
            tot_bill=(matt*500)+room_cost;
            printf("\n\t\tYour total bill is : %i",tot_bill);
            printf("\n\n\n\t\t\t1. Card");
            printf("\n\t\t\t2. Cash");
            printf("\n\t\tWill you pay by card or cash? : ");
            scanf("%i",&card);
            switch(card)
            {
              case 1:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*500));
              printf("\n\t\tCost of room per person : 10000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\t\tEnter your 4 digit card number : ");
              scanf("%i",&card_no);
              printf("\n\t\tTransaction was successful");
              printf("\n\n\n\t\t\t| Thank you for the opportunity |\n");
              printf("\t\t\t      | Do visit us again |");
              break;

              case 2:
              printf("\n\t\tTotal cost of extra mattress : %i",(matt*500));
              printf("\n\t\tCost of room per person : 10000");
              printf("\n\t\tYour total bill : %i",tot_bill);
              printf("\n\n\n\t\t\t| Thank you for the opportunity |");
              printf("\t\t\t      | Do visit us again |");
              break;

              default:
              printf("\n\t\tInvalid number\n");
              break;
            }

            break;

            default:
            printf("\n\t\tInvalid room number");
          }
          break;

      case 4:
        printf("\n                          HOTEL FEATURES");
        printf("\n                         ------------------\n");
        printf("\n\t\t\t  1. Conference room\n");
        printf("\t\t\t  2. Live Orchestra\n");
        printf("\t\t\t  3. Auditorium\n");
        printf("\t\t\t  4. Swimming pool\n");
        printf("\t\t\t  5. Jacuzi and Spa\n");
        printf("\t\t\t  6. Indoor games\n");
        printf("\t\t\t  7. Badminton court\n");
        printf("\t\t\t  8. Basketball court\n");
        printf("\n\nDo you want to continue? (Y/N) : ");
        scanf("%s",&ans);

        if(ans=='Y'||ans=='y')
          {
            goto START;
          }
        break;

      case 5:
        exit(1);
        break;

      default:
        printf("\n\t\t\t\tError : Invalid Option ");
        printf("\n\nDo you want to continue? (Y/N) : ");
        scanf("%s",&ans);

        if(ans=='Y'||ans=='y')
          {
            goto START;
          }
        break;
    }
}

