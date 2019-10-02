#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <list>


using namespace std;
bool        findNumber(vector<int> nums);
bool        findNumber(list<int> nums);

double getMedian(vector<int> nums);
double getMedian(list<int> nums);

void splitOnMedian(vector<int> &nums, vector<int> &above, vector<int> &below);
void question6(vector<int> &nums);

vector<int> readInVec(string name);
list<int>   readInList();
int areSameUntil(const vector<int>& a, const vector<int>& b);


void print(string prompt, vector<int> nums);


void display(vector<int>    nums);
void display(list<int>      nums);
void display(vector<string> nums);
void question9();
////void question10(vector<int> a, vector<int> b);

int main()
{


    try{
        vector<int> nums  = readInVec("nums.txt");
        vector<int> nums2 = readInVec("newFile.txt");


        //* Just looking at ways to sort vectors 
        display(nums);

        //! use the greater<int>() comparator to sort the vector in descending order
        //* can change the comparator with 
        //* [](int x, int y){return x>y;}
        ////sort(nums.begin(), nums.end());////[](int x, int y){return x >y;}

        display(nums2);

        //* Only randomises one way every time
        ////random_shuffle(nums.begin(), nums.end());


        cout << areSameUntil(nums, nums) << endl;



    }
    catch(domain_error e)
    {
        cout << e.what() << endl;
    }

    return 0;
}


vector<int> readInVec(string name)
{
    vector<int> nums;
    ifstream in(name);
    if(in)
    {
        int num; 
        while(!in.eof())
        {
            in >> num;
            nums.push_back(num);
        }
    }
    else
    {
        throw domain_error("No such file");
    }
    return nums;
    
}
list<int> readInList()
{
    list<int> nums;
    ifstream in("nums.txt");
    if(in)
    {
        int num; 
        while(!in.eof())
        {
            in >> num;
            nums.push_back(num);
        }
    }
    else
    {
        throw domain_error("No such file");
    }
    return nums;
    
}

double getMedian(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int mid = nums.size()/2;
    if(nums.size()%2 == 0)
    {
        return (nums[mid - 1] + nums[mid])/2.0f;        
    }
    return nums[mid];
}

/*
double getMedian(list<int> nums)
{
    sort(nums.begin(), nums.end());
    list<int>::size_type mid = nums.size()/2;
    if(nums.size()%2 == 0)
    {
        return (nums[mid - 1] + nums[mid])/2;        
    }
    return nums[mid];
}
*/

bool findNumber(vector<int> nums)
{
    cout << "Enter a number from the list:" << endl;
    int search;
    cin >> search;
    /*
    for(int i: nums)
    {
        if(i == search)
        {
            return true;
        }
    }

    return false;
    */

   if(find(nums.begin(), nums.end(), search) != nums.end())
   {
       return true;
   }
   else
   {
       /* code */
       return false;
   }
   
}
bool findNumber(list<int> nums)
{
    cout << "Enter a number from the list:" << endl;
    int search;
    cin >> search;
    /*
    for(int i: nums)
    {
        if(i == search)
        {
            return true;
        }
    }

    return false;
    */

   if(find(nums.begin(), nums.end(), search) != nums.end())
   {
       return true;
   }
   else
   {
       /* code */
       return false;
   }
   
}

void display(vector<int> nums)
{
    
    for(int i: nums)
        {
            cout << i << ", ";
        }
    cout << "\n\n" << endl;
}
void display(vector<string> nums)
{
    
    for(string i: nums)
        {
            cout << i << ", ";
        }
    cout << "\n\n" << endl;
}
void display(list<int> nums)
{
    
    for(int i: nums)
        {
            cout << i << ", ";
        }
    cout << "\n\n" << endl;
}

void question6(vector<int> &nums)
{
    vector<int> above;
    vector<int> below;
    splitOnMedian(nums, above, below);
    cout << "Above : " << endl;
    display(above);

    cout << "Below : " << endl;
    display(below);
    
}

void splitOnMedian(vector<int> &nums, vector<int> &above, vector<int> &below)
{
    double median = getMedian(nums);

    for(int i : nums)
    {
        if(i > median)
        {
            above.push_back(i);
        }
        else{
            below.push_back(i);
        }
    }
}

void print(string prompt, vector<int> nums)
{
    string stars(5,'*');
    cout <<  stars << prompt << stars << endl;
    display(nums);

}

/*int getStdDev(vector<int> nums)
{
    //? need to find the standard deviation of of a vector;


}
void question10(vector<int> a,vector<int> b)
{
    //To find if the vectors have identical contents
    if(a.size() != b.size())
    {
        cout << "Not Equal" << endl;
    }
    else{
    bool match = false;
    vector<int>::iterator iterA = a.begin();
    vector<int>::iterator iterB = b.begin();
    
        //
        while(iterA <= )
        {
            if(iterA==)
        }

    }
    
}
*/

void question9()
{
    vector<string> mths = {"Jan", "Apr", "May", "Sept", "Nov", "Dec"};
    vector<string>::iterator iter = mths.begin();
    iter++;
    iter = mths.insert(iter, "Feb")+1;
    iter = mths.insert(iter, "Mar")+3;
    iter = mths.insert(iter, "Jun")+1;
    iter = mths.insert(iter, "July")+1;
    iter = mths.insert(iter, "Aug")+2;
    mths.insert(iter, "Oct");

    display(mths);

}

/*
Create a function, areSameUntil(), that takes two vectors of integers and returns the position
that the vector contents cease to be identical. You should decide what value the function will
return to indicate success and failure.
*/
int areSameUntil(const vector<int>& a, const vector<int>& b)
{
    vector<int>::size_type max = a.size() > b.size() ? a.size() : b.size();

    for(vector<int>::size_type i = 0; i< max;)
    {
        if(i < a.size() && i < b.size() && a[i] == b[i])
        {
            i++;
        }
        else
        {
            return i - 1;
        }
    }
}
/*
    Create a function, areSameReverse(), that takes two vectors of integers and returns true if the
    vector contents are identical but in reverse (e.g. {1,2,3} and {3,2,1}), otherwise false.
*/
int areSameReverse(const vector<int>& a, const vector<int>& b)
{
    //? This line creates a if statement where if a is larger than b max size is a.size or vice versa
    vector<int>::size_type max = a.size() > b.size() ? a.size() : b.size();
    for(vector<int>::size_type i = 0; i<max)
    {
        if(i < a.size() && i < b.size() && a[i] == b[b.size()-i])
        {
            i++;
        }
        else
        {
            return i;
        }
    }

}



bool areSameReverse(const list<int>& a, const list<int>& b)
{

    list<int>::iterator iterA = a.begin();
    list<int>::iterator iterB = b.end() -1;

    //? This line creates a if statement where if a is larger than b max size is a.size or vice versa
    list<int>::size_type max = a.size() > b.size() ? a.size() : b.size();
    
    for(list<int>::size_type i = 0; i<max)
    {
        if(*iterA == *iterB)
        {
            iterA++;
            iterB--;
            i++;
        }
        else
        {
            return false;
        }
    }

}



