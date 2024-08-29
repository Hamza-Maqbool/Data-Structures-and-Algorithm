#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class CustomerBL
{
public:
	int index;
	int no_of_employ;
	string country;
	string description;
	string founded;
	string name;
	string industry;
	string organization;
	string website;

    CustomerBL(string name, int idx, string country, string organization, string despri, string founded, string industry, string web, int no_employ)
    {
        this->name = name;
        this->index = idx;
        this->country = country;
        this->description = despri;
        this->industry = industry;
        this->website = web;
        this->no_of_employ = no_employ;
        this->founded = founded;
        this->organization = organization;
    }
    CustomerBL() {

    }
};

