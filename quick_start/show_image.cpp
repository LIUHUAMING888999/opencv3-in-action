#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;//����cv�����ռ�
int main()
{

    Mat img = imread("C:\\test.png");//imread()��������ͼ��
    //���ļ��ж���ͼ��ע��ͼ��·����ò�Ҫ�����·������ΪCLion���ɵ�exe���ڵ�ǰĿ¼�¡�
    if(img.empty())
    {
        fprintf(stderr, "Can not load image\n");//�������ͼ��ʧ�ܣ����ش�����Ϣ
        return -1;
    }
    //��ʾͼ��
    imshow("image", img);//imshow()������ʾͼ��
    waitKey();//�˺����ȴ�������������������ͷ���
    return 0;
}