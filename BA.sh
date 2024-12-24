build_directory="out"
mkdir -p $build_directory
pdflatex -halt-on-error -output-directory $build_directory BA.tex
biber $build_directory/BA
pdflatex -halt-on-error -output-directory $build_directory BA.tex
pdflatex -halt-on-error -output-directory $build_directory BA.tex

