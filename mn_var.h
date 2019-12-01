float * stat(int n,float a[n]){
float static ans[2],s;
int i;
s=0;
for(i=0;i<n;i++){
s+=a[i];
}
ans[0]=s/n;
s=0;
for(i=0;i<n;i++){
s+=pow(a[i]-ans[0],2);
}
ans[1]=s/(n-1);
return ans;
}
