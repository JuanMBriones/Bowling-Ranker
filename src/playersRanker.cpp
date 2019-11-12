#include "playersRanker.hpp"
#include "fileManager.hpp"
#include "logicMotor.hpp"

using namespace std;

struct Players{
  string name;
  double score;
};

playersRanker::rankPlayers() {
  // mostrar los 3 mejores
  fstream inputFile;
  inputFile.open("E:\Training\Tec\Tercero\IngSoft\SurfsUp\results.txt");
  if(FileCheck(inputFile)) {
    vector<Players> players;

    while(!inputFile.eof()) {
      people temp;

      inputFile >> temp.name;
      inputFile >> temp.score;

      players.push_back(temp);
    }
    inputFile.close();

    int position = 1;
    for(Players counter : players) {
        cout << "Position #" << position++;
        cout << " is for " << counter.name << " ---> " << counter.score << endl;
        if(position==4) {
          break;
        }
    }
  }
  else {
    cout << "Error in the input file!" << endl;
  }
}
