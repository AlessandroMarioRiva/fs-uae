/*! \file configmisc.cpp
 configmisc.cpp

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 Written by Riva Alessandro Mario, alessandromario.riva@gmail.com
 and Sanvito Davide, dsanvito90@gmail.com. */
#include "configmisc.h"
#include "amiga.h"
#include <QString>
#include <sstream>

const string DEFAULTINPUTGRAB = "1";
const string DEFAULTAUTOMATICINPUTGRAB = "1";
const string DEFAULTBSDSOCKET = "0";
const string DEFAULTAUDIOBUFFER = "8192";
const string DEFAULTMOUSESPEED = "100";
const string DEFAULTTITLE = "";
const string DEFAULTSUBTITLE = "";

const string DEFAULTNETPLAYSERVER = "";
const string DEFAULTNETPLAYPORT = "25100";
const string DEFAULTNETPLAYTAG = "";
const string DEFAULTNETPLAYPASSWORD = "";

const string DEFAULTDIR = "";

ConfigMisc::ConfigMisc()
{
    setToDefaultConfiguration();
}

string ConfigMisc::getInputGrabConfigString()
{
    if (input_grab.compare(DEFAULTINPUTGRAB)==0){return "";}
    else {return "input_grab = " + input_grab;}
}

string ConfigMisc::getInputGrabString()
{
    return input_grab;
}

string ConfigMisc::getAutomaticInputGrabConfigString()
{
    if (automatic_input_grab.compare(DEFAULTAUTOMATICINPUTGRAB)==0){return "";}
    else {return "automatic_input_grab = " + automatic_input_grab;}
}

string ConfigMisc::getAutomaticInputGrabString()
{
    return automatic_input_grab;
}

string ConfigMisc::getBsdSocketLibraryConfigString()
{
    if (bsdsocket_library.compare(DEFAULTBSDSOCKET)==0){return "";}
    else {return "bsdsocket_library = " + bsdsocket_library;}
}

string ConfigMisc::getBsdSocketLibraryString()
{
    return bsdsocket_library;
}

string ConfigMisc::getAudioBufferConfigString()
{
    if (audio_buffer_target_bytes.compare(DEFAULTAUDIOBUFFER)==0){return "";}
    else {return "audio_buffer_target_bytes = " + audio_buffer_target_bytes;}
}

string ConfigMisc::getAudioBufferString()
{
    return audio_buffer_target_bytes;
}

string ConfigMisc::getMouseSpeedConfigString()
{
    if (mouse_speed.compare(DEFAULTMOUSESPEED)==0){return "";}
    else {return "uae_input.mouse_speed = " + mouse_speed;}
}

string ConfigMisc::getMouseSpeedString()
{
    return mouse_speed;
}

string ConfigMisc::getTitleConfigString()
{
    if (title.compare(DEFAULTTITLE)==0){return "";}
    else {return "title = " + title;}
}

string ConfigMisc::getTitleString()
{
    return title;
}

string ConfigMisc::getSubTitleConfigString()
{
    if (sub_title.compare(DEFAULTSUBTITLE)==0){return "";}
    else {return "sub_title = " + sub_title;}
}

string ConfigMisc::getSubTitleString()
{
    return sub_title;
}

string ConfigMisc::getNetPlayServerConfigString()
{
    if (netplay_server.compare(DEFAULTNETPLAYSERVER)==0){return "";}
    else {return "netplay_server = " + netplay_server;}
}

string ConfigMisc::getNetPlayServerString()
{
    return netplay_server;
}

string ConfigMisc::getNetPlayPortConfigString()
{
    if (netplay_port.compare(DEFAULTNETPLAYPORT)==0){return "";}
    else {return "netplay_port = " + netplay_port;}
}

string ConfigMisc::getNetPlayPortString()
{
    return netplay_port;
}

string ConfigMisc::getNetPlayTagConfigString()
{
    if (netplay_tag.compare(DEFAULTNETPLAYTAG)==0){return "";}
    else {return "netplay_tag = " + netplay_tag;}
}

string ConfigMisc::getNetPlayTagString()
{
    return netplay_tag;
}

string ConfigMisc::getNetPlayPasswordConfigString()
{
    if (netplay_password.compare(DEFAULTNETPLAYPASSWORD)==0){return "";}
    else {return "netplay_password = " + netplay_password;}
}

string ConfigMisc::getNetPlayPasswordString()
{
    return netplay_password;
}

string ConfigMisc::getBaseDirConfigString()
{
    if (base_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "base_dir = " + base_dir;}
}

string ConfigMisc::getBaseDirString()
{
    return base_dir;
}

string ConfigMisc::getKickstartsDirConfigString()
{
    if (kickstarts_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "kickstarts_dir = " + kickstarts_dir;}
}

string ConfigMisc::getKickstartsDirString()
{
    return kickstarts_dir;
}

string ConfigMisc::getSaveStatesDirConfigString()
{
    if (save_states_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "save_states_dir = " + save_states_dir;}
}

string ConfigMisc::getSaveStatesDirString()
{
    return save_states_dir;
}

string ConfigMisc::getFloppyOverlaysDirConfigString()
{
    if (floppy_overlays_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "floppy_overlays_dir = " + floppy_overlays_dir;}
}

string ConfigMisc::getFloppyOverlaysDirString()
{
    return floppy_overlays_dir;
}

string ConfigMisc::getFlashMemoryDirConfigString()
{
    if (flash_memory_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "flash_memory_dir = " + flash_memory_dir;}
}

string ConfigMisc::getFlashMemoryDirString()
{
    return flash_memory_dir;
}

string ConfigMisc::getControllersDirConfigString()
{
    if (controllers_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "controllers_dir = " + controllers_dir;}
}

string ConfigMisc::getControllersDirString()
{
    return controllers_dir;
}

string ConfigMisc::getLogsDirConfigString()
{
    if (logs_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "logs_dir = " + logs_dir;}
}

string ConfigMisc::getLogsDirString()
{
    return logs_dir;
}

string ConfigMisc::getHardDrivesDirConfigString()
{
    if (hard_drives_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "hard_drives_dir = " + hard_drives_dir;}
}

string ConfigMisc::getHardDrivesDirString()
{
    return hard_drives_dir;
}

string ConfigMisc::getCDRomsDirConfigString()
{
    if (cdroms_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "cdroms_dir = " + cdroms_dir;}
}

string ConfigMisc::getCDRomsDirString()
{
    return cdroms_dir;
}

string ConfigMisc::getFloppiesDirConfigString()
{
    if (floppies_dir.compare(DEFAULTDIR)==0){return "";}
    else {return "floppies_dir = " + floppies_dir;}
}

string ConfigMisc::getFloppiesDirString()
{
    return floppies_dir;
}

////////////////////////////////////////////////////////////////////////////////////////////
/** \brief Checks if s is a number
      * \param s is the string to be checked
      * \return true if s is a number
      */
bool static isNumber(string s){
    istringstream buffer(s);
    int intValue;
    buffer >> intValue;
    //la conversione ritorna 0 se non è un numero. Devo stare attento al caso in cui la stringa sia proprio "0"
    if (intValue==0 && s.compare("0")==0) return true;
    return intValue!=0;
}
/** \brief Convert a string to an integer
      * \param s is the string to be converted
      * \return s as integer
      */
int static strToInt(string s){
    istringstream buffer(s);
    int intValue;
    buffer >> intValue;
    return intValue;
}
////////////////////////////////////////////////////////////////////////////

int ConfigMisc::setParameter(string parameter, string value)
{
    if(parameter.compare("input_grab")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            input_grab=value;}
        else{
            input_grab=DEFAULTINPUTGRAB;
            return -1;
        }
    } else if(parameter.compare("automatic_input_grab")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            automatic_input_grab=value;}
        else{
            automatic_input_grab=DEFAULTAUTOMATICINPUTGRAB;
            return -1;
        }
    } else if(parameter.compare("bsdsocket_library")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            bsdsocket_library=value;}
        else{
            bsdsocket_library=DEFAULTBSDSOCKET;
            return -1;
        }
    } else if(parameter.compare("audio_buffer_target_bytes")==0){
        if (isNumber(value) && strToInt(value)>0){
            audio_buffer_target_bytes=value;
        }else{
            audio_buffer_target_bytes=DEFAULTAUDIOBUFFER;
            return -1;
        }
    } else if(parameter.compare("uae_input.mouse_speed")==0){
        if (isNumber(value) && strToInt(value)>0){
            mouse_speed=value;
        }else{
            mouse_speed=DEFAULTMOUSESPEED;
            return -1;
        }
    } else if(parameter.compare("title")==0){
        title=value;
    } else if(parameter.compare("sub_title")==0){
        sub_title=value;
    } else if(parameter.compare("netplay_server")==0){
        QStringList ipOctetsList = QString::fromStdString(value).split(".");
        if(ipOctetsList.count()!=4){
            netplay_server=DEFAULTNETPLAYSERVER;
            return -1;
        }
        for(int i=0;i<ipOctetsList.count();i++){
            if ((isNumber(ipOctetsList.at(i).toStdString())==false)||
                    (isNumber(ipOctetsList.at(i).toStdString()) && ((strToInt(ipOctetsList.at(i).toStdString())<0) || strToInt(ipOctetsList.at(i).toStdString())>255))){
                netplay_server=DEFAULTNETPLAYSERVER;
                return -1;
            }
        }
        netplay_server=value;
    } else if(parameter.compare("netplay_port")==0){
        if (isNumber(value) && strToInt(value)>0){
            netplay_port=value;
        }else{
            netplay_port=DEFAULTNETPLAYPORT;
            return -1;
        }
    } else if(parameter.compare("netplay_tag")==0){
        if (value.compare("")!=0){
            netplay_tag=value;}
        else{
            netplay_tag=DEFAULTNETPLAYTAG;
        }
    } else if(parameter.compare("netplay_password")==0){
        if (value.compare("")!=0){
            netplay_password=value;}
        else{
            netplay_password=DEFAULTNETPLAYPASSWORD;
        }
    } else if(parameter.compare("base_dir")==0){
        base_dir=value;
    } else if(parameter.compare("kickstarts_dir")==0){
        kickstarts_dir=value;
    } else if(parameter.compare("save_states_dir")==0){
        save_states_dir=value;
    } else if(parameter.compare("floppy_overlays_dir")==0){
        floppy_overlays_dir=value;
    } else if(parameter.compare("flash_memory_dir")==0){
        flash_memory_dir=value;
    } else if(parameter.compare("controllers_dir")==0){
        controllers_dir=value;
    } else if(parameter.compare("logs_dir")==0){
        logs_dir=value;
    } else if(parameter.compare("hard_drives_dir")==0){
        hard_drives_dir=value;
    } else if(parameter.compare("cdroms_dir")==0){
        cdroms_dir=value;
    } else if(parameter.compare("floppies_dir")==0){
        floppies_dir=value;
    }
    return 0;
}

void ConfigMisc::setToDefaultConfiguration()
{
    input_grab=DEFAULTINPUTGRAB;
    automatic_input_grab=DEFAULTAUTOMATICINPUTGRAB;
    bsdsocket_library=DEFAULTBSDSOCKET;
    audio_buffer_target_bytes=DEFAULTAUDIOBUFFER;
    mouse_speed=DEFAULTMOUSESPEED;
    title=DEFAULTTITLE;
    sub_title=DEFAULTSUBTITLE;

    netplay_server=DEFAULTNETPLAYSERVER;
    netplay_port=DEFAULTNETPLAYPORT;
    netplay_tag=DEFAULTNETPLAYTAG;
    netplay_password=DEFAULTNETPLAYPASSWORD;

    base_dir=DEFAULTDIR;
    kickstarts_dir=DEFAULTDIR;
    save_states_dir=DEFAULTDIR;
    floppy_overlays_dir=DEFAULTDIR;
    flash_memory_dir=DEFAULTDIR;
    controllers_dir=DEFAULTDIR;
    logs_dir=DEFAULTDIR;
    hard_drives_dir=DEFAULTDIR;
    cdroms_dir=DEFAULTDIR;
    floppies_dir=DEFAULTDIR;
}

bool ConfigMisc::hasParameter(string parameterName)
{
    return (parameterName.compare("input_grab")==0)||(parameterName.compare("automatic_input_grab")==0)||(parameterName.compare("bsdsocket_library")==0)||
            (parameterName.compare("audio_buffer_target_bytes")==0)||(parameterName.compare("title")==0)||(parameterName.compare("sub_title")==0)||
            (parameterName.compare("netplay_server")==0)||(parameterName.compare("netplay_port")==0)||(parameterName.compare("netplay_tag")==0)||
            (parameterName.compare("base_dir")==0)||(parameterName.compare("kickstarts_dir")==0)||(parameterName.compare("save_states_dir")==0)||
            (parameterName.compare("floppy_overlays_dir")==0)||(parameterName.compare("flash_memory_dir")==0)||(parameterName.compare("controllers_dir")==0)||
            (parameterName.compare("logs_dir")==0)||(parameterName.compare("hard_drives_dir")==0)||(parameterName.compare("cdroms_dir")==0)||
            (parameterName.compare("floppies_dir")==0)||(parameterName.compare("netplay_password")==0)||(parameterName.compare("uae_input.mouse_speed")==0);
}
