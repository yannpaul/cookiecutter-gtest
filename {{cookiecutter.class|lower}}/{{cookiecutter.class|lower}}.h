// -*- c++ -*-
#ifndef {{cookiecutter.class|upper}}_H
#define {{cookiecutter.class|upper}}_H

{% if cookiecutter.namespace %}
namespace {{cookiecutter.namespace}} {{"{"}}

  class {{cookiecutter.class}} {{"{"}} 
  public:
  {{cookiecutter.answer_type}} {{cookiecutter.method}} ({{cookiecutter.args}}) {{"{"}}

    {{"}"}}

  {{"}"}};
{{"}"}}
{% else %}
class {{cookiecutter.class}} {{"{"}}
public:
  {{cookiecutter.answer_type}} {{cookiecutter.method}} ({{cookiecutter.args}}) {{"{"}}

  {{"}"}}
{{"}"}};
{% endif %}

#endif
