<h2>Lista de comandos em Markdown</h2>
<p>Veja abaixo uma lista dos comandos em markdown e alguns exemplos de seu uso:</p>
<h3>Titulação</h3>
<pre class="highlight markdown"><code># Título &lt;h1&gt;
## Título &lt;h2&gt;
### Título &lt;h3&gt;
#### Título &lt;h4&gt;
##### Título &lt;h5&gt;
###### Título &lt;h6&gt;</code></pre>
<h3>Exemplos de titulação</h3>
<h1>Título 1</h1>
<h2>Título 2</h2>
<h3>Título 3</h3>
<h4>Título 4</h4>
<h5>Título 5</h5>
<h6>Título 6</h6>
<h3>Ênfase</h3>
<p>Para adicionar ênfase ao conteúdo que será escrito, usa-se o asterisco <code>*</code> ou traço-baixo (<em>underline</em>) <code>_</code>:</p>
<ul>
<li><strong>Negrito</strong>: adicione dois asteriscos *<strong>*texto</strong>** ou dois traços-baixos __<strong>texto</strong>__ no início e no fim do conteúdo.</li>
<li><strong>Itálico</strong>: adicione apenas um asterisco *<em>texto</em>* ou um traço-baixo _<em>texto</em>_ no início e no fim do conteúdo.</li>
</ul>
<blockquote><p>Este é um exemplo de um texto que possui uma ênfase em *<strong>*negrito**</strong>, e outro em _<em>itálico</em>_.</p>
</blockquote>
<h3>Links</h3>
<p>Existem duas formas de inserir link em Markdown, através de um <strong>link direto</strong> ou usando um <strong>texto-âncora</strong>:</p>
<ul>
<li><p><strong>Texto-âncora</strong>: utilize os caracteres <code>[]()</code>, adicionando entre chaves o texto que você quer que apareça, e entre os parênteses, o endereço de destino, no formato <code>[exemplo](https://exemplo.com/)</code>.</p>
</li>
<li><p><strong>Link direto</strong>: envolva o endereço da web em chaves <code>&lt;&gt;</code>. O endereço ficará visível e será clicável pelo usuário. O endereço em forma de link direto tem o formato <code>&lt;https://exemplo.com/&gt;</code>.</p>
</li>
</ul>
<blockquote><p>Este é um <a href="#">link em formato de texto</a>, e este é um link direto <a href="https://pipz.com/">https://pipz.com/</a>.</p>
</blockquote>
<h3>Listas de itens</h3>
<p>Para listas não ordenadas, utilize um asterisco <code>*</code> na frente to item da lista:</p>
<pre class="highlight markdown"><code>* Item 1
* Item 2
* Item 3</code></pre>
<p>Para listas ordenadas, utilize o número do item seguido de ponto <code>.</code> :</p>
<pre class="highlight markdown"><code>1. Item 1
2. Item 2
3. Item 3</code></pre>
<p>As listas acima serão exibidas dessa maneira, respectivamente:</p>
<ul>
<li>Item 1</li>
<li>Item 2</li>
<li>Item 3</li>
</ul>
<ol>
<li>Item 1</li>
<li>Item 2</li>
<li>Item 3</li>
</ol>
<h3>Imagens</h3>
<p>O código para inserir uma imagem no conteúdo é semelhante ao código de inserir links-âncora, adicionando um ponto de exclamação <code>!</code> no início do código, como no exemplo abaixo:</p>
<pre class="highlight markdown"><code>![Alt ou título da imagem](URL da imagem)</code></pre>
<blockquote><p>Esta é uma linha com uma imagem personalizada <img src="https://pipz.com/static/images/blog/eddie.png" alt="Eddie Feliz">.</p>
<p>Imagens grandes podem estar em linhas individuais, para serem exibidas em maior tamanho.</p>
</blockquote>

### Emojis

Também é possível adicionar emojis ao texto em MD, basta utilizar o seguinte código: 

`:nome do emoji:`

Os nomes (códigos) de cada emoji podem ser encontrados [clicando aqui.](https://www.webfx.com/tools/emoji-cheat-sheet/)

<h3>Citação (Quote)</h3>
<p>Para transformar um texto em uma citação ou comentário, semelhante ao código HTML <code>&lt;blockquote&gt;</code>, utilize o sinal <code>&gt;</code> no início da linha que será formatada:</p>
<pre class="highlight markdown"><code>&gt;Este é um *blockquote*. O sinal usado abre e fecha este código no HTML. 
&gt;Para adicionar mais uma linha à citação, basta teclar Enter para um novo
&gt;código sinal. Isso gerará um novo parágrafo dentro do *blockquote*.
&gt;Códigos de **negrito**, _itálico_ e &lt;https://links.com&gt; funcionam aqui.</code></pre>
<p>Como aparece no HTML:</p>
<blockquote><p>Este é um <em>blockquote</em>. O sinal usado abre e fecha este código no HTML. 
Para adicionar mais uma linha à citação, basta teclar Enter para um novo
código sinal. Isso gerará um novo parágrafo dentro do <em>blockquote</em>.
Códigos de <strong>negrito</strong>, <em>itálico</em> e <a href="https://links.com">https://links.com</a> funcionam aqui.</p>
</blockquote>
<h3>Código (Code Highlight)</h3>
<p>Há dois modos de adicionar trechos de código ao Markdown:</p>
<ul>
<li><strong>Código em linha</strong> (<em>inline</em>): adicione um acento grave <code>ˋ</code> no início e no final do código.</li>
<li><strong>Múltiplas linhas de código</strong>: envolva as linhas de código com três acentos graves <code>ˋˋˋ</code> ou três tils <code>~~~</code>.</li>
</ul>

Para especificar que tipo de linguagem está sendo apresentada no bloco de códigos adicionando o nome da linguagem de programação após o `ˋˋˋ` ou `~~~`, por exemplo `~~~javascript` ou `~~~ruby`. Veja nos exemplos abaixo:

```

~~~javascript
Esta é uma linha de código em Javascript.
~~~

~~~php
Esta é uma linha de código em PHP.
~~~

~~~html
Esta é uma linha de código em HTML.
~~~
  
```

### Tabela

Escolha os títulos das colunas e use `|` para delimitar as colunas. Depois, utilize hífen `-` na segunda linha para indicar que acima estão os títulos das colunas, usando novamente o `|` para delimitar colunas. Veja um exemplo abaixo:

```
Exemplo   | Valor do exemplo
--------- | ------
Exemplo 1 | R$ 10
Exemplo 2 | R$ 8
Exemplo 3 | R$ 7
Exemplo 4 | R$ 8
```
Como aparece:

Exemplo   | Valor do exemplo
--------- | ------
Exemplo 1 | R$ 10
Exemplo 2 | R$ 8
Exemplo 3 | R$ 7
Exemplo 4 | R$ 8

Para especificar o tipo de alinhamento que deseja ter nas tabelas, utilize `:` ao lado do campo horizontal de hífens `---`, na segunda linha da sua tabela. Veja abaixo:

- **Alinhado a esquerda:** usar `:` no lado esquerdo (alinhamento padrão);
- **Alinhado a direita:** usar `:` no lado direito;
- **Centralizado:** usar `:` dos dois lados.

Veja no exemplo:
```
Alinhado a esquerda | Centralizado | Alinhado a direita
:--------- | :------: | -------:
Valor | Valor | Valor
```

Como aparece:

Alinhado a esquerda | Centralizado | Alinhado a direita
:--------- | :------: | -------:
Valor | Valor | Valor