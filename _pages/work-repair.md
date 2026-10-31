---
title: "Automated program repair"
permalink: /work/program-repair/
excerpt: "Combining program analysis and machine learning to fix data races and resource leaks."
author_profile: true
---

I work on combining program analysis and machine learning to find and fix software
defects. Two projects I've worked on with colleagues are DR. FIX and FixrLeak.

## DR. FIX

DR. FIX addresses data races in Go programs. The work looks at automatically
generating fixes and applying them in a production development workflow.

* [Paper — PLDI 2025](https://doi.org/10.1145/3729265)
* [Data race examples and analysis tools](https://github.com/uber-research/drfix)

## FixrLeak

FixrLeak addresses resource leaks in Java. It uses program analysis to identify
cases where a resource can be closed within a method, then uses a language model
to generate a fix. The workflow includes building the code, running tests, and
having developers review the proposed changes.

* [FixrLeak: Fixing Java Resource Leaks with GenAI — Uber Engineering](https://www.uber.com/us/en/blog/fixrleak-fixing-java-resource-leaks-with-genai/)
* [Workshop paper — NeurIPS 2024 (PDF)]({{ '/files/GenAI_resource_leak.pdf' | relative_url }})

[Back to home]({{ '/' | relative_url }})
