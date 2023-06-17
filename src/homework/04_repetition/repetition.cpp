//add include statements
#include "repetition.h"
//add function(s) code here
double get_gc_content(const string& dna)
{
    int count = 0;

    for (char base : dna) {
        if (base == 'C' || base == 'G') {
            count++;
        }
    }

    return static_cast<double>(count) / dna.size();
}

double get_reverse_string(const string& dna)
{
    // Defining as described in step 3 of the implementation step, however the function requirements are not present in the table
    return 0;
}  

double get_dna_complement(const string& dna)
{
    // Defining as described in step 3 of the implementation step, however the function requirements are not present in the table
    return 0;
}