<h2><a href="https://codeforces.com/contest/1304/problem/B" target="_blank" rel="noopener noreferrer">1304B — Longest Palindrome</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1304B](https://codeforces.com/contest/1304/problem/B) |

## Topics
`brute force` `constructive algorithms` `greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Longest Palindrome</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Returning back to problem solving, Gildong is now studying about palindromes. He learned that a <span class="tex-font-style-it">palindrome</span> is a string that is the same as its reverse. For example, strings "<span class="tex-font-style-tt">pop</span>", "<span class="tex-font-style-tt">noon</span>", "<span class="tex-font-style-tt">x</span>", and "<span class="tex-font-style-tt">kkkkkk</span>" are palindromes, while strings "<span class="tex-font-style-tt">moon</span>", "<span class="tex-font-style-tt">tv</span>", and "<span class="tex-font-style-tt">abab</span>" are not. <span class="tex-font-style-bf">An empty string is also a palindrome.</span></p><p>Gildong loves this concept so much, so he wants to play with it. He has $$$n$$$ <span class="tex-font-style-it">distinct</span> strings of equal length $$$m$$$. He wants to discard some of the strings (possibly none or all) and reorder the remaining strings so that the concatenation becomes a palindrome. He also wants the palindrome to be as long as possible. Please help him find one.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 100$$$, $$$1 \le m \le 50$$$) — the number of strings and the length of each string.</p><p>Next $$$n$$$ lines contain a string of length $$$m$$$ each, consisting of lowercase Latin letters only. All strings are <span class="tex-font-style-it">distinct</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line, print the length of the longest palindrome string you made.</p><p>In the second line, print that palindrome. If there are multiple answers, print any one of them. If the palindrome is empty, print an empty line or don't print this line at all.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000038222518932553573" id="id0042671825037963085" class="input-output-copier">Copy</div></div><pre id="id000038222518932553573">3 3
tab
one
bat
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008982202374846193" id="id008842310130851267" class="input-output-copier">Copy</div></div><pre id="id008982202374846193">6
tabbat
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0028492381585681104" id="id009961914232382335" class="input-output-copier">Copy</div></div><pre id="id0028492381585681104">4 2
oo
ox
xo
xx
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005958773062997343" id="id005525393392642249" class="input-output-copier">Copy</div></div><pre id="id005958773062997343">6
oxxxxo
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009315858785244735" id="id00723501906121247" class="input-output-copier">Copy</div></div><pre id="id0009315858785244735">3 5
hello
codef
orces
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003909976758412672" id="id0018861573313270485" class="input-output-copier">Copy</div></div><pre id="id003909976758412672">0

</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005426038956929643" id="id009669843161604182" class="input-output-copier">Copy</div></div><pre id="id005426038956929643">9 4
abab
baba
abcd
bcde
cdef
defg
wxyz
zyxw
ijji
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003516043371252915" id="id003682393786415915" class="input-output-copier">Copy</div></div><pre id="id003516043371252915">20
ababwxyzijjizyxwbaba
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, "<span class="tex-font-style-tt">battab</span>" is also a valid answer.</p><p>In the second example, there can be 4 different valid answers including the sample output. We are not going to provide any hints for what the others are.</p><p>In the third example, the empty string is the only valid palindrome string.</p></div>