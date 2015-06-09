
#ifndef {{cookiecutter.class|upper}}_H
#define {{cookiecutter.class|upper}}_H

{% if cookiecutter.namespace %}
namespace {{cookiecutter.namespace}} {{"{"}}

  class {{cookiecutter.class}} {{"{"}}

  {{"}"}};
{{"}"}}
{% else %}
class {{cookiecutter.class}} {{"{"}}

{{"}"}};
{% endif %}

#endif
