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
    imshow("origin image and rotate operation", src_img);//imshow()������ʾͼ��
    Mat des_img;
    flip(src_img,des_img,1);//1����ˮƽ������ת180��
    //flip(src_img,des_img,0);//0����ֱ������ת180��
    //flip(src_img,des_img,-1);//-1����ֱ��ˮƽ����ͬʱ��ת
    imshow(" after rotate operation", des_img);//imshow()������ʾͼ��
    waitKey();


    return 0;
}

