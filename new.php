<?php
$nameErr = $teleErr = $addErr = $newsErr = "";
$name = $tele = $add = $contact = $news = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["name"])) {
    $nameErr = "Name is required";
  } else {
    $name = test_input($_POST["name"]);
    if (!preg_match("/^[a-zA-Z-' ]*$/",$name)) {
      $nameErr = "Only letters and white space allowed";
    }
  }
  
  if (empty($_POST["tele"])) {
    $teleErr = "Telephone Number required";
  } else {
    $tele = test_input($_POST["tele"]);
    if (!filter_int($tele, FILTER_VALIDATE_TELEPHONE)) {
      $teleErr = "Invalid Telephone format";
    }
  }
    
  if(isset($_POST['add'])){
    foreach ($_POST['Add'] as $select)
    {
    echo "Your Address :" .$select; 
    }

    if (isset($_POST['submit'])) {
        if(isset($_POST['radio']))
        {
        echo "You have selected :".$_POST['radio'];  
        }
    
        if (isset($_POST['news'])){
            echo $_POST['news']; 
            }



}
?>
