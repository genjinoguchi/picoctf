#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv){
  char p[2048]="FE642F5F6E1F5D7EE02B335E7459027AE53E3E142A4E092FE23C6F182C1C042CBF3A681B774F5228BF69691E7E410129B56A3F197C483B15C8657A1C79597C7EF568320D7F40062AAB2B2E452B59416DE87B355E2B1D115BC2587A5A2F0A116FF26936443D11547BA762340D3A11543FC16E3E483C185D3FD56E3D443D0D546DA92B0A582C15587CA7683540231C5F6BF42B2D483C1C116DE27A2F483D0D547BAB2B3B432A595871A77F32486E1F5E73EB642D44201E1166E26A280D3A0E5E3FE87B3F436E0E5E6DEC7832423E0A1168E2793F0D261C5D7BA77F350D2A10427CF278290D3A11543FF779355D210A547BA7782E4C201D506DE3257A79261C437AA77C3B5E6E0A5E72E22B395F270D587CEE78370D280B5E72A77D3B5F2716446CA77B3B5F3A10546CAB2B33432D15447BEE653D0D280B5E72A77B2F4F22105232EC6E230D2D0B486FF3643D5F2F095966A77B3342201C546DF42B174C3C0D5871A7433F4122145071A76A34496E2E5976F36D3348221D115BEE6D3C442B55117CEE7F33432959503FF463355F3A1C5F7AE32B314837595D7AE96C2E456E185F7BA77F32486E14486CF36E2844210C423FA558774F2101546CA52B3B5E6E1C4776E36E344E2B595E79A762375D3C16417AF52B33433A1C4379E2793F432D1C1179F564370D3A11543FC9581B036E2D597AA7782F5E3E105276E8657A5A2F0A116BEF6A2E0D3A11543FE6673D423C104577EA2B324C2A59537AE2657A4E210F546DF367230D391C5074E2653F496E1B483FF3633F0D2717457AEB67334A2B17527AA76A3D48201A483FF4647A592618453FF3633F546E54117DF27F7A4321545E71E22B3F413D1C1132A7683558221D117AE67833413759437AE66F7A48201A4366F77F3F496E14546CF46A3D483D57115EEB6A340D05165F77E262370D66165F7AA7643C0D3A11543FE36E29442917546DF42B354B6E3D744CAE2B394223145471F36E3E016E5B667AA7783F433A594577E22B09002C16497AF42B354B28594570A75C3B5E26105F78F36434036E2D597AFE2B394C231C117DE668310D2F17553FF06E28486E185D73A76F334B281C437AE97F740F6E2D597AA75E34443A1C553FD47F3B592B0A114CE2653B592B59627AEB6E39596E3A5E72EA622E592B1C1170E92B13433A1C5D73EE6C3F432D1C116DE27D3348391C553FF3633F0D002A7038F42B3B4E3A105E71F42B2E426E1D546BE2793744201C1168EF6E2E452B0B116BEF6E28486E11507BA7693F4820595071FE2B33403E0B5E6FE2797A44200F5E73F16E3748200D1F3FCE657A59261C116AE968364C3D0A5879EE6E3E0D3D0C5C72E679230D211F116BEF6E335F6E1F5871E362344A3D55116FF26936443D11547BA76234";

  
  int x=0;
  int input;
  scanf("%d",&input);
  while(p[x]){
    p[x]^=input;
    x++;
  }
  printf("%s\n",p);
  return 0;

}
