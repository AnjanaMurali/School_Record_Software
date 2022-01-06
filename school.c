#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
struct student{
    char ID[15];
    char name[20];
    char add[20];
    char parname[20];
    int Class;
long unsigned int phone_no;
};
struct student stu;
void ClearConsole(int ForgC, int BackC){  
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD coord = {0, 0};
      DWORD count;

   

  CONSOLE_SCREEN_BUFFER_INFO csbi;
   if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
      FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
      FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
     SetConsoleCursorPosition(hStdOut, coord);
     }
     return;
}
COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int x, int y){
 coord.X = x; coord.Y = y; /// X and Y coordinates
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void drawRectangle(){
    int i, j;
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 78; i++){
      gotoxy(i, 0);
      printf("%c",205);
    }
    



   gotoxy(78,0);
    printf("%c",187);
    for(i = 1; i < 25; i++){
     gotoxy(78, i);
     if(i == 6){
            printf("%c",185);
     }else{
            printf("%c",186);
        }
    }
    gotoxy(78, 25);
    printf("%c",188);
    for(i = 77; i > 0; i--){
        gotoxy(i,25);
        if(i == 35){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }
    gotoxy(0,25);
    printf("%c",200);
    for(i = 24; i > 0; i--){
     



   gotoxy(0,i);
        if(i == 6){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }
 for(i = 1; i < 78; i++){
        gotoxy(i,6);
        if(i == 35){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }
for(i = 7; i < 25; i++){
        gotoxy(35,i);
        printf("%c",186);
    }
}
void clearWindow(){
    int i,j;
    for(i = 37; i < 78; i++){
        




for(j = 7; j < 25; j++){
            gotoxy(i,j);printf(" ");
        }
    }
    return;
}
void window(){
    drawRectangle();
    gotoxy(28,2);
    printf("STUDENT RECORD SYSTEM");
    gotoxy(20,3);
    printf("HOGWARDS SCHOOL FOR WITCHES AND WIZARDY, LONDON");
    gotoxy(31,4);
    printf("DRACO DORMIENS NUNQUAM TITIILANDUS");
    gotoxy(25,24);
}
void use_pass_field(){
     int pass[10];
    char username[10];
    gotoxy(37,10);printf("The database is password protected.");
    gotoxy(37,11);printf(" Enter Valid username and password");
   gotoxy(37,13);printf("USERNAME:- ");
    gets(username);
  



  gotoxy(37,15);printf("PASSWORD:- ");
   gets(pass);
 clearWindow();
}
void print_heading(const char st[]){
  gotoxy(45,8);printf("HOGWARDS : %s",st);
}
void  house_record(){
 clearWindow();
int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
int answer1;
int answer2;
int answer3;
int answer4;
 gotoxy(37,8);printf("The Sorting Ceremony\n");
 gotoxy(37,10);printf("Q1)When I'm dead, I want people\n");
 gotoxy(37,11);printf("to remember me as: \n\n");
 gotoxy(37,13);printf("1) The Good\n");
 gotoxy(37,14);printf("2) The Great\n");
 gotoxy(37,15);printf("3) The Wise\n");
 gotoxy(37,16);printf("4) The Bold\n\n");
 gotoxy(37,18);printf("Enter your answer (1-4): ");
scanf("%d",&answer1);




if(answer1 ==1) {
  hufflepuff++;
}
else if (answer1 == 2) {
  slytherin++;
}
else if (answer1 ==3) {
  ravenclaw++;
}
else if (answer1 ==4) {
  gryffindor++;
}
else {
  gotoxy(37,20);printf("Invalid input\n");
}
 clearWindow();
 gotoxy(37,8);printf("Q2) Dawn or Dusk?\n\n");
 gotoxy(37,10);printf("1) Dawn\n");
 gotoxy(37,11);printf("2) Dusk\n");
gotoxy(37,13);printf("Enter your answer (1-2): ");
scanf("%d",&answer2);
  if (answer2 == 1)
  {




    gryffindor++;
    ravenclaw++;
}
  else if (answer2 == 2)
  {
 hufflepuff++;
 slytherin++;
 }
  else
  {
 gotoxy(37,15); printf("Invalid input");
  }
 clearWindow();
 gotoxy(37,8);printf("Q3) Which kind of instrument most\n");
gotoxy(37,9);printf("pleases your ear? \n");
 gotoxy(37,11);printf("1) The violin\n");
 gotoxy(37,12);printf("2) The trumpet\n");
 gotoxy(37,13);printf("3) The  piano\n");
 gotoxy(37,14);printf("4) The drum\n\n");
 gotoxy(37,16);printf("Enter your answer (1-4): ");
scanf("%d",&answer3);
  if (answer3 == 1){
    slytherin++;



}
  else if (answer3 == 2){
    hufflepuff++;}
  else if (answer3 == 3){
    ravenclaw++;}
  else if (answer3 == 4){
    gryffindor++;}
else {
gotoxy(37,18); printf("Invalid input");
}
 clearWindow(); 
 gotoxy(37,8);printf("Q4)Which road tempts you the most?\n\n");
 gotoxy(37,10);printf("1)The wide, sunny grassy lane\n\n");
 gotoxy(37,11);printf("2)The narrow, dark, lantern-lit alley\n");
 gotoxy(37,12);printf("3)The leaf-strewn path through woods\n");
 gotoxy(37,13);printf("4)The cobbled street\n\n");
 gotoxy(37,15);printf("Enter your answer (1-4): ");
scanf("%d",&answer4);
 if (answer4 == 1){
    hufflepuff++;}
  else if (answer4 == 2){
    slytherin++;}
  else if (answer4 == 3){
    gryffindor++;}



  else if (answer4 == 4){
    ravenclaw++;}
else {
gotoxy(37,17); printf("Invalid input");}
clearWindow(); 
gotoxy(37,8);printf( "====================================== ");
gotoxy(37,10);printf( "!!!!!!!!!Congrats on being sorted into ");
 int max = 0;
  if (gryffindor > max)
  {
  max = gryffindor;
  gotoxy(44,11);printf("Gryffindor!!!!!!");
 }
 if (hufflepuff > max)
  {
   max = hufflepuff;
  gotoxy(44,11);    printf("Hufflepuff!!!!!!");
}
if (ravenclaw > max)
 {
  max = ravenclaw;
   gotoxy(44,11);  printf("Ravenclaw!!!!!!");
}





if (slytherin > max)
  {
   max = slytherin;
     gotoxy(44,11);printf("Slytherin!!!!!!");
 }
gotoxy(37,13);printf( "====================================== ");
return;
}
void add_student(){
    clearWindow();
    print_heading("Add Record");
    int print = 37;
    FILE *fp;
    fp = fopen("record.txt","ab+");
     if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
 }else{
        fflush(stdin);
        gotoxy(print,10);printf("ID: ");gets(stu.ID);
        gotoxy(print,12);printf("Name: ");gets(stu.name);
        gotoxy(print,14);printf("Address: ");gets(stu.add);
        gotoxy(print,16);printf("Parent's name: ");gets(stu.parname);
       



         gotoxy(print,18);printf("Class: ");scanf("%d",&stu.Class);
        gotoxy(print,20);printf("Phone Number: ");scanf("%ld",&stu.phone_no);
        fwrite(&stu, sizeof(stu), 1, fp);
        gotoxy(40,22); printf("The record is sucessfully added");
    }
   fclose(fp);
    return;
}
void search_student(){
    clearWindow();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);printf("Enter ID to Search: ");fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record.txt","rb");
    while(fread(&stu,sizeof(stu),1,fp) == 1){
        if(strcmp(s_id,stu.ID) == 0){
            isFound = 1;
            break;
        }
    }
    


if(isFound == 1){
        gotoxy(37,12);printf("The record is Found");
        gotoxy(37,14);printf("ID: %s",stu.ID);
        gotoxy(37,15);printf("Name: %s",stu.name);
        gotoxy(37,16);printf("Address: %s",stu.add);
        gotoxy(37,17);printf("Parent's Name: %s",stu.parname);
        gotoxy(37,18);printf("Class: %d",stu.Class);
        gotoxy(37,19);printf("Phone No: %ld",stu.phone_no);
    }else{
        gotoxy(37,12);printf("Sorry, No record found in the database");
    }
    fclose(fp);
    return;
}
void mod_student(){
    clearWindow();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);printf("Enter ID to Modify: ");fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record.txt","rb+");
    



while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.ID) == 0){
            fflush(stdin);
            gotoxy(print,12);printf("ID: ");gets(stu.ID);
            gotoxy(print,13);printf("Name: ");gets(stu.name);
            gotoxy(print,14);printf("Address: ");gets(stu.add);
            gotoxy(print,15);printf("Parent's name: ");gets(stu.parname);
            gotoxy(print,16);printf("Class: ");scanf("%d",&stu.Class);
            gotoxy(print,17);printf("Phone Number: ");scanf("%ld",&stu.phone_no);
            fseek(fp,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        gotoxy(print, 12);printf("No Record Found");
    }
    fclose(fp);
    return;
}
void gen_marksheet()
{
 clearWindow();
     



int rollno, std, Defence_against_dark_arts, Potions, History_of_magic, Astronomy, Charms;
     char name[30], school_name[30];
       gotoxy(37,8);printf("Enter your Roll No:");
       scanf("%d", &rollno);
     gotoxy(37,9);    printf("Enter your name:");
     scanf(" %s", name);
     gotoxy(37,10); printf("Enter your School name:");
     scanf(" %s", school_name);
    gotoxy(37,11);  printf("Enter year:");
     scanf("%d", &std);
     gotoxy(37,12);  printf("Defence_against_dark_arts:");
     scanf("%d", &Defence_against_dark_arts);
     gotoxy(37,13);printf("Potions:");
     scanf("%d", &Potions);
    gotoxy(37,14);printf("History_of_magic:");
     scanf("%d", &History_of_magic);
    gotoxy(37,15);printf("Astronomy:");
     scanf("%d", &Astronomy);
    gotoxy(37,16);printf("Charms:");
     scanf("%d", &Charms);
     clearWindow();
     gotoxy(37,8); printf("========HOGWARDS========\n");
   


     gotoxy(37,9);  printf("MARKSHEET :%d, %s\n", std, school_name);
      gotoxy(37,10);printf("========================\n");
      gotoxy(37,11); printf("Roll No.: %d\t Name: %s\n", rollno, name);
      gotoxy(37,13); printf("SUBJECT\t\t\tMARKS\n");
      gotoxy(37,15);printf("Defence against dark arts  %d \n", Defence_against_dark_arts);
      gotoxy(37,16);printf("Potions\t\t\t %d \n", Potions);
      gotoxy(37,17); printf("History of magic\t\t%d \n", History_of_magic);
      gotoxy(37,18);printf("Astronomy\t\t\t %d \n", Astronomy);
      gotoxy(37,19);printf("Charms\t\t\t%d \n", Charms);
      gotoxy(37,20);printf("--------------------------------------");
      gotoxy(37,21);printf("Total Marks:\t\t%d\n",Defence_against_dark_arts+Potions+History_of_magic+Astronomy+Charms);
     gotoxy(37,22); printf("===PRINCIPAL:ALBUS DUMBLEDORE===\n");
    }
void delete_student(){
    clearWindow();
    print_heading("Delete Record");
 char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);printf("Enter ID to Modify: ");fflush(stdin);
    gets(s_id);
    FILE *fp, *temp;
    fp = fopen("record.txt","rb");
   



 temp = fopen("temp.txt", "wb");
    while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.ID) == 0){
            fwrite(&stu,sizeof(stu),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(37,12);printf("The record is sucessfully deleted");
  return;
}
void main_window(){
clearWindow();
    int choice;
    int x = 2;
    while(1){
        gotoxy(x,8);printf("1. Add Student");
        gotoxy(x,10);printf("2. Search Student");
        gotoxy(x,12);printf("3. Modify Student Record");
        gotoxy(x,14);printf("4. Delete Student Record ");
        gotoxy(x,16);printf("5. Generate Marksheet");
        gotoxy(x,18);printf("6. Selecting your house");
        


         gotoxy(x,20);printf("7. Exit");
        gotoxy(x,22);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_student();
                break;
            case 2:
                search_student();
                break;
            case 3:
                mod_student();
                break;
            case 4:
                delete_student();
                break;
            case 5:
                 gen_marksheet(); 
                break;
            case 6:
                  house_record();
                 break;
            case 7:
                exit(0);
              


             break;
            default:
                break;
        }
 }
}
int main(){
    ClearConsole(17,15);
    SetConsoleTitle("Anjana Murali- Student Record System");
    window();
    use_pass_field();
    main_window();
    return 0;
}
