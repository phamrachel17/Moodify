//
//  main.cpp
//  readJSON
//
//  Created by Adrian on 3/9/22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "panelClasses.h"

using namespace std;

//int main(int argc, const char * argv[]) {
//
//    ifstream fileJSON;
//    fileJSON.open("input.txt");
//    string line;
//    if (!fileJSON) {
//        cout << "doesn't work\n";
//    }
//    while(getline(fileJSON, line)) {
//        if (line.find("name") != string::npos) {
//            //cout << "found\n";
//            size_t pos = line.find("name");
//            cout << line.substr(pos+7) << endl;
//        }
//    }
//    return 0;
//}


int main(int argc, const char * argv[]) {
    
    ifstream fileJSON;
    fileJSON.open("topArtists.json");
    string line;
    if (!fileJSON) {
        cout << "doesn't work\n";
    }
    getline(fileJSON, line);
    size_t pth = line.find("]");
//    cout << pth << endl;
//    cout << line.size();
    line = line.substr(2,pth-2);
    //studentIDs.push_back(line.substr(line.find(',')+1, line.size()-1));
    
    PanelArtist topArtists;
    for(int i=0; i<3; i++) {
        size_t comma = line.find(",");
        //cout << line.substr(0,comma) << endl;
        string artistName = line.substr(0,comma);
        artistName.erase(std::remove(artistName.begin(), artistName.end(), '"'), artistName.end());
        //cout << artistName << endl;
        
        line = line.substr(comma+2);
        
        Artist a(artistName);
        
        topArtists.addArtist(a);
        
    }
    //cout << topArtists.getTopArtist().at(0).getName() << endl;
    
    
    
    ifstream fileJSON2;
    fileJSON2.open("topSongs.json");
    
    if (!fileJSON2) {
        cout << "doesn't work\n";
    }
    getline(fileJSON2, line);
    pth = line.find("]");
//    cout << pth << endl;
//    cout << line.size();
    line = line.substr(2,pth-2);
//    cout << line << endl;
    //studentIDs.push_back(line.substr(line.find(',')+1, line.size()-1));
    
    PanelSong topSongs;
    
    for(int i=0; i<5; i++) {
        size_t comma = line.find(",");
        //cout << line.substr(0,comma) << endl;
        string songName = line.substr(0,comma);
        songName.erase(std::remove(songName.begin(), songName.end(), '"'), songName.end());
        size_t pipe = line.find("|");
        string artistName = songName.substr(pipe+1);
        songName = songName.substr(0, pipe);
        
        line = line.substr(comma+2);
        
        Song s(songName, artistName);
        //cout << s.getTitle() << " by "<< s.getArtist() << endl << endl;
        
        topSongs.addSong(s);
        
    }
    
    ifstream fileJSON3;
    fileJSON3.open("topGenres.json");
    if (!fileJSON3) {
        cout << "doesn't work\n";
    }
    getline(fileJSON3, line);
    pth = line.find("]");
    line = line.substr(2,pth-2);
    //studentIDs.push_back(line.substr(line.find(',')+1, line.size()-1));
    
    PanelGenre topGenres;
    for(int i=0; i<4; i++) {
        size_t comma = line.find(",");
        //cout << line.substr(0,comma) << endl;
        string genreName = line.substr(0,comma);
        genreName.erase(std::remove(genreName.begin(), genreName.end(), '"'), genreName.end());
        //cout << artistName << endl;
        
        line = line.substr(comma+2);
        
        topGenres.addGenre(genreName);
        //cout << genreName << endl;
    }
    
    return 0;
}


