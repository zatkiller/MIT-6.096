#include <vector>

using namespace std;

class Graph {
protected:
    map<int, vector<int> > outgoing;

public:
    Graph (const vector<int> &startPoints, const vector<int> &endPoints);
    int numOutgoing (const int nodeID) const;
    const vector <int> &adjacent(const int nodeID) const;
};