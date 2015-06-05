

{% if cookiecutter.namespace %}
namespace {{cookiecutter.namespace}} {{"{"}}

  class {{cookiecutter.class}} {{"{"}}

  {{"}"}};
{{"}"}}
{% else %}
class {{cookiecutter.class}} {{"{"}}

{{"}"}};
{% endif %}
