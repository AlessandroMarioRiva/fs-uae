/*! \file configgraphics.cpp
 configgraphics.cpp

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
#include "configgraphics.h"
#include "amiga.h"
#include <algorithm>
#include <sstream>
using namespace std;

const string DEFAULTFULLSCREEN = "0";
const string DEFAULTFULLSCREENWIDTH = "";
const string DEFAULTFULLSCREENHEIGHT = "";
const string DEFAULTWINDOWWIDTH = "960";
const string DEFAULTWINDOWHEIGHT = "540";
const string DEFAULTWINDOWRESIZABLE = "1";
const string DEFAULTFSAA = "0";
const string DEFAULTKEEPASPECT = "0";

const string DEFAULTSCANLINES = "0";
const string DEFAULTRTGSCANLINES = "0";
const string DEFAULTSCANLINESDARK = "10";
const string DEFAULTSCANLINESLIGHT = "5";
const string DEFAULTSHADER = ""; //LISTA
const string DEFAULTLOWRESOLUTION = "0";
const string DEFAULTLINEDOUBLING = "1";
const string DEFAULTSCALEX = "-1.0";
const string DEFAULTSCALEY = "-1.0";
const string DEFAULTALIGNX = "0.5";
const string DEFAULTALIGNY = "0.5";
const string DEFAULTZOOM = "auto";
const string DEFAULTTEXTUREFILTER = "linear";

const string DEFAULTVIDEOSYNC = "auto";
const string DEFAULTVIDEOSYNCMETHOD = "finish-swap-finish";
const string DEFAULTVIDEOFORMAT = "bgra";
const string DEFAULTTEXTUREFORMAT = "rgb";

ConfigGraphics::ConfigGraphics()
{
    setToDefaultConfiguration();
}

string ConfigGraphics::getFullscreenConfigString()
{
    if (fullscreen.compare(DEFAULTFULLSCREEN)==0){return "";}
    else {return "fullscreen = " + fullscreen;}
}

string ConfigGraphics::getFullscreenString()
{
    return fullscreen;
}

string ConfigGraphics::getFullscreenWidthConfigString()
{
    if (fullscreen_width.compare(DEFAULTFULLSCREENWIDTH)==0){return "";}
    else {return "fullscreen_width = " + fullscreen_width;}
}

string ConfigGraphics::getFullscreenWidthString()
{
    return fullscreen_width;
}

string ConfigGraphics::getFullscreenHeightConfigString()
{
    if (fullscreen_height.compare(DEFAULTFULLSCREENHEIGHT)==0){return "";}
    else {return "fullscreen_height = " + fullscreen_height;}
}

string ConfigGraphics::getFullscreenHeightString()
{
    return fullscreen_height;
}

string ConfigGraphics::getWindowWidthConfigString()
{
    if (window_width.compare(DEFAULTWINDOWWIDTH)==0){return "";}
    else {return "window_width = " + window_width;}
}

string ConfigGraphics::getWindowWidthString()
{
    return window_width;
}

string ConfigGraphics::getWindowHeightConfigString()
{
    if (window_height.compare(DEFAULTWINDOWHEIGHT)==0){return "";}
    else {return "window_height = " + window_height;}
}

string ConfigGraphics::getWindowHeightString()
{
    return window_height;
}

string ConfigGraphics::getWindowResizableConfigString()
{
    if (window_resizable.compare(DEFAULTWINDOWRESIZABLE)==0){return "";}
    else {return "window_resizable = " + window_resizable;}
}

string ConfigGraphics::getWindowResizableString()
{
    return window_resizable;
}

string ConfigGraphics::getFsaaConfigString()
{
    if (fsaa.compare(DEFAULTFSAA)==0){return "";}
    else {return "fsaa = " + fsaa;}
}

string ConfigGraphics::getFsaaString()
{
    return fsaa;
}

string ConfigGraphics::getKeepAspectConfigString()
{
    if (keep_aspect.compare(DEFAULTKEEPASPECT)==0){return "";}
    else {return "keep_aspect = " + keep_aspect;}
}

string ConfigGraphics::getKeepAspectString()
{
    return keep_aspect;
}

string ConfigGraphics::getScanlinesConfigString()
{
    if (scanlines.compare(DEFAULTSCANLINES)==0){return "";}
    else {return "scanlines = " + scanlines;}
}

string ConfigGraphics::getScanlinesString()
{
    return scanlines;
}

string ConfigGraphics::getRtgScanlinesConfigString()
{
    if (rtg_scanlines.compare(DEFAULTRTGSCANLINES)==0){return "";}
    else {return "rtg_scanlines = " + rtg_scanlines;}
}

string ConfigGraphics::getRtgScanlinesString()
{
    return rtg_scanlines;
}

string ConfigGraphics::getScanlinesDarkConfigString()
{
    if (scanlines_dark.compare(DEFAULTSCANLINESDARK)==0){return "";}
    else {return "scanlines_dark = " + scanlines_dark;}
}

string ConfigGraphics::getScanlinesDarkString()
{
    return scanlines_dark;
}

string ConfigGraphics::getScanlinesLightConfigString()
{
    if (scanlines_light.compare(DEFAULTSCANLINESLIGHT)==0){return "";}
    else {return "scanlines_light = " + scanlines_light;}
}

string ConfigGraphics::getScanlinesLightString()
{
    return scanlines_light;
}

string ConfigGraphics::getShaderConfigString()
{
    if (shader.compare(DEFAULTSHADER)==0){return "";}
    else {return "shader = " + shader;}
}

string ConfigGraphics::getShaderString()
{
    return shader;
}

string ConfigGraphics::getLowResolutionConfigString()
{
    if (low_resolution.compare(DEFAULTLOWRESOLUTION)==0){return "";}
    else {return "low_resolution = " + low_resolution;}
}

string ConfigGraphics::getLowResolutionString()
{
    return low_resolution;
}

string ConfigGraphics::getLineDoublingConfigString()
{
    if (line_doubling.compare(DEFAULTLINEDOUBLING)==0){return "";}
    else {return "line_doubling = " + line_doubling;}
}

string ConfigGraphics::getLineDoublingString()
{
    return line_doubling;
}

string ConfigGraphics::getScaleXConfigString()
{
    if (scale_x.compare(DEFAULTSCALEX)==0){return "";}
    else {return "scale_x = " + scale_x;}
}

string ConfigGraphics::getScaleXString()
{
    return scale_x;
}

string ConfigGraphics::getScaleYConfigString()
{
    if (scale_y.compare(DEFAULTSCALEY)==0){return "";}
    else {return "scale_y = " + scale_y;}
}

string ConfigGraphics::getScaleYString()
{
    return scale_y;
}

string ConfigGraphics::getAlignXConfigString()
{
    if (align_x.compare(DEFAULTALIGNX)==0){return "";}
    else {return "align_x = " + align_x;}
}

string ConfigGraphics::getAlignXString()
{
    return align_x;
}

string ConfigGraphics::getAlignYConfigString()
{
    if (align_y.compare(DEFAULTALIGNY)==0){return "";}
    else {return "align_y = " + align_y;}
}

string ConfigGraphics::getAlignYString()
{
    return align_y;
}

string ConfigGraphics::getZoomConfigString()
{
    if (zoom.compare(DEFAULTZOOM)==0){return "";}
    else {return "zoom = " + zoom;}
}

string ConfigGraphics::getZoomString()
{
    return zoom;
}

string ConfigGraphics::getTextureFilterConfigString()
{
    if (texture_filter.compare(DEFAULTTEXTUREFILTER)==0){return "";}
    else {return "texture_filter = " + texture_filter;}
}

string ConfigGraphics::getTextureFilterString()
{
    return texture_filter;
}

string ConfigGraphics::getVideoSyncConfigString()
{
    if (video_sync.compare(DEFAULTVIDEOSYNC)==0){return "";}
    else {return "video_sync = " + video_sync;}
}

string ConfigGraphics::getVideoSyncString()
{
    return video_sync;
}

string ConfigGraphics::getVideoSyncMethodConfigString()
{
    if (video_sync_method.compare(DEFAULTVIDEOSYNCMETHOD)==0){return "";}
    else {return "video_sync_method = " + video_sync_method;}
}

string ConfigGraphics::getVideoSyncMethodString()
{
    return video_sync_method;
}

string ConfigGraphics::getVideoFormatConfigString()
{
    if (video_format.compare(DEFAULTVIDEOFORMAT)==0){return "";}
    else {return "video_format = " + video_format;}
}

string ConfigGraphics::getVideoFormatString()
{
    return video_format;
}

string ConfigGraphics::getTextureFormatConfigString()
{
    if (texture_format.compare(DEFAULTTEXTUREFORMAT)==0){return "";}
    else {return "texture_format = " + texture_format;}
}

string ConfigGraphics::getTextureFormatString()
{
    return texture_format;
}

bool ConfigGraphics::containsViewport(string s)
{
    if(std::find(viewport.begin(), viewport.end(), s) != viewport.end()) {
        return true;
    }
    return false;
}

int ConfigGraphics::getViewportSize()
{
    return viewport.size();
}

string ConfigGraphics::getViewportAt(int position)
{
    if (position>=(int)viewport.size()){return "";}
    return viewport.at(position);
}

void ConfigGraphics::eraseViewportAt(int position)
{
    if (position>=(int)viewport.size()){return;}
    viewport.erase(viewport.begin()+ position);
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
/** \brief Checks if n is a float
      * \param n is the string to be checked
      * \return true if n is a number
      */
bool static isFloat(string n){
    float valor;
    stringstream stream(n);
    stream >> valor;
    if (stream.fail()) {
        return false;
    }
    return true;
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

bool ConfigGraphics::isValidViewport(string viewportString)
{
    /* 74 40 640 400 => 74 36 640 400
    devono esserci 8 numeri positivi (oppure un "*") e un separatore "=>"
    */

    QStringList viewportList = QString::fromStdString(viewportString).split(" ");
    if(viewportList.count()!=9){
        return false;
    }
    if(viewportList.at(4).compare("=>")!=0){
        return false;
    }
    for(int i=0;i<viewportList.count();i++){
        if (i!=4){
            if (((isNumber(viewportList.at(i).toStdString())==false) && (viewportList.at(i).toStdString().compare("*")!=0))||
                    (isNumber(viewportList.at(i).toStdString()) && strToInt(viewportList.at(i).toStdString())<0)){
                return false;
            }
        }
    }
    return true;
}


int ConfigGraphics::setParameter(string parameter, string value)
{
    if(parameter.compare("fullscreen")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            fullscreen=value;}
        else{
            fullscreen=DEFAULTFULLSCREEN;
            return -1;
        }
    } else if(parameter.compare("fullscreen_width")==0){
        if (isNumber(value)){
            fullscreen_width=value;
        }else{
            fullscreen_width=DEFAULTFULLSCREENWIDTH;
            return -1;
        }
    } else if(parameter.compare("fullscreen_height")==0){
        if (isNumber(value)){
            fullscreen_height=value;
        }else{
            fullscreen_height=DEFAULTFULLSCREENHEIGHT;
            return -1;
        }
    } else if(parameter.compare("window_width")==0){
        if (isNumber(value)){
            window_width=value;
        }else{
            window_width=DEFAULTWINDOWWIDTH;
            return -1;
        }
    } else if(parameter.compare("window_height")==0){
        if (isNumber(value)){
            window_height=value;
        }else{
            window_height=DEFAULTWINDOWHEIGHT;
            return -1;
        }
    } else if(parameter.compare("window_resizable")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            window_resizable=value;}
        else{
            window_resizable=DEFAULTWINDOWRESIZABLE;
            return -1;
        }
    } else if(parameter.compare("fsaa")==0){
        if ((value.compare("0")==0)||(value.compare("2")==0)||(value.compare("4")==0)||(value.compare("8")==0)){
            fsaa=value;}
        else{
            fsaa=DEFAULTFSAA;
            return -1;
        }
    } else if(parameter.compare("keep_aspect")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            keep_aspect=value;}
        else{
            keep_aspect=DEFAULTKEEPASPECT;
            return -1;
        }
    } else if(parameter.compare("scanlines")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            scanlines=value;}
        else{
            scanlines=DEFAULTSCANLINES;
            return -1;
        }
    } else if(parameter.compare("rtg_scanlines")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            rtg_scanlines=value;}
        else{
            rtg_scanlines=DEFAULTRTGSCANLINES;
            return -1;
        }
    } else if(parameter.compare("scanlines_dark")==0){
        if (isNumber(value) && strToInt(value)>=0 && strToInt(value)<=100){
            scanlines_dark=value;
        }else{
            scanlines_dark=DEFAULTSCANLINESDARK;
            return -1;
        }
    } else if(parameter.compare("scanlines_light")==0){
        if (isNumber(value) && strToInt(value)>=0 && strToInt(value)<=100){
            scanlines_light=value;
        }else{
            scanlines_light=DEFAULTSCANLINESLIGHT;
            return -1;
        }
    } else if(parameter.compare("shader")==0){
        if ((value.compare("")==0)||(value.compare("crt")==0)||(value.compare("curvature")==0)||(value.compare("scanline-3x")==0)||(value.compare("heavybloom")==0)||(value.compare("simplebloom")==0)||(value.compare("edge-detection")==0)||(value.compare("lanczos-6tap")==0)||(value.compare("hq2x")==0)||(value.compare("scale2x")==0)){
            shader=value;}
        else{
            shader=DEFAULTSHADER;
            return -1;
        }
    } else if(parameter.compare("low_resolution")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            low_resolution=value;}
        else{
            low_resolution=DEFAULTLOWRESOLUTION;
            return -1;
        }
    } else if(parameter.compare("line_doubling")==0){
        if ((value.compare("0")==0)||(value.compare("1")==0)){
            line_doubling=value;}
        else{
            line_doubling=DEFAULTLINEDOUBLING;
            return -1;
        }
    } else if(parameter.compare("scale_x")==0){
        if (isFloat(value)){
            scale_x=value;
        }else{
            scale_x=DEFAULTSCALEX;
            return -1;
        }
    } else if(parameter.compare("scale_y")==0){
        if (isFloat(value)){
            scale_y=value;
        }else{
            scale_y=DEFAULTSCALEY;
            return -1;
        }
    } else if(parameter.compare("align_x")==0){
        if (isFloat(value)){
            align_x=value;
        }else{
            align_x=DEFAULTALIGNX;
            return -1;
        }
    } else if(parameter.compare("align_y")==0){
        if (isFloat(value)){
            align_y=value;
        } else {
            align_y=DEFAULTALIGNY;
            return -1;
        }
    } else if(parameter.compare("zoom")==0){
        if ((value.compare("auto")==0)||(value.compare("full")==0)||(value.compare("640x400")==0)||(value.compare("640x400+border")==0)||(value.compare("640x480")==0)||(value.compare("640x480+border")==0)||(value.compare("640x512")==0)||(value.compare("640x512+border")==0)){
            zoom=value;
        } else {
            zoom=DEFAULTZOOM;
            return -1;
        }
    } else if(parameter.compare("texture_filter")==0){
        if ((value.compare("linear")==0)||(value.compare("nearest")==0)){
            texture_filter=value;}
        else{
            texture_filter=DEFAULTTEXTUREFILTER;
            return -1;
        }
    } else if(parameter.compare("video_sync")==0){
        if ((value.compare("auto")==0)||(value.compare("off")==0)||(value.compare("vblank")==0)||(value.compare("full")==0)){
            video_sync=value;}
        else{
            video_sync=DEFAULTVIDEOSYNC;
            return -1;
        }
    } else if(parameter.compare("video_sync_method")==0){
        if ((value.compare("finish-swap-finish")==0)||(value.compare("swap")==0)||(value.compare("swap-finish")==0)||(value.compare("finish-sleep-swap-finish")==0)||(value.compare("sleep-swap-finish")==0)||(value.compare("swap-fence")==0)||(value.compare("swap-sleep-fence")==0)){
            video_sync_method=value;}
        else{
            video_sync_method=DEFAULTVIDEOSYNCMETHOD;
            return -1;
        }
    } else if(parameter.compare("video_format")==0){
        if ((value.compare("bgra")==0)||(value.compare("rgba")==0)){
            video_format=value;}
        else{
            video_format=DEFAULTVIDEOFORMAT;
            return -1;
        }
    } else if(parameter.compare("texture_format")==0){
        if ((value.compare("rgb")==0)||(value.compare("rgb8")==0)||(value.compare("rgba")==0)||(value.compare("rgba8")==0)){
            texture_format=value;}
        else{
            texture_format=DEFAULTTEXTUREFORMAT;
            return -1;
        }
    } else if(parameter.compare("viewport")==0){
        int invalidViewport=0;
        QStringList viewportList = QString::fromStdString(value).split(",");
        for(int i=0;i<viewportList.count();i++){
            string currentViewport=viewportList.at(i).toStdString();
            if(isValidViewport(currentViewport)){
                if(!containsViewport(currentViewport)){
                    viewport.push_back(currentViewport);
                }
            } else {
                invalidViewport++;
            }
        }
        if (invalidViewport>0){ return -1;}
    }
    return 0;
}

void ConfigGraphics::setToDefaultConfiguration()
{
    fullscreen=DEFAULTFULLSCREEN;
    fullscreen_width=DEFAULTFULLSCREENWIDTH;
    fullscreen_height=DEFAULTFULLSCREENHEIGHT;
    window_width=DEFAULTWINDOWWIDTH;
    window_height=DEFAULTWINDOWHEIGHT;
    window_resizable=DEFAULTWINDOWRESIZABLE;
    fsaa=DEFAULTFSAA;
    keep_aspect=DEFAULTKEEPASPECT;

    scanlines=DEFAULTSCANLINES;
    rtg_scanlines=DEFAULTRTGSCANLINES;
    scanlines_dark=DEFAULTSCANLINESDARK;
    scanlines_light=DEFAULTSCANLINESLIGHT;
    shader=DEFAULTSHADER;
    low_resolution=DEFAULTLOWRESOLUTION;
    line_doubling=DEFAULTLINEDOUBLING;
    scale_x=DEFAULTSCALEX;
    scale_y=DEFAULTSCALEY;
    align_x=DEFAULTALIGNX;
    align_y=DEFAULTALIGNY;
    zoom=DEFAULTZOOM;
    texture_filter=DEFAULTTEXTUREFILTER;

    video_sync=DEFAULTVIDEOSYNC;
    video_sync_method=DEFAULTVIDEOSYNCMETHOD;
    video_format=DEFAULTVIDEOFORMAT;
    texture_format=DEFAULTTEXTUREFORMAT;

    viewport.clear();
}

bool ConfigGraphics::hasParameter(string parameterName)
{
    return (parameterName.compare("fullscreen")==0)||(parameterName.compare("fullscreen_width")==0)||(parameterName.compare("fullscreen_height")==0)||
            (parameterName.compare("window_width")==0)||(parameterName.compare("window_height")==0)||(parameterName.compare("window_resizable")==0)||
            (parameterName.compare("fsaa")==0)||(parameterName.compare("keep_aspect")==0)||(parameterName.compare("scanlines")==0)||
            (parameterName.compare("rtg_scanlines")==0)||(parameterName.compare("scanlines_dark")==0)||(parameterName.compare("scanlines_light")==0)||
            (parameterName.compare("shader")==0)||(parameterName.compare("low_resolution")==0)||(parameterName.compare("line_doubling")==0)||
            (parameterName.compare("scale_x")==0)||(parameterName.compare("scale_y")==0)||(parameterName.compare("align_x")==0)||
            (parameterName.compare("align_y")==0)||(parameterName.compare("zoom")==0)||(parameterName.compare("texture_filter")==0)||
            (parameterName.compare("video_sync")==0)||(parameterName.compare("video_sync")==0)||(parameterName.compare("video_format")==0)||
            (parameterName.compare("texture_format")==0)||(parameterName.compare("viewport")==0);
}
