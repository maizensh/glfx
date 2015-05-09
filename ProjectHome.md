GLFX allows you to create effect files for your OpenGL project. An effect file can contain multiple shader definitions across all shader stages and allows you to easily create GLSL programs from them. The library provides a very simple to use API which hides the low level compilation and linkage OpenGL functions from the user.

GLFX is available for both Linux and Windows under the new BSD license.<br>
<b>All our code is under the new BSD license, but there are generated files in the project which are protected by a special GPL license. In simplest terms, this license won't contaminate your code unless you modify these specific files! The files in question have clear comments in their beginning. Regenerating them doesn't count as editing and doesn't break the special license.</b><br>
These files are supplied mainly for Windows systems, where getting an up-to-date Bison isn't an entirely straightforward procedure.<br>
Flex generated files are also supplied, but Flex's license is more permissive (like BSD). So you're free to edit it.<br>
<b>In any case, I strongly advise against editing these files directly. If you need, edit the grammar files instead.</b>

You can find usage instructions in the downloads section or here: <a href='http://ogldev.atspace.co.uk/www/tutorial34/tutorial34.html'>http://ogldev.atspace.co.uk/www/tutorial34/tutorial34.html</a>

<u><b>News:</b></u><br><br>
September-9, 2013, version 0.75 and updated documentation released.<br>
- Added CMake build system. In the next release automake will go away<br>
- Changed calling convention on Windows to cdecl<br>
- Changed location of glfx.h<br>
- Changed and fixed getter of error logs<br>
- Added support for fragment depth redeclaration<br>
- Removed support for images from glfx. They made little sense in the context of samplers.<br>
- Fixed build issues<br>
- Multiple build targets support (including DLLs)<br>
- Binary release for Windows. Must be dynamically linked with GLEW.<br>
- Updated documentation<br>

January-22, 2013, version 0.7 and updated documentation released.<br>
- No binary release this time. Due to logistical difficulties.<br>
- Installation under Linux now also copies the header.<br>
- Added workaround for Linux distros that still don't have GLEW 1.9.<br>
- Added parsing from memory (refer to documentation).<br>
- Added ability to get all program names in the effect file (refer to documentation).<br>
- Better memory release upon completion of parsing.<br>
- Added cmake build script.<br>
- Samplers: min filter now defaults to trilinear.<br>

September-27, 2012, Documentation released.<br>
- Available in downloads section.<br>
- Includes feature explanations and code snippets.<br>
- Although all current features are documented, not everything is explained in depth.<br>
- Version of the documentation is solely by its date.<br>
- Still no section on limitations and future work.<br>

September-11, 2012, version 0.60 released.<br>
- Added support for compute shader (cs keyword).<br>
- Added support for linking separable programs, by using "stages" keyword instead of "program".<br>
- Relinking programs outside of GLFX won't work anymore, because shaders are detached and deleted right after link.<br>
- Experimental lib release. It was lib'ed without linking GLEW in. It should be better than before, but if problems arise please report.<br>
- Current dependency is against GLEW 1.9.0<br>
- Ubuntu repository release will come later, since they don't have GLEW 1.9.0 yet. For now, Linux users can just download the source (or svn checkout) and compile the package.<br>
- Documentation will soon be released in PDF format.<br>

May-9, 2012: version 0.52 released.<br>
- Bugfix: Identifiers with underscore are now allowed<br>
<strike><i>Note</i>: some files in the source package aren't updated yet (only things that affect the version number). This is a non-issue for Windows users. Soon it will be repackaged and re-uploaded with the correct version number for Linux/Mac users.</strike><br>

Jan-22, 2012: version 0.51 released.<br>
- Bugfix: correct handling of multiline comments.<br>
- Bugfix: correct line number of warnings and errors when compiling multiple effect files.