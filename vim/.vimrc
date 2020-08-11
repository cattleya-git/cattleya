" vim color
syntax on
colorscheme iceberg

" line number
set number

" bracket(0.3s)
set showmatch matchtime=3

" 現在の行を強調
set cursorline

" 行末一文字先までカーソル移動
set virtualedit=onemore

" マウスポインタ
set mouse=a

" ノーマルモードでの；→：
nnoremap ; :

" タイトル表示
set title

" 行を跨いで移動
set whichwrap=b,s,h,l,<,>,[,],~

" ３行余裕を持たせスクロール
set scrolloff=3

" ビープ音消去
set vb t_vb=
