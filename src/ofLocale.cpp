//
//  ofLocale.cpp
//  ofxLocale
//
//  Created by Christopher Baker on 5/26/12.
//  Copyright (c) 2012 School of the Art Institute of Chicago. All rights reserved.
//

#include "ofLocale.h"

//------------------------------------------------------------------
ofLocale::ofLocale() {
    locale = Locale::Locale();
}

//------------------------------------------------------------------
ofLocale::ofLocale(const Locale& loc) {
    locale = loc;
}

////------------------------------------------------------------------
//ofLocale::ofLocale(const string& language) {
//    locale = Locale::Locale(language.c_str());
//}

//------------------------------------------------------------------
ofLocale::ofLocale(const string& language,const string& country) {
    locale = Locale::Locale(language.c_str(),country.c_str());
}

//------------------------------------------------------------------
ofLocale::ofLocale(const string& language,const string& country,const string& variant) {
    locale = Locale::Locale(language.c_str(),country.c_str(),variant.c_str());
}

//------------------------------------------------------------------
ofLocale::ofLocale(const string& language,const string& country,const string& variant,const string& keywordsAndValues) {
    locale = Locale::Locale(language.c_str(),country.c_str(),variant.c_str(),keywordsAndValues.c_str());
}

//------------------------------------------------------------------
ofLocale::~ofLocale() {}

//------------------------------------------------------------------
void ofLocale::setLocale(Locale loc) {
    locale = loc;
}

//------------------------------------------------------------------
Locale ofLocale::getLocale() const {
    return locale;
}

//------------------------------------------------------------------
bool ofLocale::isValid() const {
    return !locale.isBogus();
}

//------------------------------------------------------------------
string ofLocale::getISO3Language() const {
    return locale.getISO3Language();
}

//------------------------------------------------------------------
string ofLocale::getLanguage() const {
    return locale.getLanguage();
}

//------------------------------------------------------------------
string ofLocale::getScript() const {
    return locale.getScript();
}
//------------------------------------------------------------------
string ofLocale::getCountry() const {
    return locale.getCountry();
}

//------------------------------------------------------------------
string ofLocale::getISO3Country() const {
    return locale.getISO3Country();
}

//------------------------------------------------------------------
string ofLocale::getVariant() const {
    return locale.getVariant();
}
//------------------------------------------------------------------
string ofLocale::getName() const {
    return locale.getName();
}
//------------------------------------------------------------------
string ofLocale::getBaseName() const {
    return locale.getBaseName();
    
}

//------------------------------------------------------------------
int ofLocale::getLCID() const {
    return locale.getLCID();
    
}

//------------------------------------------------------------------
string ofLocale::getDisplayLanguage() {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayLanguage(str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayLanguage(const ofLocale& loc) {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayLanguage(loc.getLocale(),str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayScript() {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayScript(str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayScript(const ofLocale& loc) {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayScript(loc.getLocale(),str));
}


//------------------------------------------------------------------
string ofLocale::getDisplayCountry() {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayCountry(str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayCountry(const ofLocale& loc) {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayCountry(loc.getLocale(),str));
}


//------------------------------------------------------------------
string ofLocale::getDisplayVariant() {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayVariant(str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayVariant(const ofLocale& loc) {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayVariant(loc.getLocale(),str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayName() {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayName(str));
}

//------------------------------------------------------------------
string ofLocale::getDisplayName(const ofLocale& loc) {
    UnicodeString str;
    return ofUTF16::toUTF8(locale.getDisplayName(loc.getLocale(),str));
}



//------------------------------------------------------------------
vector<string> ofLocale::getISOCountries() {
    vector<string> countries;
    const char* const* counts = Locale::getISOCountries();
    int i = 0;
    while(counts[i] != NULL) countries.push_back(counts[i++]);
    return countries;
}

//------------------------------------------------------------------
vector<string> ofLocale::getISOLanguages() {
    vector<string> languages;
    const char* const* langs = Locale::getISOLanguages();
    int i = 0;
    while(langs[i] != NULL) languages.push_back(langs[i++]);
    return languages;
}

//------------------------------------------------------------------
vector<ofLocale> ofLocale::getAvailableLocales() {
    int cnt = 0;
    const Locale* locs = Locale::getAvailableLocales(cnt);
    vector<ofLocale> locales;
    for(int i = 0; i < cnt; i++) locales.push_back(ofLocale(locs[i]));
    return locales;
}

//------------------------------------------------------------------
ofLocale ofLocale::getRoot()      { return ofLocale(Locale::getRoot());       }
ofLocale ofLocale::getEnglish()   { return ofLocale(Locale::getEnglish());    }
ofLocale ofLocale::getFrench()    { return ofLocale(Locale::getFrench());     }
ofLocale ofLocale::getGerman()    { return ofLocale(Locale::getGerman());     }
ofLocale ofLocale::getItalian()   { return ofLocale(Locale::getItalian());    }
ofLocale ofLocale::getJapanese()  { return ofLocale(Locale::getJapanese());   }
ofLocale ofLocale::getKorean()    { return ofLocale(Locale::getKorean());     }
ofLocale ofLocale::getChinese()   { return ofLocale(Locale::getChinese());    }
ofLocale ofLocale::getSimplifiedChinese() { return ofLocale(Locale::getSimplifiedChinese()); }
ofLocale ofLocale::getTraditionalChinese() { return ofLocale(Locale::getTraditionalChinese()); }
ofLocale ofLocale::getFrance()    { return ofLocale(Locale::getFrance());     }
ofLocale ofLocale::getGermany()   { return ofLocale(Locale::getGermany());    }
ofLocale ofLocale::getItaly()     { return ofLocale(Locale::getItaly());      }
ofLocale ofLocale::getJapan()     { return ofLocale(Locale::getJapan());      }
ofLocale ofLocale::getKorea()     { return ofLocale(Locale::getKorea());      }
ofLocale ofLocale::getChina()     { return ofLocale(Locale::getChina());      }
ofLocale ofLocale::getPRC()       { return ofLocale(Locale::getPRC());        }
ofLocale ofLocale::getTaiwan()    { return ofLocale(Locale::getTaiwan());     }
ofLocale ofLocale::getUK()        { return ofLocale(Locale::getUK());         }
ofLocale ofLocale::getUS()        { return ofLocale(Locale::getUS());         }
ofLocale ofLocale::getCanada()    { return ofLocale(Locale::getCanada());     }
ofLocale ofLocale::getCanadaFrench() { return ofLocale(Locale::getCanadaFrench()); }







