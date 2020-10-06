# alias
alias st="git status"
alias ad="git add ."
alias cm="git commit -m"
alias lg="git log"
alias psh="git push origin HEAD"

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

# .csをShellScriptで実行
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

# .rsをShellScriptで実行
function rs_compile(){
  with_echo rustc $1
}
function rs_execute(){
  with_echo ./$@
}
function rs_remove(){
  with_echo rm $1
}
function rs_run(){
  rs_file=$1
  exe_file=${rs_file%.*}
  rs_compile $rs_file && shift && rs_execute $exe_file $@ && rs_remove $exe_file
}
alias -s rs=rs_run

# >>> conda initialize >>>
# !! Contents within this block are managed by 'conda init' !!
__conda_setup="$('/opt/anaconda3/bin/conda' 'shell.zsh' 'hook' 2> /dev/null)"
if [ $? -eq 0 ]; then
    eval "$__conda_setup"
else
    if [ -f "/opt/anaconda3/etc/profile.d/conda.sh" ]; then
        . "/opt/anaconda3/etc/profile.d/conda.sh"
    else
        export PATH="/opt/anaconda3/bin:$PATH"
    fi
fi
unset __conda_setup
# <<< conda initialize <<<

# system-wide environment settings for zsh(1)
if [ -x /usr/libexec/path_helper ]; then
    eval `/usr/libexec/path_helper -s`
fi

