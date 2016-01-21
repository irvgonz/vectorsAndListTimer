//irving gonzalez.

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;


int main()
{
    // define time variables
    time_t start , stop;
    
    vector <int> array;
    vector<int>::iterator arr1;
    list<int> array2;
    list<int>::iterator arr2;
    
    //vector for insert
    start = clock ();
      for (int i=0; i<9999999; i++)
      {
          array.push_back(i);
      };
    stop = clock ();
    cout << "Vector Insert Is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";
   
    //for finding vector number
    start = clock ();
    arr1 = find( array.begin(), array.end(), 100000 );
    stop = clock ();
    cout << "Vector Find Is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";
    
    //deleting vector element
    start = clock ();
    array.erase(arr1);
    stop = clock ();
    cout << "Vector Erase Is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";
    
    //list insert elements
    start = clock ();
    for( int i = 0; i <9999999; i++ )
        array2.push_back( i );
    stop = clock ();
    cout << "list Insert Is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";
    
    //for finding list number
    start = clock ();
    arr2 = find( array2.begin(), array2.end(), 100000 );
    stop = clock ();
    cout << "List Find Is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";
    
    //deleting list elment
    start = clock ();
    array2.erase(arr2);
    stop = clock ();
    cout << "List Erase Is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";


    
    // get current time stop = clock ();
    // output elapsed time
    cout << "\nTotal time is: " << double(stop-start)/CLOCKS_PER_SEC << " sec\n";
}


