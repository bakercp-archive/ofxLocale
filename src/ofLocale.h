//
//  ofLocale.h
//  ofxLocale
//
//  Created by Christopher Baker on 5/26/12.
//  Copyright (c) 2012 School of the Art Institute of Chicago. All rights reserved.
//

#pragma once

#include "ofMain.h"

#include "ofUnicode.h"
#include "ofUTF8.h"
#include "ofUTF16.h"
#include "ofUTF32.h"

#include "unicode/unistr.h"
#include "unicode/uloc.h"

#include "unicode/numfmt.h"
#include "unicode/rbnf.h" // RuleBasedNumberFormater, etc

class ofLocale {
public:

    ofLocale();
    ofLocale(const Locale& loc);
    ofLocale(const string& language,const string& country);
    ofLocale(const string& language,const string& country,const string& variant);
    ofLocale(const string& language,const string& country,const string& variant,const string& keywordsAndValues);
    
    virtual ~ofLocale();
    
    void setLocale(Locale loc);
    Locale getLocale() const;

    // is this a valid locale definition?
    bool isValid() const;
    
 	//  Returns the locale's ISO-639 language code. 
    string getLanguage () const;
    // returns the locale's three-letter language code, as specified in ISO draft standard ISO-639-2. 
    string getISO3Language() const;
    // 	Returns the locale's ISO-15924 abbreviation script code. 
    string getScript () const;
 	// Returns the locale's ISO-3166 country code. 
    string getCountry () const;
 	// Fills in "name" with the locale's three-letter ISO-3166 country code. 
    string getISO3Country() const;
    // Returns the locale's variant code. 
    string getVariant () const;
 	// Returns the programmatic name of the entire locale, with the language, country and variant separated by underbars. 
    string getName () const;
 	// Returns the programmatic name of the entire locale as getName would return, but without keywords.
    string getBaseName () const;

 	// Returns the Windows LCID value corresponding to this locale. 
    int getLCID() const;
    
    // gets display info in UTF8
    string getDisplayLanguage();
    string getDisplayLanguage(const ofLocale& local);
        
    string getDisplayScript();
    string getDisplayScript(const ofLocale& local);

    string getDisplayCountry();
    string getDisplayCountry(const ofLocale& local);

    string getDisplayVariant();
    string getDisplayVariant(const ofLocale& local);
    
    string getDisplayName();
    string getDisplayName(const ofLocale& local);
        
    
    // TODO: operators
    
    static vector<string> getISOCountries();
    static vector<string> getISOLanguages();

    static vector<ofLocale> getAvailableLocales();
    
    static ofLocale getRoot();
    static ofLocale getEnglish();
    static ofLocale getFrench();
    static ofLocale getGerman();
    static ofLocale getItalian();
    static ofLocale getJapanese();
    static ofLocale getKorean();
    static ofLocale getChinese();
    static ofLocale getSimplifiedChinese();
    static ofLocale getTraditionalChinese();
    static ofLocale getFrance();
    static ofLocale getGermany();
    static ofLocale getItaly();
    static ofLocale getJapan();
    static ofLocale getKorea();
    static ofLocale getChina();
    static ofLocale getPRC();
    static ofLocale getTaiwan();
    static ofLocale getUK();
    static ofLocale getUS();
    static ofLocale getCanada();
    static ofLocale getCanadaFrench();
    
protected:

private:
    
    Locale locale;
    
    
};
