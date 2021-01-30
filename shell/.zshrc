alias st='git status'
alias ad='git add .'
alias cm='git commit -m'
alias psh='git push origin HEAD'
alias ni='touch'

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
ARCH=`uname -m`
PROMPT="
%*[%{${fg[cyan]}%}%~%{${reset_color}%}]
[%{${fg[cyan]}%}${ARCH}%{${reset_color}%}]%# "
###

# https://zenn.dev/ress/articles/069baf1c305523dfca3d
typeset -U path PATH
path=(
	/opt/homebrew/bin(N-/)
	/usr/local/bin(N-/)
	$path
)

if [[ "${(L)$( uname -s )}" == darwin ]] && (( $+commands[arch] )); then
	alias brew="arch -arch x86_64 /usr/local/bin/brew"
	#compdef brew="arch -arch x86_64 /usr/local/bin/brew"
	alias x64='exec arch -arch x86_64 "$SHELL"'
	alias a64='exec arch -arch arm64e "$SHELL"'
	switch-arch() {
		if  [[ "$(uname -m)" == arm64 ]]; then
			arch=x86_64
		elif [[ "$(uname -m)" == x86_64 ]]; then
			arch=arm64e
		fi
		exec arch -arch $arch "$SHELL"
	}
fi

setopt magic_equal_subst
###

# aliasでも補完できる
setopt complete_aliases

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
###

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
###

# =brew installしたpythonへのalias
alias py='python3.9'

