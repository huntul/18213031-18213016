<?php
	$opt = array('location'=>'http://localhost/SOAP-server.php', 'uri'=>'http://localhost/');
	$api = new SoapClient(NULL, $opt);
	echo $api -> helloworld();
	echo ("<br>");
	echo $api -> addition(4,7);
	echo ("<br>");
	echo $api -> getData();
?>
