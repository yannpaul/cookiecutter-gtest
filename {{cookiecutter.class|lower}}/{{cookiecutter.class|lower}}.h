// -*- c++ -*-
#ifndef {{cookiecutter.class|upper}}_H
#define {{cookiecutter.class|upper}}_H

{% if cookiecutter.namespace %}
namespace {{cookiecutter.namespace}} {{"{"}}

  class {{cookiecutter.class}} {{"{"}}
    {{cookiecutter.answer_type}} {{cookiecutter.method}} ( ) {{"{"}}

    {{"}"}}

  {{"}"}};
{{"}"}}
{% else %}
class {{cookiecutter.class}} {{"{"}}
  {{cookiecutter.answer_type}} {{cookiecutter.method}} ( ) {{"{"}}

  {{"}"}}
{{"}"}};
{% endif %}

#endif
