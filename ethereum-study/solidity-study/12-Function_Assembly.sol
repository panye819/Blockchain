pragma solidity ^0.4.0;

contract Assembly {
    function nativeloops() returns (uint _r) {
        for (uint i = 0; i < 10; i++) {
            _r++;
        }
    }
}