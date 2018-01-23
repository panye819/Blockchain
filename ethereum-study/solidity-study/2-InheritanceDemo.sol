pragma solidity ^0.4.0;

interface Regulator {
    function checkValue(uint amount)  returns (bool);
    function loan() returns (bool);
}
contract Bank is Regulator {
    uint private value;
    function Bank(uint amount) {
        value = amount;
    }
    function deposit(uint amount) {
        value += amount;
    }
    function withdraw(uint amount) {
        if (checkValue(amount)) {
             value -= amount;
        }
    }
    function balance() returns (uint) {
        return value;
    }
    function loan() returns (bool) {
        return value > 0 ;
    }
    
    function checkValue(uint amount) returns (bool) {
        return amount >= amount; 
    }
}
contract MyFirstContract is Bank(200) {
    string private name;
    uint private age;

    function setName(string newName) {
        name = newName;
    }

    function getName() returns (string) {
        return name;
    }

    function setAge(uint newAge) {
        age = newAge;
    }

    function getAge() returns (uint) {
        return age;
    }

    function loan() returns (bool) {
        return true;
    }

}