pragma solidity ^0.4.17;


contract Lottery {
    address public manager;
    address[] public players;
    
    function Lottery() public {
        manager = msg.sender;
    }
    
    function enter() public payable {
        require(msg.value >= .01 ether);
        players.push(msg.sender);
    }

    function random() private view returns (uint) {
        // sha3(x);
        return uint(keccak256(block.difficulty,now,players));
    }
    
    function pickWinner() public view returns (address) {
        uint index = random() % players.length;
        return players[index];
    }
}