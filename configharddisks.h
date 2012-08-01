#ifndef CONFIGHARDDISKS_H
#define CONFIGHARDDISKS_H
#include <string>
using namespace std;

class ConfigHardDisks
{
    //string hard_drive_0;
    string hard_drive[10];
    //string hard_drive_0_label;
    string hard_drive_label[10];
    //string hard_drive_0_read_only;
    string hard_drive_read_only[10];

public:
    ConfigHardDisks();

    string getHardDriveConfigStringAt(int i);
    string getHardDriveStringAt(int i);
    string getHardDriveLabelConfigStringAt(int i);
    string getHardDriveLabelStringAt(int i);
    string getHardDriveReadOnlyConfigStringAt(int i);
    string getHardDriveReadOnlyStringAt(int i);

    void setParameter(string parameter,string value);
    void setToDefaultConfiguration();
};

#endif // CONFIGHARDDISKS_H