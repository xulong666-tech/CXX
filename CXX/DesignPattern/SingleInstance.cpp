#include<iostream>
//����ģʽ
class SingleInstance {

private:
  static SingleInstance* m_singleinstance;// Ψһ��ʵ������ָ��
  SingleInstance() {};
  ~SingleInstance() {};
  // ���俽������͸�ֵ�����Ϊ˽�к���, ��ֹ�ⲿ�����͸�ֵ
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
