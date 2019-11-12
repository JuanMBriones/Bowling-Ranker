#include <iostream>
#include <vector>

using namespace std;

struct Players{
  string name;
  double score;
};

bool acompare(people lhs, people rhs) { return lhs.score > rhs.score; }

class logicMotor{
public:
  vector<Players> getScores(vector<Players> &players);
};
