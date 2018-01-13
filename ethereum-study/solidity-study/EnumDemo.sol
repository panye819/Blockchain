pragma solidity  ^0.4.17;

contract EnumDemo{
  enum ActionChoices{GoLeft,GoRight}

  ActionChoices choice;
  ActionChoices default = ActionChoices.GoRight;

  function setChoice(){
    choice = ActionChoices.GoLeft;
  }
function getChoice() returns(ActionChoices){
  return choice;
}
function getDefault() returns(uint){
  return uint(ActionChoices.GoRight);
}

}
