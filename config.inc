<?php

// Set to true if clamd lives on the local machine (uses much more efficient scanning technique)
define('CLAMDISLOCAL', true);

// Set to where clamd lives
define('CLAMDSOCKET', 'unix:///var/run/clamav/clamd.ctl'); // If clamd runs locally, choose this
//define('CLAMDSOCKET', '192.168.24.116:3310');      // If you're hosted by the PKP, choose this

?>
