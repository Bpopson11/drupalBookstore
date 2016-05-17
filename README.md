# _Bookstore_

#### By _**Brianna Popson**_

## Description

_This site is for a hypothetical bookstore to practice using and creating modules, views, and features in Drupal_

## Setup/Installation Requirements for iOS

* _Clone from GitHub_
* _You will need MAMP_
* _In your internet browser navigate to ```http://localhost:8888/phpmyadmin```, where you can select the Import tab._
* _In the project directory go to ```sites > db-backups > bookstore.zip``` and click GO at the bottom of your screen to import._
* _Also in phpmyadmin add a user BookMaster (password: books) with permissions to the database._
* _Open MAMP, select ```Preferences```, select ```Web Server``` tab, direct the ```Document Root``` at the top level of your project folder._
*_Navigate to ```http://localhost:8888```_
*_Login as user:BookMaster pw:books_

## Setup/Installation Requirements for Windows

* _Clone from GitHub_
* _You will need WAMP and the project to be located on a 'websites' folder on your C: drive._
* _Via WAMP navigate to  ```phpmyadmin``` where you can select the Import tab._
* _In the project directory go to ```sites > db-backups > bookstore.zip``` and click GO at the bottom of your screen to import._
* _Also in phpmyadmin add a user BookMaster (password: books) with permissions to the database.
* _Open WAMP, select ```Preferences```, select ```Web Server``` tab, direct the ```Document Root``` at the top level of your project folder
* _Navigate to ```localhost``` and select the ```drupalBookstore``` project.
* _Login as user: BookMaster password: books_
* _If you encounter an access denied error you may need to go to ```sites/default/settings.php``` and change the port to 3306._

## Technologies Used

_This app was built using the Drupal interface._

### License

*MIT License*

Copyright (c) 2016 **_Brianna Popson_**
