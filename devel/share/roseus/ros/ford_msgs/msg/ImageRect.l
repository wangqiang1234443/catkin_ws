;; Auto-generated. Do not edit!


(when (boundp 'ford_msgs::ImageRect)
  (if (not (find-package "FORD_MSGS"))
    (make-package "FORD_MSGS"))
  (shadow 'ImageRect (find-package "FORD_MSGS")))
(unless (find-package "FORD_MSGS::IMAGERECT")
  (make-package "FORD_MSGS::IMAGERECT"))

(in-package "ROS")
;;//! \htmlinclude ImageRect.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ford_msgs::ImageRect
  :super ros::object
  :slots (_x _y _height _width _score _class_string _class_id _average ))

(defmethod ford_msgs::ImageRect
  (:init
   (&key
    ((:x __x) 0)
    ((:y __y) 0)
    ((:height __height) 0)
    ((:width __width) 0)
    ((:score __score) 0.0)
    ((:class_string __class_string) "")
    ((:class_id __class_id) 0)
    ((:average __average) (instance std_msgs::ColorRGBA :init))
    )
   (send-super :init)
   (setq _x (round __x))
   (setq _y (round __y))
   (setq _height (round __height))
   (setq _width (round __width))
   (setq _score (float __score))
   (setq _class_string (string __class_string))
   (setq _class_id (round __class_id))
   (setq _average __average)
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:score
   (&optional __score)
   (if __score (setq _score __score)) _score)
  (:class_string
   (&optional __class_string)
   (if __class_string (setq _class_string __class_string)) _class_string)
  (:class_id
   (&optional __class_id)
   (if __class_id (setq _class_id __class_id)) _class_id)
  (:average
   (&rest __average)
   (if (keywordp (car __average))
       (send* _average __average)
     (progn
       (if __average (setq _average (car __average)))
       _average)))
  (:serialization-length
   ()
   (+
    ;; int32 _x
    4
    ;; int32 _y
    4
    ;; int32 _height
    4
    ;; int32 _width
    4
    ;; float32 _score
    4
    ;; string _class_string
    4 (length _class_string)
    ;; int32 _class_id
    4
    ;; std_msgs/ColorRGBA _average
    (send _average :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _x
       (write-long _x s)
     ;; int32 _y
       (write-long _y s)
     ;; int32 _height
       (write-long _height s)
     ;; int32 _width
       (write-long _width s)
     ;; float32 _score
       (sys::poke _score (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; string _class_string
       (write-long (length _class_string) s) (princ _class_string s)
     ;; int32 _class_id
       (write-long _class_id s)
     ;; std_msgs/ColorRGBA _average
       (send _average :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _x
     (setq _x (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _y
     (setq _y (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _height
     (setq _height (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _width
     (setq _width (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _score
     (setq _score (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; string _class_string
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _class_string (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _class_id
     (setq _class_id (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; std_msgs/ColorRGBA _average
     (send _average :deserialize buf ptr-) (incf ptr- (send _average :serialization-length))
   ;;
   self)
  )

(setf (get ford_msgs::ImageRect :md5sum-) "7929620497f7b77b0596a67f73028561")
(setf (get ford_msgs::ImageRect :datatype-) "ford_msgs/ImageRect")
(setf (get ford_msgs::ImageRect :definition-)
      "int32 x
int32 y
int32 height
int32 width
float32 score
string class_string
int32 class_id
std_msgs/ColorRGBA average
================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

")



(provide :ford_msgs/ImageRect "7929620497f7b77b0596a67f73028561")


