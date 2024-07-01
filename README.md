
<h1 align="center">ft_printf</h1>

<h2>Description</h2>
<p><strong>ft_printf</strong> is a project from the 42 cursus that involves re-creating the C library function <code>printf</code>. The main objective is to understand the inner workings of this essential function, including variadic functions, format specifiers, and buffer management. The project requires implementing a custom <code>ft_printf</code> function that mimics the behavior of the standard <code>printf</code>.</p>

<h2>Table of Contents</h2>
<ul>
	<li><a href="#requirements">Requirements</a></li>
	<li><a href="#installation">Installation</a></li>
	<li><a href="#usage">Usage</a></li>
	<li><a href="#supported-format-specifiers">Supported Format Specifiers</a></li>
	<li><a href="#project-structure">Project Structure</a></li>
	<li><a href="#license">License</a></li>
</ul>

<h2 id="requirements">Requirements</h2>
<p>To compile and run the project, you will need:</p>
<ul>
	<li>A Unix operating system (Linux or macOS).</li>
	<li>gcc or any C compiler.</li>
	<li>Make.</li>
</ul>

<h2 id="installation">Installation</h2>
<p>Clone the project repository and navigate to the main directory:</p>
<pre><code>git clone https://github.com/PaLucena/ft_printf.git
cd ft_printf</code></pre>
<p>Compile the project using the included Makefile:</p>
<pre><code>make</code></pre>
<p>This will generate the <code>libftprintf.a</code> library in the current directory.</p>

<h2 id="usage">Usage</h2>
<p>To use the <code>ft_printf</code> function in your own project, include the <code>libftprintf.a</code> library and the corresponding header file:</p>
<pre><code>#include "ft_printf.h"</code></pre>
<p>Link the library during the compilation of your project:</p>
<pre><code>gcc -o your_program your_program.c -L. -lftprintf</code></pre>

<h2 id="supported-format-specifiers">Supported Format Specifiers</h2>
<p>The <strong>ft_printf</strong> function supports the following format specifiers:</p>
<ul>
	<li><code>%c</code>: Character</li>
	<li><code>%s</code>: String</li>
	<li><code>%p</code>: Pointer</li>
	<li><code>%d</code>: Decimal integer</li>
	<li><code>%i</code>: Integer</li>
	<li><code>%u</code>: Unsigned integer</li>
	<li><code>%x</code>: Hexadecimal integer (lowercase)</li>
	<li><code>%X</code>: Hexadecimal integer (uppercase)</li>
	<li><code>%%</code>: Percent sign</li>
</ul>

<h2 id="project-structure">Project Structure</h2>
<p>The project is organized into the following files and directories:</p>
<ul>
	<li><code>src/</code>: Contains the source code of the <code>ft_printf</code> implementation.</li>
	<li><code>include/</code>: Contains the header files.</li>
	<li><code>Makefile</code>: Build script to generate the library.</li>
	<li><code>README.md</code>: Project documentation.</li>
</ul>

<h2 id="license">License</h2>
<p>This project is licensed under the MIT License. See the <code>LICENSE</code> file for more details.</p>
