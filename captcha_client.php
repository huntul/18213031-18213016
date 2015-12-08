<?php
session_start();
$_SESSION = array();

$captcha = file_get_contents('http://localhost/progif/tubes/captcha_service.php?action=get_captcha');
$captcha = json_decode($captcha,true);

$_SESSION['captcha'] = $captcha;

?>
<!DOCTYPE html>
<html>
<head>
	<title>Captcha Page</title>
</head>
<body>

    <h1>
        CAPTCHA Example
    </h1>

    <p>
        Please fill the CAPTCHA below:
    </p>

    <p>
        <?php
        echo '<img src="data:image/jpeg;base64,'.$_SESSION['captcha']['image_src'].'"/>';

        ?>
    </p>
	
        <form action="process_captcha.php" method="post" name="captcha_form">                      
            <input type="text" name="captcha_input" />
            <input type="submit" value="Check" /> 
        </form>
		
</body>
</html>
