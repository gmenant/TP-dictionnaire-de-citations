<?PHP
$DB_SERVER="localhost";
$DB_LOGIN="root";
$DB_PASSWORD="root";
$DB="dico";
$HTTP_HOST="localhost";
$DOCROOT="CitationsV1";




  $connexion = 'mysql:host=localhost;dbname=dico';
  $user = "root";
  $mdp = "A2Z3E4R5T6Y7";
  try {
    $db = new PDO($connexion, $user, $mdp);
    $flag_connect = 'connexion effectuée./n;';
     echo $flag_connect;
    }
  catch (PDOException $e)
  {
    $flag_connect = "Erreur !: " . $e->getMessage() ;
    echo $flag_connect;
  };

?>
