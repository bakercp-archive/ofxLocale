#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    // note, this is not a graphical demo.  all output will show up in the console.
    
    ofLocale displayAsFrench = ofLocale::getFrance();
    ofLocale displayAsPRC = ofLocale::getPRC();
    
    {
        ofLocale loc;
        cout << loc.getLanguage();
        cout << "|" << loc.getISO3Language();
        cout << "|" << loc.getScript();
        cout << "|" << loc.getCountry();
        cout << "|" << loc.getISO3Country();
        cout << "|" << loc.getVariant();
        cout << "|" << loc.getName();
        cout << "|" << loc.getBaseName();
        cout << "|" << loc.getLCID();
        cout << "|" << loc.getDisplayName(displayAsFrench);
        cout << "|" << loc.getDisplayCountry(displayAsPRC);
        cout << endl;
    }        
    
    {
        ofLocale loc("xxxxxxx_xx");
        cout << loc.getLanguage();
        cout << "|" << loc.getISO3Language();
        cout << "|" << loc.getScript();
        cout << "|" << loc.getCountry();
        cout << "|" << loc.getISO3Country();
        cout << "|" << loc.getVariant();
        cout << "|" << loc.getName();
        cout << "|" << loc.getBaseName();
        cout << "|" << loc.getLCID();
        cout << "|" << loc.getDisplayName(displayAsFrench);
        cout << "|" << loc.getDisplayCountry(displayAsPRC);
        cout << endl;
    }        

    {
        ofLocale loc = ofLocale::getTaiwan();
        cout << loc.getLanguage();
        cout << "|" << loc.getISO3Language();
        cout << "|" << loc.getScript();
        cout << "|" << loc.getCountry();
        cout << "|" << loc.getISO3Country();
        cout << "|" << loc.getVariant();
        cout << "|" << loc.getName();
        cout << "|" << loc.getBaseName();
        cout << "|" << loc.getLCID();
        cout << "|" << loc.getDisplayName(displayAsFrench);
        cout << "|" << loc.getDisplayCountry(displayAsPRC);
        cout << endl;
    }    
    
    {
        ofLocale loc = ofLocale::getJapan();
        cout << loc.getLanguage();
        cout << "|" << loc.getISO3Language();
        cout << "|" << loc.getScript();
        cout << "|" << loc.getCountry();
        cout << "|" << loc.getISO3Country();
        cout << "|" << loc.getVariant();
        cout << "|" << loc.getName();
        cout << "|" << loc.getBaseName();
        cout << "|" << loc.getLCID();
        cout << "|" << loc.getDisplayName(displayAsFrench);
        cout << "|" << loc.getDisplayCountry(displayAsPRC);
        cout << endl;
    }  
    
    {
        ofLocale loc("ca_fr");
        cout << loc.getLanguage();
        cout << "|" << loc.getISO3Language();
        cout << "|" << loc.getScript();
        cout << "|" << loc.getCountry();
        cout << "|" << loc.getISO3Country();
        cout << "|" << loc.getVariant();
        cout << "|" << loc.getName();
        cout << "|" << loc.getBaseName();
        cout << "|" << loc.getLCID();
        cout << "|" << loc.getDisplayName(displayAsFrench);
        cout << "|" << loc.getDisplayCountry(displayAsPRC);
        cout << endl;
    }   

    vector<string> countries = ofLocale::getISOCountries();
    cout << ofToString(countries) << endl;
    vector<string> langs = ofLocale::getISOLanguages();
    cout << ofToString(langs) << endl;
    
    vector<ofLocale> locs = ofLocale::getAvailableLocales();
    for(int i = 0; i < locs.size(); i++) {
        cout << ofToString(locs[i].getDisplayName()) << endl;
    }


    
    //"Country codes generated from from "www.sil.org/iso639-3/
    
}