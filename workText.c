1 //���ڴ�ӡ��ص�: driver_l1_cfg.h
	//#define UART0_TX_IOB5__RX_IOB4						0x00000001
	//#define UART0_TX_IOC12__RX_IOC13					0x00000002
	//#define UART0_TX_IOD5__RX_IOD4						0x00000003
	//#define UART1_TX_IOB7__RX_IOB6						0x00000004
	//#define UART1_TX_IOC15__RX_IOC14					0x00000005
	//#define UART1_TX_IOD9__RX_IOD8						0x00000006
	//#define UART1_TX_IOD15__RX_IOD14					0x00000007
	//#define UART_TX_NONE__RX_NONE						0x00000000
	
	//#if DBG_MESSAGE == CUSTOM_ON
	//#if 1//(GPDV_BOARD_VERSION == DVP_V1_0)  // EVB
	//#if PCB_TYPE                  ==         TYPE_1248

	//#define UART_TX_RX_POS			   UART1_TX_IOB7__RX_IOB6// UART1_TX_IOD9__RX_IOD8
	//#else

	//#define UART_TX_RX_POS			   UART1_TX_IOC15__RX_IOC14//UART1_TX_IOC15__RX_IOC14//UART1_TX_IOB7__RX_IOB6 
	//#endif
	//#else
	//#define UART_TX_RX_POS              UART_TX_NONE__RX_NONE
	//#endif
2 //�򿪴��ڵ���: customer.h
	//#define CUSTOM_ON       1
	//#define CUSTOM_OFF      0

	//#define DBG_MESSAGE						CUSTOM_ON//CUSTOM_OFF 	// UART debug message
3 //��¼����: writer��D:\TOOL��
4 //������Tool�����ã�
	//����ComBin.exe�� F:\work\study\v001\programe\Tools\GPCV1248_SPIFC_Pack_\GPCV1248_SDRAM_Header_144M.bin������144��ȷ��,
	//{(CUSTOMER.H)
		// CPU and system clock
	//	#define INIT_MHZ                    	144//115//144     // MHz
	//}
5 //���Գ����:
	//#if 0
	//#undef __here__
	//#undef __msg
	//#define __here__            eLIBs_printf("@L%d(%s)\n", __LINE__, __FILE__);
	//#define __msg(...)    		(eLIBs_printf("MSG:L%d(%s):", __LINE__, __FILE__),                 \
							     eLIBs_printf(__VA_ARGS__)									        )
	//#define DebugPrintf(...)    		(eLIBs_printf("MSG:L%d(%s):", __LINE__, __FILE__),                 \
	//						     eLIBs_printf(__VA_ARGS__)									        )
	//#else
		//#define DebugPrintf(...)
	//#endif
	
6 //LED�ƵĿ��ƣ�����ԭ��ͼ�����ĸ�io�ڿ��ƣ�Ȼ���io���ó���Ӧ�ĵ�ƽֵ: (ap_peripheral_handling.c)
	//case LED_INIT:

    //    led_green_on();
		/* add begin by Zhibo, 2017-04-27 */
		//led_red_on();
		/* add end by Zhibo, 2017-04-27 */
//        DBG_PRINT("led_type = LED_INIT\r\n");
      //  __msg("led_type = LED_INIT\r\n");
    //    break;
	//(customer.h)
	//#define LED1							IO_E3
	//#define LED2							IO_E2
	
7 //    OSTaskCreate(state_handling_entry, (void *) 0, &StateHandlingStack[STATE_HANDLING_STACK_SIZE - 1], STATE_HANDLING_PRIORITY);
	//ϵͳ�ĳ�ʼ��

8 //sd������usb�� void state_video_record_entry(void *para, INT32U state)�У������ж���û��sd����usb��û�е�ʱ��
	//��MSG_PERIPHERAL_TASK_LED_SET�����з�����Ϣ�������������б������ӵ��Ի�������usb����sd��
	//ap_state_handling_connect_to_pc(STATE_VIDEO_RECORD);����״̬
	
9. //�е��û��usb����ʱ�������Զ��ػ���msgQSend(ApQ, MSG_APQ_POWER_KEY_ACTIVE, NULL, NULL, MSG_PRI_NORMAL);
	//
	//if(shutoff_cnt){
      //          shutoff_cnt--;
     //           if(usb_state_get() != 0)
      //          {
                    //led_green_off();
     //               shutoff_cnt = 0;
     //               DBG_PRINT("fankun5:%d\r\n", usb_state_get());
      //          }
     //           if(!shutoff_cnt)
      //          {
       //             if(usb_state_get() == 0)
      //              {
      //                  DBG_PRINT("fankun1:%d\r\n", usb_state_get());
      //                  msgQSend(ApQ, MSG_APQ_POWER_KEY_ACTIVE, NULL, NULL, MSG_PRI_NORMAL);
      //              }
      //          }
     //           else
      //          {
      //              if(shutoff_cnt % 20 == 0)
     //               {
      //                  if(t_flash_flag == 0)
      //                  {
     //                       t_flash_flag = 1;
		//					moto_vibration_on(20);
       //                     led_green_on();
       //                     led_red_on();
      //                  }
      //                  else
                        //{
                            //led_red_off();
                           // led_green_off();
                            //t_flash_flag = 0;
                       // }
                   // }
              //  }

           // }
			//--->case MSG_APQ_POWER_KEY_ACTIVE:
          //  if ((ap_video_record_sts_get() & VIDEO_RECORD_BUSY))
          //  {

             //   if(ap_video_record_func_key_active(msg_id))
             //   {
             //       break;
              //  }
            //}
            //	DBG_PRINT("dfdfffdf\r\n");
            //msgQSend(PeripheralTaskQ, MSG_PERIPHERAL_TASK_ZD, &type, sizeof(INT8U), MSG_PRI_NORMAL);
            //OSTimeDly(5);
            //video_encode_exit();
            //video_calculate_left_recording_time_disable();
            //ap_state_handling_power_off();
            //break;
			//--->
10. //��������ͷ״̬,msgQSend(ApQ, MSG_APQ_VIDEO_RECORD_ACTIVE, NULL, NULL, MSG_PRI_NORMAL);
	
11. //����ѭ������� ap_state_config_record_time_set(void);  ��:define C_CYCLIC_VIDEO_RECORD on/off
	
12. //��ʽ��TF�����msgQSend(StorageServiceQ, MSG_STORAGE_SERVICE_FORMAT_REQ, NULL, NULL, MSG_PRI_NORMAL);

13. //�ƶ���⣺ msgQSend(ApQ, MSG_APQ_MOTION_DETECT_ACTIVE, NULL, NULL, MSG_PRI_NORMAL);
	//ap_state_config_md_set(status);status Ҫ����Ϊ1����Ȼֹͣ��ʱ�򣬻�����⡣
	
14. //chdir(const char *path);���ĵ�ǰ����Ŀ¼��Path Ŀ��Ŀ¼�������Ǿ���Ŀ¼�����Ŀ¼���ɹ�����0 ��ʧ�ܷ���-1
	
15. // int unlink(const char* pathname);unlink���ļ�ϵͳ����ɾ��һ�����֣������������ָ������ļ������һ�����ӣ�
	//����û�н��̴��ڴ�����ļ���״̬����ɾ������ļ����ͷ�����ļ�ռ�õĿռ䡣
	//������������ָ������ļ������һ�����ӣ�����ĳ�����̴��ڴ�����ļ���״̬������ʱ��ɾ������ļ���Ҫ�ȵ���
	//����ļ��Ľ��̹ر�����ļ����ļ����������ɾ������ļ���
    //����������ָ��һ���������ӣ���ɾ������������ӡ�
    //����������ָ��һ��socket��fifo����һ���豸�������socket��fifo���豸�����ֱ�ɾ������ʱ����Щsocke��fifo��
	//�豸�Ľ�����Ȼ����ʹ�����ǡ�
	//����ֵ�����óɹ�����0�����ɹ�����-1.
	
16. //setfattr: The setfattr command associates a new value with an extended attribute name for each specified file.
	
17. // OS_EVENT     *OSQCreate(void **start, INT16U size);		����OSQcreate()����������Ϣ���У�
	
18. /*sprintf()�������ڽ���ʽ��������д���ַ�������ԭ��Ϊ��
	  int sprintf(char *str, char * format [, argument, ...]);	
	  ��������strΪҪд����ַ�����formatΪ��ʽ���ַ�������printf()������ͬ��argumentΪ������
	   sprintf�������ǽ�һ����ʽ�����ַ��������һ��Ŀ���ַ����У���printf�ǽ�һ����ʽ������
	   �����������Ļ��sprintf�ĵ�һ������Ӧ����Ŀ���ַ�����
	   �����ָ�����������ִ�й����г��� "�ó�������Ƿ�����,�������ر�...."����ʾ.
		sprintf()����ݲ���format �ַ�����ת������ʽ�����ݣ�Ȼ�󽫽�����Ƶ�����str ��ָ���ַ������飬
		ֱ�������ַ�������('\0')Ϊֹ�����ڲ���format �ַ����ĸ�ʽ��ο�printf()��
	
	*/
   
19. /*
		(__asm)�ؼ�������������ಢ����д���κ�C++�Ϸ����֮���������ܵ������֣�����ӻ��ָ�
		һ�鱻�����Ű�����ָ���һ�Կ����š�����"__asm��"������������һ��ָ���һ��ָ�������Ƿ��������ڡ�
	*/
	
20. //MSG_STORAGE_SERVICE_MOUNT:����п����͵�״̬.

21. //#define SD_POS   SDC_IOC4_IOC5_IOC6_IOC7_IOC8_IOC9 //sd��

22. //¼���Զ����棺 time_interval = 3 * VIDEO_RECORD_CYCLE_TIME_INTERVAL + 112;

23. //stat��������
	//��ͷ�ļ�:    
	//		#include <sys/stat.h>
    //        #include <unistd.h>
	//���庯��:    
	//int stat(const char *file_name, struct stat *buf);
	//����˵��:    ͨ���ļ���filename��ȡ�ļ���Ϣ����������buf��ָ�Ľṹ��stat��
	//����ֵ:      ִ�гɹ��򷵻�0��ʧ�ܷ���-1������������errno
	
24. //void FS_OS_GetTime(dostime_t *dt);			//��������¼����ʾʱ�����
	//void FS_OS_GetDate(dosdate_t *dd);			//��������¼����ʾʱ�����
	
25. //APQ��Ϣ��ֻ����Ӧ��ֱ���໥���ݡ�	
	
26. //��ʱ�����У�������̧�������ܱ����ˣ�û�м�ʱ��������Ӷ�Ӱ����������Բ�����ʱ����������
	
27. //void ap_video_record_md_tick(INT8U *md_tick, INT32U state), �ƶ���⵽һ��ʱ���ֹͣ��⣬�����档
	
28. //ap_state_config_pic_size_set(8);����ͼ���С���磺1280x720��

29. //ap_state_config_video_resolution_set(2);������Ƶ��С���磺720P

30. //ѭ��¼��sys_set_timer((void *)msgQSend, (void *)ApQ, MSG_APQ_CYCLIC_VIDEO_RECORD, \
	//cyclic_record_timerid, time_interval);����ѭ��¼��ʱ������������󣬽���ѭ��¼��
	
31. //state_handling_init(void)������APQ��Ϣ���У����е�Ӧ����Ϣ����APQ�н�����Ϣ��Ӧ��֮����л�����Ĵ��ھ���
	//state_handling_entry(void *para);�൱��һ����Ӧ�ù����ڡ�
    
32. //ap_peripheral_charge_det();����⣬���ú���Ӧ��IO�ڣ��磺#define CHARGE_PIN	 IO_D13//IO_C14

33. //ap_state_handling_connect_to_pc(INT32U prev_state),key_down = gpio_read_io(SWITCH_MODE_KEY);
	//���������PC����pc_camģʽ����usbģʽ��
	
33. //NVIC:Ƕ���ж�������������
	
33. //���庯����off_t lseek(int fildes, off_t offset, int whence);
	//ÿһ���Ѵ򿪵��ļ�����һ����дλ��, �����ļ�ʱͨ�����дλ����ָ���ļ���ͷ, �����Ը��ӵķ�ʽ���ļ�(��O_APPEND),
	//���дλ�û�ָ���ļ�β. ��read()��write()ʱ, ��дλ�û���֮����,lseek()�����������Ƹ��ļ��Ķ�дλ��. 
	//����fildes Ϊ�Ѵ򿪵��ļ�������, ����offset Ϊ���ݲ���whence���ƶ���дλ�õ�λ����.
	
	//���� whence Ϊ��������һ��:
    //SEEK_SET ����offset ��Ϊ�µĶ�дλ��.
    //SEEK_CUR ��Ŀǰ�Ķ�дλ����������offset ��λ����.
    //SEEK_END ����дλ��ָ���ļ�β��������offset ��λ����. ��whence ֵΪSEEK_CUR ��
    //SEEK_END ʱ, ����offet ����ֵ�ĳ���.
	
	//�����ǽ��ر��ʹ�÷�ʽ:
	//1) ������дλ���Ƶ��ļ���ͷʱ:lseek(int fildes, 0, SEEK_SET);
	//2) ������дλ���Ƶ��ļ�βʱ:lseek(int fildes, 0, SEEK_END);
	//3) ��Ҫȡ��Ŀǰ�ļ�λ��ʱ:lseek(int fildes, 0, SEEK_CUR);
	
34. //���庯��:    int stat(const char *file_name, struct stat *buf); ͨ���ļ���filename��ȡ�ļ���Ϣ����������buf��ָ�Ľṹ��stat��
	//����ֵ:      ִ�гɹ��򷵻�0��ʧ�ܷ���-1������������errno.
	//ENOENT         ����file_nameָ�����ļ�������
    //ENOTDIR        ·���е�Ŀ¼���ڵ�ȴ��������Ŀ¼
    //ELOOP          ���򿪵��ļ��й�������������⣬����Ϊ16��������
    //EFAULT         ����bufΪ��Чָ�룬ָ���޷����ڵ��ڴ�ռ�
    //EACCESS        ��ȡ�ļ�ʱ���ܾ�
    //ENOMEM         �����ڴ治��
    //ENAMETOOLONG   ����file_name��·������̫��
	
35. //task_state_handling.c��,state_handling_entry(void)�����Ÿ���Ӧ�õ��л����񣬱���: preview, record, 
	//audio, browse, setting and so on.
	//ÿ��Ӧ�õ��л�����Ҫ����������ܽ�����Ӧ��Ӧ�ô����Ӧ���¼���

36. //����logo, state_startup_init(void), ��C_LOGO������Ĳ���.

37. //tft_init();����ʼ����ص����ݣ�����Ŀ�漰�Ĳ���ʱ��Ҫ��������á�

38. //MAJOR(dev_t dev), MINOR(dev_t dev), MKDEV(int major, int minor);
	
39. //avi_audio_record_entry: gp_memset((INT8S *)(audio_frame[write_audio_idx].buffer_addrs + 8), 0, (AVI_AUDIO_PCM_SAMPLES << 1));
	//¼��������صġ�
	
40. //void FS_OS_GetDate(dosdate_t *dd),void FS_OS_GetTime(dostime_t *dt)��ʾ�ļ�ʱ�����ڡ�
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	