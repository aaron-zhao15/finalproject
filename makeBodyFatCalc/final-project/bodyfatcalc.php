<!DOCTYPE html>
<html>
  <head>
    <title>Body Fat Calculator</title>
  </head>


  <body>

    <h1>Body Fat Calculator</h1>
    <p>Please input your weight, waist, wrist, hip, and forearm measurements as directed below.</p>

    <?php
       $weight = $waist = $wrist = $hip = $forearm = $output = $retc = "";

       if ($_SERVER["REQUEST_METHOD"] == "POST") {
         $weight = test_input($_POST["weight"]);
       	 $wrist = test_input($_POST["wrist"]);
         $waist = test_input($_POST["waist"]);
         $hip = test_input($_POST["hip"]);
         $forearm = test_input($_POST["forearm"]);
         exec("/usr/lib/cgi-bin/student3/bfpMake " . $weight . " " . $waist . " " . $wrist . " " . $hip . " " . $forearm, $output, $retc);
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
      Wrist Circumference (inches): <input type="text" name="wrist"><br>
      Waist Circumference (inches): <input type="text" name="waist"><br>
      Hip Circumference (inches): <input type="text" name="hip"><br>
      Forearm Length (inches): <input type="text" name="forearm"><br>
      <input type="submit">
    </form>

    <?php

       echo "<h2>Your Body Fat Percentage is: </h2>";
       foreach ($output as $line) {
	 echo $line;
	 echo "<br>";
	}

     ?>

  </body>
</html>

