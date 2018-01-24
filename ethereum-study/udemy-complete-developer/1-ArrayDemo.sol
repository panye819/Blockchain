pragma solidity ^0.4.17;

contract Lottery {
    address public manager;
    
    function Lottery() public {
        manager = msg.sender;
    }
}

contract Test {
    uint[] public myArray;
    
    function Test() public {
        myArray.push(1);
        myArray.push(10);
        myArray.push(30);
        myArray.push(100);
    }
    function getMyArray() public view returns (uint[]) {
        return myArray;
    }
    function getArrayLength() public view returns (uint) {
        return myArray.length;
    }
    
    function getFirstElement() public view returns (uint) {
        return myArray[0];
    }
    
    function getLastElement() public view returns (uint) {
        return myArray[myArray.length-1];
    }
}