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
    imshow("origin image and erode operation", src_img);//imshow()������ʾͼ��
    Mat ele = getStructuringElement(MORPH_RECT,Size(15,15));//getStructuringElement����ֵ�����ں˾���
    Mat des_img;
    erode(src_img,des_img,ele);//erode����ֱ�ӽ��и�ʴ����
    imshow("after erode operation",des_img);
    waitKey();//�˺����ȴ�������������������ͷ���
    return 0;
}