pragma solidity ^0.4.0;

contract Transaction {
    event SendLogger (address);
    event ValueLogger(uint);
    
    address private owner;
    
    modifier isOwner {
        require(owner == msg.sender);
        _;
    }
    
    modifier validValue {
        assert(msg.value >= 1 ether);
        _;
    }
    
    function Transaction() {
        owner = msg.sender;
    }
    
    function () payable isOwner validValue {
        SendLogger(msg.sender);
        ValueLogger(msg.value);
    }
}