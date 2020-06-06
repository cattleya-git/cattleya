# 補完
autoload -U compinit
compinit

# ビープ音の停止（補完時）
setopt nolistbeep

# プロンプト表示を設定
# 色を使用出来るようにする
autoload -Uz colors
colors
# (改行)
# 時刻 [(cyan)cd(reset)]
# ユーザ種別
PROMPT="
%*[%{${fg[cyan]}%}%~%{${reset_color}%}]
%# "

# .cppをShellScriptで実行
function with_echo(){
  echo ">>> $@"
  $@
}
function cpp_compile(){
  with_echo g++ $1 -o $2
}
function cpp_execute(){
  with_echo ./$@
}
function cpp_remove(){
  with_echo rm $1
}
function cpp_run(){
  cpp_file=$1
  exe_file=${cpp_file%.*}
  cpp_compile $cpp_file $exe_file && shift && cpp_execute $exe_file $@ && cpp_remove $exe_file
}
alias -s cpp=cpp_run

# .cppをShellScriptで実行
function cs_compile(){
  with_echo mcs $1
}
function cs_execute(){
  with_echo mono $@
}
function cs_remove(){
  with_echo rm $1
}
function cs_run(){
  cs_file=$1
  exe_file=${cs_file%.*}.exe
  cs_compile $cs_file && shift && cs_execute $exe_file $@ && cs_remove $exe_file
}
alias -s cs=cs_run

