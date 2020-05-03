import numpy as np


class Variable:
    """
    ・Variableインスタンスの実際のデータは、インスタンス変数のdataに存在
    """

    def __init__(self, data):
        self.data = data


class Function:
    """
    ・inputにはVariableインスタンスが与えられることを想定\n
    ・インスタンス生成では__init__メソッドしか呼び出されないが、\n
    一度生成したインスタンスに引数を与えて呼び出せば__call__メソッドが呼び出される\n
    ・抽象メソッド(≒ skelton?)forwardを持つ抽象クラス
    """

    def __call__(self, input):
        x = input.data
        y = self.forward(x)
        output = Variable(y)
        return output

    def forward(self, x):
        raise NotImplementedError()


class Square(Function):
    """
    ・基底クラスFunctionから抽象メソッドforwardをオーバーライド
    """

    def forward(self, x):
        return x ** 2


x = Variable(np.array(10))  # Variableインスタンスxを生成
f = Square()                # Square(Function)インスタンスfを生成
y = f(x)                    # インスタンスfに引数xを与えて__call__メソッドを呼び出す
print(type(y))
print(y.data)
