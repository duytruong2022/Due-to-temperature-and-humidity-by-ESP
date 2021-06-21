#include "SiotCore.h"
ConnectInternet cni;
ConnectServer cns;
SiotCore::SiotCore(){};
SiotCore::~SiotCore(){};
void SiotCore::init(){
    this->_baudrate =115200;
    this->_ssid = "TRUONG HIEU";
    this->_pass = "17191912";
    this->_version ="0.0";
    Debug::SCREEN_WELCOME();

}

void SiotCore::info(){

}

void SiotCore::updateFirmware(String version){
    Serial.begin(this->_baudrate);
    Serial.println("Hello");
    //cni.resetConnect();
    if(this->_version != version){
        while(!cni.isConnected()){
            cni.connect();
            // Serial.println("Hello");
        }
        cns.updateFirmware(version);
        // while(cni.isConnected()){
        //     if(cns.isServerConnected()){
        //         cns.updateFirmware(version);
        //         this->_version =version;
        //     }else{
        //         Serial.println("Fail!");
        //     }
        // }
    }else{
        Serial.println("This is newiest version!");
    }
    
}
void SiotCore::updateData(){
    while(!cni.isConnected()){
        cni.connect();
    }
    while(cni.isConnected()){
        if(cns.isServerConnected()){
            cns.pushData();
        }else{
            Serial.println("Fail!");
        }
    }
}
void SiotCore::updateData(String URI, String value, String& response,int method){
    while(!cni.isConnected()){
        cni.connect();
    }
    cns.communicationSever(URI,value,response,method);
    // response = "abc";
}