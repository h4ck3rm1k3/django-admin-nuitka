cmake_minimum_required(VERSION 2.8)
#set (CMAKE_CXX_COMPILER "/home/h4ck3rm1k3/install/bin/g++")
set( CMAKE_CXX_FLAGS "-Wall -O3 -std=gnu++11 " )

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

include_directories (/usr/local/lib/python2.7/dist-packages/nuitka/build/include
  .
)

enable_language(ASM)
#> SET (CMAKE_C_CREATE_ASSEMBLY_SOURCE "<CMAKE_C_COMPILER> <FLAGS> -S 
#add_executable (djangoAd  )

add_library (helper  
/usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/CompiledCodeHelpers.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/CompiledFrameType.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/CompiledFunctionType.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/CompiledGeneratorType.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/CompiledMethodType.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/InspectPatcher.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/ModuleUnfreezer.cpp 
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/x64_ucontext_src/fibers_x64.cpp
  /usr/local/lib/python2.7/dist-packages/nuitka/build/static_src/x64_ucontext_src/swapfiber.S
)


add_executable (djangoAdmin __constants.cpp __helpers.cpp __internal__.cpp module.django.conf.cpp module.django.conf.global_settings.cpp module.django.conf.urls.cpp module.django.core.cpp module.django.core.exceptions.cpp module.django.core.files.base.cpp module.django.core.files.cpp module.django.core.files.images.cpp module.django.core.files.locks.cpp module.django.core.files.move.cpp module.django.core.files.storage.cpp module.django.core.files.temp.cpp module.django.core.files.uploadedfile.cpp module.django.core.files.uploadhandler.cpp module.django.core.files.utils.cpp module.django.core.handlers.base.cpp module.django.core.handlers.cpp module.django.core.handlers.wsgi.cpp module.django.core.mail.cpp module.django.core.mail.message.cpp module.django.core.mail.utils.cpp module.django.core.management.base.cpp module.django.core.management.color.cpp module.django.core.management.cpp module.django.core.management.validation.cpp module.django.core.servers.basehttp.cpp module.django.core.servers.cpp module.django.core.servers.fastcgi.cpp module.django.core.signals.cpp module.django.core.signing.cpp module.django.core.urlresolvers.cpp module.django.core.validators.cpp module.django.core.wsgi.cpp module.django.cpp module.django.db.backends.cpp module.django.db.backends.signals.cpp module.django.db.backends.util.cpp module.django.db.cpp module.django.db.models.aggregates.cpp module.django.db.models.base.cpp module.django.db.models.constants.cpp module.django.db.models.cpp module.django.db.models.deletion.cpp module.django.db.models.expressions.cpp module.django.db.models.fields.cpp module.django.db.models.fields.files.cpp module.django.db.models.fields.proxy.cpp module.django.db.models.fields.related.cpp module.django.db.models.fields.subclassing.cpp module.django.db.models.loading.cpp module.django.db.models.manager.cpp module.django.db.models.options.cpp module.django.db.models.query.cpp module.django.db.models.query_utils.cpp module.django.db.models.related.cpp module.django.db.models.signals.cpp module.django.db.models.sql.aggregates.cpp module.django.db.models.sql.constants.cpp module.django.db.models.sql.cpp module.django.db.models.sql.datastructures.cpp module.django.db.models.sql.expressions.cpp module.django.db.models.sql.query.cpp module.django.db.models.sql.subqueries.cpp module.django.db.models.sql.where.cpp module.django.db.transaction.cpp module.django.db.utils.cpp module.django.dispatch.cpp module.django.dispatch.dispatcher.cpp module.django.dispatch.saferef.cpp module.django.forms.cpp module.django.forms.fields.cpp module.django.forms.forms.cpp module.django.forms.formsets.cpp module.django.forms.models.cpp module.django.forms.util.cpp module.django.forms.widgets.cpp module.django.http.cookie.cpp module.django.http.cpp module.django.http.multipartparser.cpp module.django.http.request.cpp module.django.http.response.cpp module.django.http.utils.cpp module.django.template.base.cpp module.django.template.context.cpp module.django.template.cpp module.django.template.debug.cpp module.django.template.defaultfilters.cpp module.django.template.loader.cpp module.django.utils.baseconv.cpp module.django.utils.cpp module.django.utils.crypto.cpp module.django.utils.daemonize.cpp module.django.utils.datastructures.cpp module.django.utils.dateformat.cpp module.django.utils.dateparse.cpp module.django.utils.dates.cpp module.django.utils.datetime_safe.cpp module.django.utils.decorators.cpp module.django.utils.deprecation.cpp module.django.utils.dictconfig.cpp module.django.utils.encoding.cpp module.django.utils.formats.cpp module.django.utils.functional.cpp module.django.utils.html.cpp module.django.utils.html_parser.cpp module.django.utils.http.cpp module.django.utils.image.cpp module.django.utils.importlib.cpp module.django.utils.ipv6.cpp module.django.utils.itercompat.cpp module.django.utils.log.cpp module.django.utils.module_loading.cpp module.django.utils.numberformat.cpp module.django.utils._os.cpp module.django.utils.regex_helper.cpp module.django.utils.safestring.cpp module.django.utils.six.cpp module.django.utils.termcolors.cpp module.django.utils.text.cpp module.django.utils.timesince.cpp module.django.utils.timezone.cpp module.django.utils.translation.cpp module.django.utils.translation.trans_null.cpp module.django.utils.translation.trans_real.cpp module.django.utils.tree.cpp module.django.utils.tzinfo.cpp module.django.utils.version.cpp module.django.views.cpp module.django.views.debug.cpp module.hashlib.cpp module.hmac.cpp module.__main__.cpp )

TARGET_LINK_LIBRARIES(djangoAdmin ${PYTHON_LIBRARIES}  -ldl -lutil -pthread)
target_link_libraries (djangoAdmin helper) 
