---
permalink: /
title: "Chris (Zhizhou) Zhang · 张之洲"
excerpt: "Software engineer at Uber working on profiling, compiler optimizations, distributed tracing, and automated program repair."
author_profile: true
redirect_from:
  - /about/
  - /about.html
---

<style>
  .page__title {
    word-break: keep-all;
  }

  .home-intro {
    margin-top: 0.5rem;
    font-size: 1.05em;
    line-height: 1.65;
  }

  .home-featured {
    background: #f7f9fc;
    border: 1px solid #dfe5ec;
    border-left: 3px solid #1f5f8b;
    border-radius: 4px;
    margin: 1.5rem 0;
    padding: 1rem 1.15rem;
  }

  .home-featured .home-featured-meta {
    color: #5b6876;
    font-size: 0.85em;
    margin: 0 0 0.5rem;
  }

  .home-featured h2 {
    font-size: 1.12em;
    margin: 0 0 0.6rem;
  }

  .home-featured p {
    font-size: 0.95em;
    margin-bottom: 0.7rem;
  }

  .home-featured .home-resource-links {
    margin-bottom: 0;
  }

  .home-resource-links {
    display: flex;
    flex-wrap: wrap;
    gap: 0.4rem 1rem;
    font-size: 0.9em;
  }

  .home-section {
    border-top: 1px solid #e6ebf1;
    margin-top: 1.8rem;
    padding-top: 1.25rem;
  }

  .home-section h2 {
    font-size: 1.1em;
    margin: 0 0 0.9rem;
  }

  .home-work-grid {
    display: grid;
    gap: 0.9rem;
    grid-template-columns: repeat(auto-fit, minmax(210px, 1fr));
  }

  .home-work-item {
    border: 1px solid #dfe5ec;
    border-radius: 6px;
    padding: 1rem;
  }

  .home-work-item h3 {
    font-size: 1em;
    line-height: 1.4;
    margin: 0 0 0.65rem;
  }

  .home-work-item p {
    font-size: 1em;
    line-height: 1.55;
    margin: 0;
  }

  .home-publications {
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
I'm a software engineer in Uber's Frontier Tech Labs (FTL). I work on performance
analysis, compiler optimizations, and automated program repair.
</p>

My current focus is Perf Factory, where we're working on automating performance
analysis and optimization across Uber's services. This includes collecting
profiles, finding bottlenecks, and checking the effects of code changes.

{% assign featured_talk = site.talks | where: "permalink", "/talks/observabilitycon-2026/" | first %}
{% if featured_talk %}
<aside class="home-featured" aria-labelledby="featured-talk-title">
  <p class="home-featured-meta">{{ featured_talk.venue }} · {{ featured_talk.date | date: "%B %-d" }}</p>
  <h2 id="featured-talk-title">Profiling at Uber scale</h2>
  <p>I talk about building always-on profiling across Uber's 6,000+ services with
  colleagues at Uber and Grafana, and how we use profiles to investigate
  performance problems.</p>
  <p class="home-resource-links">
    {% if featured_talk.recording_url %}<a href="{{ featured_talk.recording_url }}">Watch the talk</a>{% endif %}
    {% if featured_talk.slides_url %}<a href="{{ featured_talk.slides_url | relative_url }}">Slides (PDF)</a>{% endif %}
    <a href="{{ featured_talk.url | relative_url }}">Talk details</a>
  </p>
</aside>
{% endif %}

<div class="home-section">
  <h2>Work</h2>
  <div class="home-work-grid">
    <article class="home-work-item">
      <h3><a href="{{ '/work/profiling-and-optimization/' | relative_url }}">Profiling and compiler optimizations</a></h3>
      <p>I work on collecting production profiles and using them to guide
      optimization. This includes profiling across Uber's services and integrating
      Go PGO into build and deployment workflows.</p>
    </article>
    <article class="home-work-item">
      <h3><a href="{{ '/work/distributed-tracing/' | relative_url }}">Distributed tracing</a></h3>
      <p>With CRISP, we analyze request traces to find the operations that
      contribute to end-to-end latency. Related work studies how internal RPC
      errors affect latency even when a request succeeds.</p>
    </article>
    <article class="home-work-item">
      <h3><a href="{{ '/work/program-repair/' | relative_url }}">Automated program repair</a></h3>
      <p>I work on using program analysis and machine learning to fix software
      defects. This includes DR. FIX for data races in Go and FixrLeak for resource
      leaks in Java.</p>
    </article>
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
      <em>SIGMETRICS 2025</em> · <a href="https://github.com/uber-research/CRISP">code</a>
    </li>
    <li>
      <a href="https://www.usenix.org/conference/atc22/presentation/zhang-zhizhou">CRISP: Critical Path Analysis of Large-Scale Microservice Architectures</a><br>
      <em>USENIX ATC 2022</em> · <a href="https://www.youtube.com/watch?v=Pgat0dM743I">video</a>
    </li>
    <li>
      <a href="https://www.usenix.org/conference/atc21/presentation/zhang-zhizhou">Optimistic Concurrency Control for Real-world Go Programs</a><br>
      <em>USENIX ATC 2021</em> · <a href="https://www.youtube.com/watch?v=nFuGTks1OTg">video</a>
    </li>
  </ul>
  <p><a href="{{ '/publications/' | relative_url }}">All publications</a></p>
</div>

<div class="home-section" markdown="1">
## Background

I received my Ph.D. in Computer Science from
[UC Santa Barbara](https://www.cs.ucsb.edu/), where I was advised by
[Prof. Tim Sherwood](https://www.arch.cs.ucsb.edu/prof-sherwood) at
[ArchLab](https://www.arch.cs.ucsb.edu/) and closely collaborated with
[Prof. Jonathan Balkind](https://jbalkind.github.io/). Before that, I received
my undergraduate degree from the University of Rochester, where I worked with
[Prof. Chen Ding](https://www.cs.rochester.edu/~cding/).

[Education and service]({{ '/background/' | relative_url }})
</div>

<div class="home-section">
  <h2>Outside Work</h2>
  <p>In my spare time, I enjoy hiking and playing violin.</p>
</div>
