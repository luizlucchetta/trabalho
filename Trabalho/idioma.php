<?php

$lingua = $_GET['lingua'];

if (isset($lingua)) {
    //Configurando o cookie com o valor passado
    setcookie('idioma', $lingua, time() + (60*60*24*3)); //Cria o cookie que expira em 3 dias
} else {
    //Apagando o cookie
    setcookie('idioma', '', 1);
}

//Redireciona para a pagina index.php
header('Location: index.php');

?>