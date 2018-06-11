<!DOCTYPE html>
<html>
  <head>
    <title>BMI Calculator</title>
  </head>


  <body>

    <h1>BMI Calculator</h1>
    <p>Please input your height and weight as directed below.</p>

    <?php
       $weight = $height = $output = $retc = "";
       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $weight = test_input($_POST["weight"]);
         $height = test_input($_POST["height"]);
         exec("/usr/lib/cgi-bin/student3/bmiMake " . $weight . " " . $height, $output, $retc); 
       }
       function test_input($data) {
         $data = trim($data);
         $data = stripslashes($data);
         $data = htmlspecialchars($data);
         return $data;
       }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
      Weight (pounds): <input type="text" name="weight"><br>
      Height (inches): <input type="text" name="height"><br>
      <input type="submit">
    </form>

    <?php

       echo "<h2>Your BMI is: </h2>";
       foreach ($output as $line) {
	 echo $line;
	 echo "<br>";
	}

     ?>

  </body>
</html>

