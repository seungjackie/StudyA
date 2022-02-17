import express from 'express';
import helmet from 'helmet';
import cors from 'cors';
import bcrypt from 'bcrypt';

const app = express();
app.use(helmet());
app.use(cors());
app.use(express.json());
app.use(express.urlencoded({extended:false}));

const users = [];

//회원가입
app.post('/join',async (req,res)=>{
    const {id, password, url} = req.body;
    const user = users.find(u=>u.id === id);
    if(!user) {
        const hashed = await bcrypt.hash(password,10);
        users.push({id,password:hashed,url});
        return res.status(200).json({
            msg : '회원가입 성공!',
            user : {
                id,hashed,url
            }
        });
    }else {
        return res.status(400).json({msg : '이미 같은 아이디가 존재합니다'});
    }
});


//로그인
app.post('/login',async(req,res)=>{
    const {id, password} = req.body;
    const user = users.find(u=>u.id === id);
    if(!user) {
        return res.status(400).json('아이디 없음');
    } else {
        const isEqualPw = await bcrypt.compare(password,user.password);
        console.log(isEqualPw);
        if(isEqualPw) 
            return res.status(200).json({msg : "로그인 성공!",user});
        else 
            return res.status(404).json({msg : "로그인 실패"});
    }
});

app.listen(8080,()=>console.log('http://localhost:8080'));