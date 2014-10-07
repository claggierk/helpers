#include <iostream>
#include <vector>

using namespace std;

void OutputVectorVector(const vector< vector<int> >& vv)
{
    cerr << endl;
    for(unsigned i = 0; i < vv.size(); i++)
    {
        cerr << endl;
        for(unsigned j = 0; j < vv.at(i).size(); j++)
        {
            cerr << endl << "vv[" << i << "][" << j << "] = " << vv[i][j];
        }
    }
}

void OutputVector(const vector<int>& v)
{
    cerr << endl;
    for(unsigned i = 0; i < v.size(); i++)
    {
        cerr << endl << "v[" << i << "] = " << v[i];
    }
}

int main()
{
    vector<int> v;
    for(unsigned i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    OutputVector(v);
    v.erase(v.begin()+v.size()-2);
    OutputVector(v);

    vector< vector<int> > vv;

    vv.push_back(v);
    vv.push_back(v);
    vv.push_back(v);
    OutputVectorVector(vv);

    // ensure that your .begin is on the vector you want to erase from
    vv.at(0).erase(vv.at(0).begin()+4);
    vv.at(1).erase(vv.at(1).begin()+5);
    vv.at(2).erase(vv.at(2).begin()+6);
    
    OutputVectorVector(vv);

    return 0;
}
