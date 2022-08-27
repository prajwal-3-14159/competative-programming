#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//transaction data
struct TransactionData {
    double amount;
    string senderkey;
    string receiverkey;
    time_t timestamp;
};

//block class
class Block
{
private:
    int index;
    size_t blockchain;
    size_t previousHash;
    size_t generateHash();

public:
     //constructor
    Block(int idx, TransactionData d, size_t prevHash);
    //get orignal hash
    size_t getHash();

    //get previous hash
    size_t getPrevHash();

    // Transaction Data
    TransactionData data;

    //validate Hash
    bool isHashValid();
};

Block::Block(int idx, TransactionData d, size_t prevHash)
{ 
    index = idx;
    data = d;
    previousHash = prevHash;
    blockHash = generateHash;
}

// privalte function
size_t Block::generateHash()
{
    hash<string> hash1;
    hash<size_t> hash2;
    hash<size_t> finalHash;
    string toHash = to_string(data.amount) + data.receiverkey + data.senderkey + to_
}

Block::~Block()
{
}

class Blockchain
{
private:
    Block createGenisisBlock();

public:
    //Public Chain
    vector<Block> chain;
    
    //constructor 
    Blockchain();

    //Public Function
    void addBlock(TransactionData data);
    void isChainValid();

    //Contrived Example For Demo Only!
    Block* getLatestBlock();

};

int main()
{
       
    return 0;
}
