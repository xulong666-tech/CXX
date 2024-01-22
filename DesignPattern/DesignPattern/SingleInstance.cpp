#include<iostream>
//懒汉模式
class SingleInstance {

private:
  static SingleInstance* m_singleinstance;// 唯一单实例对象指针
  SingleInstance() {};
  ~SingleInstance() {};
  // 将其拷贝构造和赋值构造成为私有函数, 禁止外部拷贝和赋值
  SingleInstance(const SingleInstance& s);
  const SingleInstance& operator=(const SingleInstance& s);
public:
  static SingleInstance* getInstance() {

    if (m_singleinstance == nullptr)
    {
      m_singleinstance = new SingleInstance();
    }
    return m_singleinstance;
  }

  void printfun()
  {
    std::cout << "Single instance printfun run" << std::endl;
  }
};
SingleInstance* SingleInstance::m_singleinstance = new SingleInstance();
int main() {

  SingleInstance::getInstance()->printfun();
  std::cout <<"xulong666" <<std::endl;
 
  return 0;
}
