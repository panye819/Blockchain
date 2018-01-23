pragma solidity ^0.4.0;

import "4-LibraryDemo.sol";

contract TestLibrary {
    using IntExtended for uint;
    
    function testIncrement(uint _base) returns (uint) {
        return IntExtended.increment(_base);
    }
    
    function testDecrement(uint _base) returns (uint) {
        return IntExtended.decrement(_base);
    }
    
    function testDecrementByValue(uint _base, uint _value) returns (uint) {
        return _base -= _value;
    }
    
    function testIncrementByValue(uint _base, uint _value) returns (uint) {
        return _base += _value;
    }
}