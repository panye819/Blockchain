pragma solidity ^0.4.0;

contract Datatypes {
    bool myBool = false;
    int8 myInt = -128;
    uint myUint = 255;

    string myString = "This is a string";

    uint8[] myStringArr = new uint8[](7);
    enum Action {ADD, REMOVE, UPDATE }
    Action myAction = Action.ADD;

    address myAddress;

    function assignAddress() public {
        myAddress = msg.sender;
        myAddress.balance;
        myAddress.transfer(10);
    }

    uint[] myIntArr = [1,2,3];

    function arrFunc() public {
        myIntArr.push(1);
        myIntArr.length;
        myIntArr[0];
    }

    uint[10] myFixedArr;

    struct Account {
        uint balance;
        uint dailyLimit;
    }

    Account myAccount;

    function structFunc() public {
        myAccount.balance = 100;
    }
    mapping (address=>Account) _accounts;

    function () payable public {
        _accounts[msg.sender].balance = msg.value;
    }

    function getBalance() view public returns (uint) {
        return _accounts[msg.sender].balance;
    }

}