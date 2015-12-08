<?php

	include("simple-php-captcha.php");
	
	if (isset($_GET["action"])) {
		switch ($_GET["action"]) {
			case "get_captcha";
				$captcha = array();
				$captcha = simple_php_captcha();
				break;
		}
	}
	
	exit(json_encode($captcha));	
	
?>
