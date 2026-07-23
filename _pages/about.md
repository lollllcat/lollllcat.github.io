---
permalink: /
title: "Chris (Zhizhou) Zhang"
excerpt: "Programming systems, compilers, microservices, and ML-assisted program repair"
author_profile: true
redirect_from: 
  - /about/
  - /about.html
---

<style>
  .home-intro {
    margin-top: 0.4rem;
    font-size: 1.08em;
    line-height: 1.75;
  }

  .home-actions {
    display: flex;
    flex-wrap: wrap;
    gap: 0.55rem;
    margin: 1.25rem 0 1.8rem;
  }

  .home-actions a {
    border: 1px solid #d7dee8;
    border-radius: 6px;
    color: #263241;
    font-size: 0.78em;
    font-weight: 700;
    letter-spacing: 0;
    padding: 0.45rem 0.7rem;
    text-decoration: none;
  }

  .home-actions a:hover {
    background: #f4f7fb;
    color: #1f5f8b;
  }

  .home-section {
    border-top: 1px solid #e6ebf1;
    margin-top: 1.8rem;
    padding-top: 1.25rem;
  }

  .home-section h2 {
    font-size: 1.05em;
    margin-bottom: 0.75rem;
  }

  .home-focus-grid {
    display: grid;
    gap: 0.75rem;
    grid-template-columns: repeat(auto-fit, minmax(190px, 1fr));
    margin-top: 1rem;
  }

  .home-focus-item {
    background: #f7f9fc;
    border: 1px solid #e3e9f0;
    border-radius: 6px;
    padding: 0.85rem 0.95rem;
  }

  .home-focus-item strong {
    color: #263241;
    display: block;
    font-size: 0.88em;
    margin-bottom: 0.3rem;
  }

  .home-focus-item span {
    color: #5b6876;
    display: block;
    font-size: 0.78em;
    line-height: 1.45;
  }

  .home-engineering-grid {
    display: grid;
    gap: 0.75rem;
    grid-template-columns: repeat(auto-fit, minmax(210px, 1fr));
    margin-top: 1rem;
  }

  .page__content a.home-engineering-item {
    border: 1px solid #dfe5ec;
    border-radius: 6px;
    color: #263241;
    display: flex;
    flex-direction: column;
    min-height: 190px;
    padding: 1rem;
    text-decoration: none;
    transition: border-color 160ms ease, box-shadow 160ms ease, transform 160ms ease;
  }

  .page__content a.home-engineering-item:hover {
    border-color: #8fb2c7;
    box-shadow: 0 5px 16px rgba(38, 50, 65, 0.09);
    color: #263241;
    transform: translateY(-2px);
  }

  .home-engineering-item time {
    color: #74808c;
    font-size: 0.7em;
    font-weight: 700;
    text-transform: uppercase;
  }

  .home-engineering-item h3 {
    font-size: 0.9em;
    line-height: 1.35;
    margin: 0.55rem 0 0.45rem;
  }

  .home-engineering-item p {
    color: #5b6876;
    font-size: 0.76em;
    line-height: 1.5;
    margin: 0;
  }

  .home-engineering-link {
    color: #1f5f8b;
    font-size: 0.72em;
    font-weight: 700;
    margin-top: auto;
    padding-top: 0.8rem;
    text-decoration: underline;
  }

  .home-publications {
    margin-left: 0;
    padding-left: 1.1rem;
  }

  .home-publications li {
    margin-bottom: 0.85rem;
  }

  .home-publications em {
    color: #5b6876;
    font-style: normal;
  }
</style>

<p class="home-intro">
I am Chris (Zhizhou) Zhang, 张之洲, a software engineer on Uber's
<a href="https://www.uber.com/us/en/about/science/">Programming Systems team</a>.
My work sits at the intersection of programming systems, compilers, operating
systems, microservices, and ML-assisted program repair.
</p>

<div class="home-actions">
  <a href="/publications/">Publications</a>
  <a href="/cv/">CV</a>
  <a href="https://scholar.google.com/citations?user=Onvm2JcAAAAJ&hl=en">Google Scholar</a>
</div>

I received my Ph.D. in Computer Science from
[UC Santa Barbara](https://www.cs.ucsb.edu/), where I was advised by
[Prof. Tim Sherwood](https://www.arch.cs.ucsb.edu/prof-sherwood) at
[ArchLab](https://www.arch.cs.ucsb.edu/) and closely collaborated with
[Prof. Jonathan Balkind](https://jbalkind.github.io/). Before that, I received
my undergraduate degree from the University of Rochester, where I worked with
[Prof. Chen Ding](https://www.cs.rochester.edu/~cding/).

<div class="home-section">
  <h2>Current Work</h2>
  <div class="home-focus-grid">
    <div class="home-focus-item">
      <strong>Programming systems</strong>
      <span>Tools and runtime techniques for making real-world software faster, safer, and easier to debug.</span>
    </div>
    <div class="home-focus-item">
      <strong>ML-assisted program repair</strong>
      <span>Automated fixes for data races, resource leaks, and other production software defects.</span>
    </div>
    <div class="home-focus-item">
      <strong>Microservices</strong>
      <span>Performance, reliability, and error analysis for large-scale service architectures.</span>
    </div>
  </div>
</div>

<div class="home-section">
  <h2>Engineering</h2>
  <div class="home-engineering-grid">
    <a class="home-engineering-item" href="https://www.uber.com/us/en/blog/fixrleak-fixing-java-resource-leaks-with-genai/">
      <time datetime="2025-05-01">May 2025</time>
      <h3>FixrLeak: Fixing Java Resource Leaks with GenAI</h3>
      <p>Combining AST analysis with generative AI to detect and repair resource leaks across Uber's Java codebase.</p>
      <span class="home-engineering-link">Read on Uber Engineering &rarr;</span>
    </a>
    <a class="home-engineering-item" href="https://www.uber.com/us/en/blog/automating-efficiency-of-go-programs-with-pgo/">
      <time datetime="2025-03-13">March 2025</time>
      <h3>Automating Efficiency of Go Programs with Profile-Guided Optimizations</h3>
      <p>Deploying continuous profile-guided optimization for Go services while keeping production build times practical.</p>
      <span class="home-engineering-link">Read on Uber Engineering &rarr;</span>
    </a>
    <a class="home-engineering-item" href="https://www.uber.com/us/en/blog/crisp-critical-path-analysis-for-microservice-architectures/">
      <time datetime="2021-11-18">November 2021</time>
      <h3>CRISP: Critical Path Analysis for Microservice Architectures</h3>
      <p>Finding and visualizing the services that contribute most to end-to-end latency in complex distributed traces.</p>
      <span class="home-engineering-link">Read on Uber Engineering &rarr;</span>
    </a>
  </div>
</div>

<div class="home-section">
  <h2>Selected Publications</h2>
  <ul class="home-publications">
    <li>
      <a href="https://doi.org/10.1145/3729265">DR. FIX: Automatically Fixing Data Races at Industry Scale</a><br>
      <em>PLDI 2025</em>
    </li>
    <li>
      <a href="https://dl.acm.org/doi/10.1145/3700436">The Tale of Errors in Microservices</a><br>
      <em>SIGMETRICS 2025</em>
    </li>
    <li>
      <a href="https://www.usenix.org/conference/atc22/presentation/zhang-zhizhou">CRISP: Critical Path Analysis of Large-Scale Microservice Architectures</a><br>
      <em>USENIX ATC 2022</em>
    </li>
    <li>
      <a href="https://www.usenix.org/conference/atc21/presentation/zhang-zhizhou">Optimistic Concurrency Control for Real-world Go Programs</a><br>
      <em>USENIX ATC 2021</em>
    </li>
  </ul>
</div>

<div class="home-section">
  <h2>Outside Work</h2>
  <p>In my spare time, I enjoy hiking and playing violin.</p>
</div>
