<?php
 
session_start();
 
if (isset($_POST['captcha_input'])) {
    $_SESSION['captcha_input'] = $_POST['captcha_input'];
 
    if ($_SESSION['captcha_input'] == $_SESSION['captcha']['code']) {
        // Login success 
        header('Location: secured_page.php');
    } else {
        // Login failed
        header('Location: index.php');
    }
} else {
    // The correct POST variables were not sent to this page. 
    echo 'Invalid Request';
}

?>
