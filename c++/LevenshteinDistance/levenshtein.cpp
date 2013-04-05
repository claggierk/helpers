#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned ComputeLevenshteinDistance(string s, string t)
{
    // for all i and j, d[i,j] will hold the Levenshtein distance between
    // the first i characters of s and the first j characters of t;
    // note that d has (m+1)x(n+1) values
    
    unsigned m = s.size() - 1;
    unsigned n = t.size() - 1;
    
    vector< vector<unsigned> > d;
    for(unsigned i = 0; i < m+2; i++)
    {
        vector<unsigned> temp;
        d.push_back(temp);
        for(unsigned j = 0; j < n+2; j++)
        {
            d.at(i).push_back(0);
        }
    }
    
    for(unsigned i = 0; i < m+2; i++)
    {
        d.at(i).at(0) = i; // the distance of any first string to an empty second string
    }
    
    for(unsigned j = 0; j < n+2; j++)
    {
        d.at(0).at(j) = j; // the distance of any second string to an empty first string
    }
    
    for(unsigned j = 1; j < n+2; j++)
    {
        for(unsigned i = 1; i < m+2; i++)
        {
            if(s.at(i-1) == t.at(j-1))
            {
                d.at(i).at(j) = d.at(i-1).at(j-1); // no operation required
            }
            else
            {
                d.at(i).at(j) = min(
                    d.at(i-1).at(j) + 1,  // a deletion
                    min(d.at(i).at(j-1) + 1,  // an insertion
                    d.at(i-1).at(j-1) + 1) // a substitution
                );
            }
        }
    }
    return d.at(m+1).at(n+1);
}

int main(int argc, char* argv[])
{
    string s1 = "Clent";
    string s2 = "FOODt";
    unsigned levenshteinDistance = Compute_Levenshtein_Distance(s1, s2);
    
    cout << "Levenshtein distance of \"" << s1 << "\" and \"" << s2 << "\" is " << levenshteinDistance;
    cout << endl << endl;
}
