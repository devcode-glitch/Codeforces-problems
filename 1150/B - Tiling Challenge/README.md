<h2><a href="https://codeforces.com/contest/1150/problem/B" target="_blank" rel="noopener noreferrer">1150B — Tiling Challenge</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1150B](https://codeforces.com/contest/1150/problem/B) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Tiling Challenge</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>One day Alice was cleaning up her basement when she noticed something very curious: an <span class="tex-font-style-bf">infinite</span> set of wooden pieces! Each piece was made of five square tiles, with four tiles adjacent to the fifth center tile: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/3e3d2680d0e95711cea2f81701133940b158001f.png" style="max-width: 100.0%;max-height: 100.0%;"> </center> By the pieces lay a large square wooden board. The board is divided into $$$n^2$$$ cells arranged into $$$n$$$ rows and $$$n$$$ columns. Some of the cells are already occupied by single tiles stuck to it. The remaining cells are free.<p>Alice started wondering whether she could fill the board completely using the pieces she had found. Of course, each piece has to cover exactly five distinct cells of the board, no two pieces can overlap and every piece should fit in the board entirely, without some parts laying outside the board borders. The board however was too large for Alice to do the tiling by hand. Can you help determine if it's possible to fully tile the board?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$n$$$ ($$$3 \leq n \leq 50$$$) — the size of the board.</p><p>The following $$$n$$$ lines describe the board. The $$$i$$$-th line ($$$1 \leq i \leq n$$$) contains a single string of length $$$n$$$. Its $$$j$$$-th character ($$$1 \leq j \leq n$$$) is equal to "<span class="tex-font-style-tt">.</span>" if the cell in the $$$i$$$-th row and the $$$j$$$-th column is free; it is equal to "<span class="tex-font-style-tt">#</span>" if it's occupied.</p><p>You can assume that the board contains at least one free cell.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output <span class="tex-font-style-tt">YES</span> if the board can be tiled by Alice's pieces, or <span class="tex-font-style-tt">NO</span> otherwise. You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007620706848796235" id="id006808268172901193" class="input-output-copier">Copy</div></div><pre id="id007620706848796235">3
#.#
...
#.#
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019271911418414944" id="id00844895778076328" class="input-output-copier">Copy</div></div><pre id="id0019271911418414944">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004866186360024576" id="id0018980764989020582" class="input-output-copier">Copy</div></div><pre id="id004866186360024576">4
##.#
#...
####
##.#
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007251795536734111" id="id005035070930470096" class="input-output-copier">Copy</div></div><pre id="id007251795536734111">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007837466878921535" id="id006592755778576107" class="input-output-copier">Copy</div></div><pre id="id007837466878921535">5
#.###
....#
#....
###.#
#####
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006121602731247832" id="id003083754542693875" class="input-output-copier">Copy</div></div><pre id="id006121602731247832">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002567434019283439" id="id006456167396472416" class="input-output-copier">Copy</div></div><pre id="id002567434019283439">5
#.###
....#
#....
....#
#..##
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006364104055745116" id="id0025160220567092484" class="input-output-copier">Copy</div></div><pre id="id006364104055745116">NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The following sketches show the example boards and their tilings if such tilings exist: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/9a08c214c68f15f6d7a4c3d5365b54fdf8fedfb6.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>