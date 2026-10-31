---
title: "Distributed tracing"
permalink: /work/distributed-tracing/
excerpt: "Using request traces to understand latency and errors in microservice systems."
author_profile: true
---

I work on using distributed traces to understand latency and errors in
microservice systems. The work combines analysis of individual requests with
patterns across many traces.

## CRISP

With colleagues at Uber and UC Santa Barbara, I worked on CRISP, a tool for
critical path analysis of microservice request traces.

A request can involve many services running in parallel. CRISP identifies the
chain of dependent operations that determines when the request finishes. We use
this analysis to find latency bottlenecks, identify operations that affect many
requests, and investigate performance problems.

* [Paper — USENIX ATC 2022](https://www.usenix.org/conference/atc22/presentation/zhang-zhizhou)
* [Talk recording](https://www.youtube.com/watch?v=Pgat0dM743I)
* [Code](https://github.com/uber-research/CRISP)
* [CRISP: Critical Path Analysis for Microservice Architectures — Uber Engineering](https://www.uber.com/us/en/blog/crisp-critical-path-analysis-for-microservice-architectures/)
* [Data](https://zenodo.org/records/13956078)

## Errors in microservices

I also worked with colleagues on *The Tale of Errors in Microservices*. We studied
RPC errors that don't cause the overall request to fail, and how they still add
latency. We used distributed traces to identify these errors and estimate how
much latency could be reduced by fixing them.

* [Paper — SIGMETRICS 2025](https://dl.acm.org/doi/10.1145/3700436)
* [Code](https://github.com/uber-research/CRISP)
* [Data](https://zenodo.org/records/13947828)

[Back to home]({{ '/' | relative_url }})
