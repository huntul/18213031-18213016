<?php
	if (isset($_POST["id_token"])) 
					$value = $_POST["id_token"];
					$con = mysqli_connect("localhost","root","","yuni");
					mysqli_query($con, "INSERT INTO hp (id_token) VALUES ('" . $value . "')");
					mysqli_close($con);
	echo $value;
?>
