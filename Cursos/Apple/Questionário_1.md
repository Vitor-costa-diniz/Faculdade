# Questionário para provas de conhecimneto IOS

## 1. Qual a diferença entre classes e structs em Swift?

> Classes e structs são duas maneiras diferentes, porém muito similares de definir uma abstração de um conjunto de objetos que possuem características parecidas. Essas características podem ser propriedades (atributo) ou métodos (funções)

Elas possuem em comun:
1. Ambas definem propriedades (para armazenar dados) e métodos (para estabelecer funcionalidades)
2. Ambas possuem métodos construtores para criar isntâncias com valores iniciais
3. Elas também podem implementar protocols. Porém, alguns protocolos específicios pdoem ser implementados apenas por classes
4. Podem ser extendidas através de uma palavra reservada chamada **extension**, para expandir sua funcionalidade além de uma implementação padrão.

A principal diferença entre ambas é que classes são **reference types** (tipo de referência), enquanto structs são **value types** (tipo de valor).


## 2. O que é um protocolo e como é usado em Swift?
 
 > Um protocolo define um esquema de métodos, propriedades e outros requisitos que atendem a uma determinada tarefa ou parte de funcionalidade, O protocolo pode então ser adotado por uma Class, Struct ou Enum para fornecer uma implementação real desses requisitos. Qualquer tipo que satisfaça os requisitos de um protcolo é considerado em conformidade com esse protocolo

Na prática estamnos falando de uma estrutura que serve como validadora.

## 3. Como funciona o ARC (Automatic Reference Counting) em Swift?

> Swift usa contagem automática de referênncia (ARC) para rastrear e gerenciar o uso de memória do seu aplicativo. Na maioria dos casos, isso significa que o gerenciamento de memória "simplesmente funciona" no Swift e você não precisa se preocupar com o gerenciamento de memória. O ARC libera automaticamente a memória usada pelas instâncias de classe quando essas instâncias não são mais necessárias.

Toda vez que criamos uma classe ou uma variável, o ARC guarda  as informações dessas referências, como atributos e onde essa variável ou classe está sendo utilizada. Isso faz com que enquanto essa referência estiver presa a outra refência, ela continuará em memória.


## 4. O que é o padrão de projeto Delegate e como é usado em iOS?

> O padrão de delegação envolve dois objetos, o objeto delegado e o delegante. A classe **UITableView**, por exemplo, define uma propriedade **delegate** para que ela delegue eventos. A propriedade delegante precisa estar em conformidade com o protocolo **UITableViewDelegate**, que é definido no arquivo header da classe **UiTableView**

Quando o usuário toca em uma linha na table view, o table view notifica seu delegado enviando uma mensagem de tableView(_:didSelectRowAtIndexPath:). O primeiro argumento do método é a table view enviando a mensagem. O segundo argumento é o índice da linha que o usuário tocou.

A table view apenas notifica seu delegado neste evento. Cabe ao delegado decidir o que precisa acontecer quando um evento ocorrer. Esta separação de responsabilidades, como você aprenderá em instantes, é um dos principais benefícios do padrão de delegação.

## 5. Qual a diferença entre o uso do IBOutlet e do IBAction em relação a elementos de interface gráfica?

> O IBOutlet é utilizado para criar referências aos elementos gráficos para serem manipulados no código, o IBAction é utilizado para criar métodos que serão executados em resposta a eventos gerados pelos elementos gráficos.

## 6. O que é um storyboard e como é usado em iOS?

> Quando iniciamos uma aplicação com o framework UIKit, vemos um arquivo chamado Main.storyboard. Esse é um único arquivo que mostra todas as telas do nosso aplicativo, bem como todo o fluxo de navegação entre elas. 

>Quando construímos através dessa maneira, podemos utilizar algo chamado interface builder, que é basicamente uma ferramenta drag in drop, ou seja, você arrasta os elementos para a tela e constrói de uma maneira totalmente visual.

## 7. Como criar um layout responsivo em iOS?

> Utilizando o Auto Layout em suas aplicações.

## 8. O que é o Core Data e como é usado em iOS?

>O CoreData é um framework nativo como qualquer outro da Apple: UIKit, Foundation e alguns outros. Ele é usado para persistir, manipular dados no iOS/OSX e usa o SQLite por baixo dos panos, mas você não precisar saber SQL para usá-lo, ele interage com o sql sem você ver ou precisar saber o que está acontecendo.

## 9. O que é o Alamofire e como é usado em iOS?

>Alamofire é uma biblioteca escrita totalmente na linguagem de programação Swift para realizar requisições HTTP para as plataformas iOS e macOS.

## 10. Como funciona o sistema de notificações push em iOS?

>O sistema de notificações push em iOS permite que os aplicativos enviem mensagens para os dispositivos mesmo quando o aplicativo não está em execução ou em segundo plano. As notificações são exibidas na tela de bloqueio ou na central de notificações e podem incluir uma mensagem de texto, som ou um número de distintivo.

O sistema de notificações push funciona da seguinte forma:

1. O aplicativo é registrado para receber notificações push no serviço da Apple chamado APNs (Apple Push Notification Service).

2. Quando uma notificação é enviada pelo servidor do aplicativo, ela é enviada para o APNs.

3. O APNs envia a notificação para o dispositivo do usuário através de uma conexão segura.

4. O dispositivo recebe a notificação e a exibe na tela de bloqueio ou na central de notificações.

5. Se o usuário tocar na notificação, o aplicativo pode ser aberto para lidar com a ação.
~~~
Para implementar notificações push em um aplicativo iOS, é necessário criar um certificado de push no portal de desenvolvedores da Apple, registrar o aplicativo com o APNs, implementar o código necessário no aplicativo para lidar com as notificações e enviar as notificações a partir do servidor do aplicativo.
~~~