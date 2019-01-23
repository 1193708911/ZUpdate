package supersports.com.zupdate;

import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import java.io.File;
import java.io.IOException;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = findViewById(R.id.sample_text);

        final String old = Environment.getExternalStorageDirectory().getAbsolutePath() + "/old.apk";
        final String newpath = Environment.getExternalStorageDirectory().getAbsolutePath() + "/new.apk";
        final String patchPath = Environment.getExternalStorageDirectory().getAbsolutePath() + "/patch.patch";

//        new Thread(new Runnable() {
//            @Override
//            public void run() {
////                stringFromJNI(old, newpath, patchPath);
//                patchApk(old, new File(Environment.getExternalStorageDirectory(), "bb.apk").getAbsolutePath(), patchPath);
//            }
//        }).start();


    }


    public native int stringFromJNI(String old, String newpath, String patch);

    public native int patchApk(String old, String newpath, String patch);

}
