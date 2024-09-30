<?php

//Verifica se selecionou o idioma
if (isset($_COOKIE['idioma'])) {
    //Cria o arquivo versao.txt
    $arquivo = fopen('versao.txt', 'w+');

    //Verifica qual o idioma selecionado
    if ($_COOKIE['idioma'] == 'ingles') {
        $conteudo = "OUR PLANT".
                    "<br />The XXX INDÚSTRIA DE MÁQUINAS LTDA, was founded on 1970, and became ".
                    "the most important and traditional supplyer of BAGGING MACHINES in Brazil.";
        
    } elseif ($_COOKIE['idioma'] == 'portugues') {
        $conteudo = "EMPRESA".
                    "<br />A XXX INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o ".
                    "mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil.";
        
    } elseif ($_COOKIE['idioma'] == 'espanhol') {
        $conteudo = "EMPRESA".
                    "<br />La XXX INDÚSTRIA DE MÁQUINAS LTDA, fue fundada en 1970, y sé a convertido ".
                    "en la más importante y tradicional fabrica de MÁQUINAS ENSACADORAS em Brasil.";
    }
    
    //Grava o conteudo no arquivo
    fwrite($arquivo, $conteudo);
    fclose($arquivo);

    readfile('versao.txt');
}
?>