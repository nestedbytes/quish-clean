#include <windows.h> 
#include <stdio.h>
#include <dirent.h>
int WINAPI 
WinMain (HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpCmdLine, int nShowCmd) 
{ 
  MessageBoxW (NULL, L"Our software performs a lot of automated steps. It wont show any effect if you have done these steps manualy. Also make sure to run this a admin ", L"WARNING", MB_OK | MB_ICONINFORMATION); 
    DIR *temp1 = opendir("C:/Windows/Temp");
    DIR *temp2 = opendir("C:/Users/%userprofile%/AppData/Local/Temp");
    struct dirent *next_file;
    char filepath[256];

    while ( (next_file = readdir(temp1)) != NULL )
    {
        // build the path for each file in the folder
        sprintf(filepath, "%s/%s", "C:/Windows/Temp", next_file->d_name);
        remove(filepath);
    }
    closedir(temp1);
  
    FILE *file;
    
    if (file = fopen("quish-script.bat", "r")) 
    {
        fclose(file);
      system("quish-script.bat");
    }
    else
    {
        printf("Important file doesnt exist downloading.......");
    }
}