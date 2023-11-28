const handleDeposit = () => {
  const depositAmount = document.getElementById("deposit-amount").value;
  const depositBal = document.getElementById("deposit-bal").innerText;
  const updatedBalance = parseFloat(depositAmount) + parseFloat(depositBal);
  document.getElementById("deposit-bal").innerText = updatedBalance;
  const totalBalance = document.getElementById("total-bal").innerText;
  const updatedTotalBalance =
    parseFloat(totalBalance) + parseFloat(depositAmount);
  document.getElementById("total-bal").innerText = updatedTotalBalance;
  document.getElementById("deposit-amount").value = "";
};

const handleWithdraw = () => {
  // withdraw input field
  const withdrawAmount = document.getElementById("withdraw-amount").value;
  //previous total balance
  const totalBalance = document.getElementById("total-bal").innerText;

  //show alert if withdraw amount is high than total balance
  if (parseFloat(withdrawAmount) > parseFloat(totalBalance)) {
    alert(
      `you can't withdraw ${parseFloat(withdrawAmount)} due to low balance.`
    );
    document.getElementById("withdraw-amount").value = "";
    return;
  }

  //display withdraw balance
  const withdrawBalance = document.getElementById("withdraw-bal").innerText;
  //   input field amount + previous display amount
  const updatedwithdrawBalance =
    parseFloat(withdrawBalance) + parseFloat(withdrawAmount);
  // set display updated total withdraw
  document.getElementById("withdraw-bal").innerText = updatedwithdrawBalance;
  //update total balance after withdraw
  const updatedTotalBalance =
    parseFloat(totalBalance) - parseFloat(withdrawAmount);

  //update total display balance after withdraw
  document.getElementById("total-bal").innerText = updatedTotalBalance;
  document.getElementById("withdraw-amount").value = "";
};
