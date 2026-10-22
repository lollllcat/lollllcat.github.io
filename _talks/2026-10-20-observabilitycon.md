---
title: "Automating efficiency at Uber scale with Grafana Cloud Profiles and Assistant"
collection: talks
type: "Conference talk"
permalink: /talks/observabilitycon-2026/
venue: "ObservabilityCON 2026"
date: 2026-10-20
location: "San Francisco"
excerpt: "Building always-on profiling across Uber's 6,000+ services: sampling, production safety, and using profiles to investigate performance problems."
session_url: "https://grafana.com/events/observabilitycon/2026/agenda/automating-efficiency-at-Uber-scale-with-Grafana-Cloud-Profiles-and-Assistant/"
slides_url: "/files/observabilitycon-2026-always-on-profiling.pdf"
recording_url:
share: false
---

Over the past two years, I've worked with colleagues at Uber and Grafana on
always-on profiling infrastructure across Uber's 6,000+ services. In this talk,
I shared how we built it and what we learned along the way.

The talk covers why random sampling can miss smaller services, how a central
control plane manages collection without blocking applications, and how we use
profiles to investigate CPU use, memory allocation, and lock contention. It also
includes lessons from failures and the effects of performance fixes on other
parts of a system.

The final part covers Grafana Assistant, profile access through MCP, and a design
for an automated optimization loop that combines program analysis, generative AI,
and checks for equivalent behavior.

[Slides (PDF)]({{ page.slides_url | relative_url }}) · [Session page]({{ page.session_url }})

{% if page.recording_url %}
[Watch the recording]({{ page.recording_url }})
{% else %}
Recording coming soon.
{% endif %}
