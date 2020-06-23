---


---

<h1 id="get_next_line">get_next_line</h1>
<h3 id="gnl-is-a-reimplementation-of-the-get_line-function">Gnl is a reimplementation of the <code>get_line()</code> function</h3>
<p>This function reads one line at a time from a given file descriptor, writes this line<br>
into a dynamically allocated memory area and returns a pointer to this area.</p>
<p>This implementation enables to read the data from multiple files simultaniously, in any order, while “remembering” current position in files.</p>
<ul>
<li>The line is a series of characters, which end with a <code>'\n'</code></li>
<li>The line returned is null-terminated (there is no new-line character).</li>
<li>By calling the function in a loop, it will read the contents of a file given as an argument or stdin untill the EoF (ctrl + D) signal is sent.</li>
</ul>
<p><strong>to prevent memory leaks, the user must <code>free(line)</code> after each call to <code>get_next_line()</code></strong></p>
<ul>
<li>The function returns 1 if a line has been read</li>
<li>The function returns 0 if a file has been read (EoF)</li>
<li>The function returns -1 on error</li>
</ul>
<h3 id="the-prototype-is-as-follows">The prototype is as follows:</h3>
<p><code>int	get_next_line(const int fd, char **line);</code></p>
<p>where</p>
<ul>
<li><strong>fd</strong> - file descriptor of a desired file</li>
<li>** <strong>line</strong> - pointer to the memory area where the contents of a line will be stored</li>
</ul>
<h2 id="usage">Usage</h2>
<p>To test the code, run <code>sh compile.sh</code>.<br>
This will <em>make</em>, <em>link</em> the library and will produce <em>test_gnl</em> executable file.<br>
to run use <code>./gnl_test *read*</code> or <code>./gnl_test</code> to read from stdin</p>
<p>To use the function in the program, call it according to its prototype.</p>
ii
