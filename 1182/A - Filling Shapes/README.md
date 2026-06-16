<h2><a href="https://codeforces.com/contest/1182/problem/A" target="_blank" rel="noopener noreferrer">1182A — Filling Shapes</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1182A](https://codeforces.com/contest/1182/problem/A) |

## Topics
`dp` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Filling Shapes</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a given integer $$$n$$$. Find the number of ways to fill all $$$3 \times n$$$ tiles with the shape described in the picture below. Upon filling, no empty spaces are allowed. Shapes cannot overlap.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/87c303f887fa1c553f93820abb8e1eee0ee2593a.png" style="max-width: 100.0%;max-height: 100.0%;"> This picture describes when $$$n = 4$$$. The left one is the shape and the right one is $$$3 \times n$$$ tiles. </center></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains one integer $$$n$$$ ($$$1 \le n \le 60$$$) — the length.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the number of ways to fill.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004626999190277008" id="id006743562646945733" class="input-output-copier">Copy</div></div><pre id="id004626999190277008">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000020091413542400183" id="id0049507198770212346" class="input-output-copier">Copy</div></div><pre id="id000020091413542400183">4</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003087465999662238" id="id00607724557989999" class="input-output-copier">Copy</div></div><pre id="id003087465999662238">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009195874453879053" id="id0006987979766223118" class="input-output-copier">Copy</div></div><pre id="id009195874453879053">0</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, there are $$$4$$$ possible cases of filling.</p><p>In the second example, you cannot fill the shapes in $$$3 \times 1$$$ tiles.</p></div>