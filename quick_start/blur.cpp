#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;//����cv�����ռ�
int main()
{

    Mat src_img = imread("C:\\test.png");//imread()��������ͼ��
    //���ļ��ж���ͼ��ע��ͼ��·����ò�Ҫ�����·������ΪCLion���ɵ�exe���ڵ�ǰĿ¼�¡�
    if(src_img.empty())
    {
        fprintf(stderr, "Can not load image\n");//�������ͼ��ʧ�ܣ����ش�����Ϣ
        return -1;
    }
    //��ʾͼ��
    imshow("origin image and blur operation", src_img);//imshow()������ʾͼ��
    Mat des_img;
    blur(src_img,des_img,Size(7,7));//blur����ֱ�ӽ���ģ��������
    imshow("after blur operation",des_img);
    waitKey();//�˺����ȴ�������������������ͷ���
    return 0;
}