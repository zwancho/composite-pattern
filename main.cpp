#include <iostream>
#include <memory>

#include "Button.h"
#include "Label.h"
#include "LinkLabel.h"
#include "TextBox.h"
#include "PasswordBox.h"
#include "CheckBox.h"
#include "Picture.h"
#include "WinForm.h"
#include "Frame.h"

using namespace std;
using namespace CompositePattern;

int main(int argc, char **argv)
{
  shared_ptr<WinForm> client = make_shared<WinForm>("WINDOW窗口");

  client->add(make_shared<Picture>("LOGO图片"));
  client->add(make_shared<Button>("登录"));
  client->add(make_shared<Button>("注册"));

  shared_ptr<Frame> frame = make_shared<Frame>("FRAME1");
  frame->add(make_shared<Label>("用户名"));
  frame->add(make_shared<TextBox>("文本框"));
  frame->add(make_shared<Label>("密码"));
  frame->add(make_shared<PasswordBox>("密码框"));
  frame->add(make_shared<CheckBox>("复选框"));
  frame->add(make_shared<TextBox>("记住用户名"));
  frame->add(make_shared<LinkLabel>("忘记密码"));

  client->add(frame);

  client->print();

  return 0;
}