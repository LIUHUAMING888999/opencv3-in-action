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
    imshow("origin image and edge check operation", src_img);//imshow()������ʾͼ��
    Mat edge,grayImage;
    cvtColor(src_img,grayImage,CV_BGR2GRAY);//ԭͼ��Ϊ�Ҷ�ͼ
    blur(grayImage,edge,Size(3,3));//ʹ��3*3�ں�������
    Canny(edge,edge,3,9,3);//ʹ��Canny����
    imshow("origin image and after edge check operation", edge);//imshow()������ʾͼ��
    waitKey();//�˺����ȴ�������������������ͷ���
    return 0;
}