<?php

 session_start();
 
?>
<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Secure Page</title>
        <link rel="stylesheet" href="styles/main.css" />
    </head>
    <body>
        <?php if ($_SESSION['captcha_input'] == $_SESSION['captcha']['code']) : ?>
            <p>Welcome!</p>
            <p>
                This is an example protected page.  To access this page, users
                must input the right captcha.  At some stage, we'll also check the role of
                the user, so pages will be able to determine the type of user
                authorised to access the page.
            </p>
            <p>Return to <a href="index.php">captcha page</a></p>
        <?php else : ?>
            <p>
                <span class="error">You are not authorized to access this page.</span> Please <a href="index.php">input the captcha first</a>.
            </p>
        <?php endif; ?>
    </body>
</html>
