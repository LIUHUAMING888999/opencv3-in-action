#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;//����cv�����ռ�


int main()
{
    Mat src_img = imread("D:\\1.png");//imread()��������ͼ��
    //���ļ��ж���ͼ��ע��ͼ��·����ò�Ҫ�����·������ΪCLion���ɵ�exe���ڵ�ǰĿ¼�¡�
    if(src_img.empty())
    {
        fprintf(stderr, "Can not load image\n");//�������ͼ��ʧ�ܣ����ش�����Ϣ
        return -1;
    }
    //��ʾͼ��
    imshow("origin image and dilate operation", src_img);//imshow()������ʾͼ��
    Mat ele,des_img;
    ele = getStructuringElement(MORPH_RECT,Size(2,2));
    dilate(src_img,des_img,ele);
    imshow(" after dilate operation", des_img);//imshow()������ʾͼ��
    waitKey();


    return 0;
}

