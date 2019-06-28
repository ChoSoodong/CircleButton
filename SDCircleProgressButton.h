






#import <UIKit/UIKit.h>

typedef void(^CompletionBlock)(void);


@interface SDCircleProgressButton : UIButton

//轨道颜色
@property (nonatomic,strong)UIColor    *trackColor;

//进度条颜色
@property (nonatomic,strong)UIColor    *progressColor;

//背景色
@property (nonatomic,strong)UIColor    *fillColor;

//进度条宽度
@property (nonatomic,assign)CGFloat    lineWidth;

//倒计时时长
@property (nonatomic,assign)CGFloat    animationDuration;


/**
 开始倒计时

 @param duration 时长
 @param block 完成回调
 */
- (void)startAnimationDuration:(CGFloat)duration withBlock:(CompletionBlock)block;

@end
