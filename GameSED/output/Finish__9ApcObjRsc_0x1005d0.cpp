#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Finish__9ApcObjRsc
// Address: 0x1005d0 - 0x1009b8
void Finish__9ApcObjRsc_0x1005d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcObjRsc_0x1005d0");
#endif

    switch (ctx->pc) {
        case 0x1005d0u: goto label_1005d0;
        case 0x1005d4u: goto label_1005d4;
        case 0x1005d8u: goto label_1005d8;
        case 0x1005dcu: goto label_1005dc;
        case 0x1005e0u: goto label_1005e0;
        case 0x1005e4u: goto label_1005e4;
        case 0x1005e8u: goto label_1005e8;
        case 0x1005ecu: goto label_1005ec;
        case 0x1005f0u: goto label_1005f0;
        case 0x1005f4u: goto label_1005f4;
        case 0x1005f8u: goto label_1005f8;
        case 0x1005fcu: goto label_1005fc;
        case 0x100600u: goto label_100600;
        case 0x100604u: goto label_100604;
        case 0x100608u: goto label_100608;
        case 0x10060cu: goto label_10060c;
        case 0x100610u: goto label_100610;
        case 0x100614u: goto label_100614;
        case 0x100618u: goto label_100618;
        case 0x10061cu: goto label_10061c;
        case 0x100620u: goto label_100620;
        case 0x100624u: goto label_100624;
        case 0x100628u: goto label_100628;
        case 0x10062cu: goto label_10062c;
        case 0x100630u: goto label_100630;
        case 0x100634u: goto label_100634;
        case 0x100638u: goto label_100638;
        case 0x10063cu: goto label_10063c;
        case 0x100640u: goto label_100640;
        case 0x100644u: goto label_100644;
        case 0x100648u: goto label_100648;
        case 0x10064cu: goto label_10064c;
        case 0x100650u: goto label_100650;
        case 0x100654u: goto label_100654;
        case 0x100658u: goto label_100658;
        case 0x10065cu: goto label_10065c;
        case 0x100660u: goto label_100660;
        case 0x100664u: goto label_100664;
        case 0x100668u: goto label_100668;
        case 0x10066cu: goto label_10066c;
        case 0x100670u: goto label_100670;
        case 0x100674u: goto label_100674;
        case 0x100678u: goto label_100678;
        case 0x10067cu: goto label_10067c;
        case 0x100680u: goto label_100680;
        case 0x100684u: goto label_100684;
        case 0x100688u: goto label_100688;
        case 0x10068cu: goto label_10068c;
        case 0x100690u: goto label_100690;
        case 0x100694u: goto label_100694;
        case 0x100698u: goto label_100698;
        case 0x10069cu: goto label_10069c;
        case 0x1006a0u: goto label_1006a0;
        case 0x1006a4u: goto label_1006a4;
        case 0x1006a8u: goto label_1006a8;
        case 0x1006acu: goto label_1006ac;
        case 0x1006b0u: goto label_1006b0;
        case 0x1006b4u: goto label_1006b4;
        case 0x1006b8u: goto label_1006b8;
        case 0x1006bcu: goto label_1006bc;
        case 0x1006c0u: goto label_1006c0;
        case 0x1006c4u: goto label_1006c4;
        case 0x1006c8u: goto label_1006c8;
        case 0x1006ccu: goto label_1006cc;
        case 0x1006d0u: goto label_1006d0;
        case 0x1006d4u: goto label_1006d4;
        case 0x1006d8u: goto label_1006d8;
        case 0x1006dcu: goto label_1006dc;
        case 0x1006e0u: goto label_1006e0;
        case 0x1006e4u: goto label_1006e4;
        case 0x1006e8u: goto label_1006e8;
        case 0x1006ecu: goto label_1006ec;
        case 0x1006f0u: goto label_1006f0;
        case 0x1006f4u: goto label_1006f4;
        case 0x1006f8u: goto label_1006f8;
        case 0x1006fcu: goto label_1006fc;
        case 0x100700u: goto label_100700;
        case 0x100704u: goto label_100704;
        case 0x100708u: goto label_100708;
        case 0x10070cu: goto label_10070c;
        case 0x100710u: goto label_100710;
        case 0x100714u: goto label_100714;
        case 0x100718u: goto label_100718;
        case 0x10071cu: goto label_10071c;
        case 0x100720u: goto label_100720;
        case 0x100724u: goto label_100724;
        case 0x100728u: goto label_100728;
        case 0x10072cu: goto label_10072c;
        case 0x100730u: goto label_100730;
        case 0x100734u: goto label_100734;
        case 0x100738u: goto label_100738;
        case 0x10073cu: goto label_10073c;
        case 0x100740u: goto label_100740;
        case 0x100744u: goto label_100744;
        case 0x100748u: goto label_100748;
        case 0x10074cu: goto label_10074c;
        case 0x100750u: goto label_100750;
        case 0x100754u: goto label_100754;
        case 0x100758u: goto label_100758;
        case 0x10075cu: goto label_10075c;
        case 0x100760u: goto label_100760;
        case 0x100764u: goto label_100764;
        case 0x100768u: goto label_100768;
        case 0x10076cu: goto label_10076c;
        case 0x100770u: goto label_100770;
        case 0x100774u: goto label_100774;
        case 0x100778u: goto label_100778;
        case 0x10077cu: goto label_10077c;
        case 0x100780u: goto label_100780;
        case 0x100784u: goto label_100784;
        case 0x100788u: goto label_100788;
        case 0x10078cu: goto label_10078c;
        case 0x100790u: goto label_100790;
        case 0x100794u: goto label_100794;
        case 0x100798u: goto label_100798;
        case 0x10079cu: goto label_10079c;
        case 0x1007a0u: goto label_1007a0;
        case 0x1007a4u: goto label_1007a4;
        case 0x1007a8u: goto label_1007a8;
        case 0x1007acu: goto label_1007ac;
        case 0x1007b0u: goto label_1007b0;
        case 0x1007b4u: goto label_1007b4;
        case 0x1007b8u: goto label_1007b8;
        case 0x1007bcu: goto label_1007bc;
        case 0x1007c0u: goto label_1007c0;
        case 0x1007c4u: goto label_1007c4;
        case 0x1007c8u: goto label_1007c8;
        case 0x1007ccu: goto label_1007cc;
        case 0x1007d0u: goto label_1007d0;
        case 0x1007d4u: goto label_1007d4;
        case 0x1007d8u: goto label_1007d8;
        case 0x1007dcu: goto label_1007dc;
        case 0x1007e0u: goto label_1007e0;
        case 0x1007e4u: goto label_1007e4;
        case 0x1007e8u: goto label_1007e8;
        case 0x1007ecu: goto label_1007ec;
        case 0x1007f0u: goto label_1007f0;
        case 0x1007f4u: goto label_1007f4;
        case 0x1007f8u: goto label_1007f8;
        case 0x1007fcu: goto label_1007fc;
        case 0x100800u: goto label_100800;
        case 0x100804u: goto label_100804;
        case 0x100808u: goto label_100808;
        case 0x10080cu: goto label_10080c;
        case 0x100810u: goto label_100810;
        case 0x100814u: goto label_100814;
        case 0x100818u: goto label_100818;
        case 0x10081cu: goto label_10081c;
        case 0x100820u: goto label_100820;
        case 0x100824u: goto label_100824;
        case 0x100828u: goto label_100828;
        case 0x10082cu: goto label_10082c;
        case 0x100830u: goto label_100830;
        case 0x100834u: goto label_100834;
        case 0x100838u: goto label_100838;
        case 0x10083cu: goto label_10083c;
        case 0x100840u: goto label_100840;
        case 0x100844u: goto label_100844;
        case 0x100848u: goto label_100848;
        case 0x10084cu: goto label_10084c;
        case 0x100850u: goto label_100850;
        case 0x100854u: goto label_100854;
        case 0x100858u: goto label_100858;
        case 0x10085cu: goto label_10085c;
        case 0x100860u: goto label_100860;
        case 0x100864u: goto label_100864;
        case 0x100868u: goto label_100868;
        case 0x10086cu: goto label_10086c;
        case 0x100870u: goto label_100870;
        case 0x100874u: goto label_100874;
        case 0x100878u: goto label_100878;
        case 0x10087cu: goto label_10087c;
        case 0x100880u: goto label_100880;
        case 0x100884u: goto label_100884;
        case 0x100888u: goto label_100888;
        case 0x10088cu: goto label_10088c;
        case 0x100890u: goto label_100890;
        case 0x100894u: goto label_100894;
        case 0x100898u: goto label_100898;
        case 0x10089cu: goto label_10089c;
        case 0x1008a0u: goto label_1008a0;
        case 0x1008a4u: goto label_1008a4;
        case 0x1008a8u: goto label_1008a8;
        case 0x1008acu: goto label_1008ac;
        case 0x1008b0u: goto label_1008b0;
        case 0x1008b4u: goto label_1008b4;
        case 0x1008b8u: goto label_1008b8;
        case 0x1008bcu: goto label_1008bc;
        case 0x1008c0u: goto label_1008c0;
        case 0x1008c4u: goto label_1008c4;
        case 0x1008c8u: goto label_1008c8;
        case 0x1008ccu: goto label_1008cc;
        case 0x1008d0u: goto label_1008d0;
        case 0x1008d4u: goto label_1008d4;
        case 0x1008d8u: goto label_1008d8;
        case 0x1008dcu: goto label_1008dc;
        case 0x1008e0u: goto label_1008e0;
        case 0x1008e4u: goto label_1008e4;
        case 0x1008e8u: goto label_1008e8;
        case 0x1008ecu: goto label_1008ec;
        case 0x1008f0u: goto label_1008f0;
        case 0x1008f4u: goto label_1008f4;
        case 0x1008f8u: goto label_1008f8;
        case 0x1008fcu: goto label_1008fc;
        case 0x100900u: goto label_100900;
        case 0x100904u: goto label_100904;
        case 0x100908u: goto label_100908;
        case 0x10090cu: goto label_10090c;
        case 0x100910u: goto label_100910;
        case 0x100914u: goto label_100914;
        case 0x100918u: goto label_100918;
        case 0x10091cu: goto label_10091c;
        case 0x100920u: goto label_100920;
        case 0x100924u: goto label_100924;
        case 0x100928u: goto label_100928;
        case 0x10092cu: goto label_10092c;
        case 0x100930u: goto label_100930;
        case 0x100934u: goto label_100934;
        case 0x100938u: goto label_100938;
        case 0x10093cu: goto label_10093c;
        case 0x100940u: goto label_100940;
        case 0x100944u: goto label_100944;
        case 0x100948u: goto label_100948;
        case 0x10094cu: goto label_10094c;
        case 0x100950u: goto label_100950;
        case 0x100954u: goto label_100954;
        case 0x100958u: goto label_100958;
        case 0x10095cu: goto label_10095c;
        case 0x100960u: goto label_100960;
        case 0x100964u: goto label_100964;
        case 0x100968u: goto label_100968;
        case 0x10096cu: goto label_10096c;
        case 0x100970u: goto label_100970;
        case 0x100974u: goto label_100974;
        case 0x100978u: goto label_100978;
        case 0x10097cu: goto label_10097c;
        case 0x100980u: goto label_100980;
        case 0x100984u: goto label_100984;
        case 0x100988u: goto label_100988;
        case 0x10098cu: goto label_10098c;
        case 0x100990u: goto label_100990;
        case 0x100994u: goto label_100994;
        case 0x100998u: goto label_100998;
        case 0x10099cu: goto label_10099c;
        case 0x1009a0u: goto label_1009a0;
        case 0x1009a4u: goto label_1009a4;
        case 0x1009a8u: goto label_1009a8;
        case 0x1009acu: goto label_1009ac;
        case 0x1009b0u: goto label_1009b0;
        case 0x1009b4u: goto label_1009b4;
        default: break;
    }

    ctx->pc = 0x1005d0u;

label_1005d0:
    // 0x1005d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1005d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1005d4:
    // 0x1005d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1005d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1005d8:
    // 0x1005d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1005d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1005dc:
    // 0x1005dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1005dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1005e0:
    // 0x1005e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1005e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1005e4:
    // 0x1005e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1005e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1005e8:
    // 0x1005e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1005e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1005ec:
    // 0x1005ec: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1005ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1005f0:
    // 0x1005f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1005f4:
    if (ctx->pc == 0x1005F4u) {
        ctx->pc = 0x1005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F0u;
        // 0x1005f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1005F8u;
        goto label_1005f8;
    }
    ctx->pc = 0x1005F0u;
    {
        const bool branch_taken_0x1005f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F0u;
        // 0x1005f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005f0) {
            ctx->pc = 0x100608u;
            goto label_100608;
        }
    }
    ctx->pc = 0x1005F8u;
label_1005f8:
    // 0x1005f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1005fc:
    // 0x1005fc: 0xc0685b8  jal         func_1A16E0
label_100600:
    if (ctx->pc == 0x100600u) {
        ctx->pc = 0x100600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005FCu;
        // 0x100600: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100604u;
        goto label_100604;
    }
    ctx->pc = 0x1005FCu;
    SET_GPR_U32(ctx, 31, 0x100604u);
    ctx->pc = 0x100600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005FCu;
    // 0x100600: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1005FCu, 0x100604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100604u;
label_100604:
    // 0x100604: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x100604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_100608:
    // 0x100608: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10060c:
    // 0x10060c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_100610:
    if (ctx->pc == 0x100610u) {
        ctx->pc = 0x100610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10060Cu;
        // 0x100610: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100614u;
        goto label_100614;
    }
    ctx->pc = 0x10060Cu;
    {
        const bool branch_taken_0x10060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10060c) {
            ctx->pc = 0x100610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10060Cu;
            // 0x100610: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100668u;
            goto label_100668;
        }
    }
    ctx->pc = 0x100614u;
label_100614:
    // 0x100614: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x100614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_100618:
    // 0x100618: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_10061c:
    if (ctx->pc == 0x10061Cu) {
        ctx->pc = 0x10061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100618u;
        // 0x10061c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100620u;
        goto label_100620;
    }
    ctx->pc = 0x100618u;
    {
        const bool branch_taken_0x100618 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100618u;
        // 0x10061c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100618) {
            ctx->pc = 0x100658u;
            goto label_100658;
        }
    }
    ctx->pc = 0x100620u;
label_100620:
    // 0x100620: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_100624:
    // 0x100624: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x100624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_100628:
    // 0x100628: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x100628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10062c:
    // 0x10062c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100630:
    // 0x100630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100634:
    // 0x100634: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100638:
    // 0x100638: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_10063c:
    if (ctx->pc == 0x10063Cu) {
        ctx->pc = 0x10063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100638u;
        // 0x10063c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100640u;
        goto label_100640;
    }
    ctx->pc = 0x100638u;
    {
        const bool branch_taken_0x100638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100638u;
        // 0x10063c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100638) {
            ctx->pc = 0x100648u;
            goto label_100648;
        }
    }
    ctx->pc = 0x100640u;
label_100640:
    // 0x100640: 0xc067f04  jal         func_19FC10
label_100644:
    if (ctx->pc == 0x100644u) {
        ctx->pc = 0x100644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100640u;
        // 0x100644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100648u;
        goto label_100648;
    }
    ctx->pc = 0x100640u;
    SET_GPR_U32(ctx, 31, 0x100648u);
    ctx->pc = 0x100644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100640u;
    // 0x100644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100640u, 0x100648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100648u;
label_100648:
    // 0x100648: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x100648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_10064c:
    // 0x10064c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x10064cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_100650:
    // 0x100650: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_100654:
    if (ctx->pc == 0x100654u) {
        ctx->pc = 0x100654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100650u;
        // 0x100654: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100658u;
        goto label_100658;
    }
    ctx->pc = 0x100650u;
    {
        const bool branch_taken_0x100650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100650u;
        // 0x100654: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100650) {
            ctx->pc = 0x100620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100620;
        }
    }
    ctx->pc = 0x100658u;
label_100658:
    // 0x100658: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x100658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10065c:
    // 0x10065c: 0xc067f04  jal         func_19FC10
label_100660:
    if (ctx->pc == 0x100660u) {
        ctx->pc = 0x100660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10065Cu;
        // 0x100660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100664u;
        goto label_100664;
    }
    ctx->pc = 0x10065Cu;
    SET_GPR_U32(ctx, 31, 0x100664u);
    ctx->pc = 0x100660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10065Cu;
    // 0x100660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10065Cu, 0x100664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100664u;
label_100664:
    // 0x100664: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x100664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_100668:
    // 0x100668: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_10066c:
    if (ctx->pc == 0x10066Cu) {
        ctx->pc = 0x10066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100668u;
        // 0x10066c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100670u;
        goto label_100670;
    }
    ctx->pc = 0x100668u;
    {
        const bool branch_taken_0x100668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100668) {
            ctx->pc = 0x10066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100668u;
            // 0x10066c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1006D8u;
            goto label_1006d8;
        }
    }
    ctx->pc = 0x100670u;
label_100670:
    // 0x100670: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x100670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_100674:
    // 0x100674: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_100678:
    if (ctx->pc == 0x100678u) {
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100674u;
        // 0x100678: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10067Cu;
        goto label_10067c;
    }
    ctx->pc = 0x100674u;
    {
        const bool branch_taken_0x100674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100674u;
        // 0x100678: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100674) {
            ctx->pc = 0x1006C8u;
            goto label_1006c8;
        }
    }
    ctx->pc = 0x10067Cu;
label_10067c:
    // 0x10067c: 0x0  nop
    ctx->pc = 0x10067cu;
    // NOP
label_100680:
    // 0x100680: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x100680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_100684:
    // 0x100684: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x100684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_100688:
    // 0x100688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10068c:
    // 0x10068c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10068cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100690:
    // 0x100690: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100694:
    // 0x100694: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100698:
    if (ctx->pc == 0x100698u) {
        ctx->pc = 0x100698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100694u;
        // 0x100698: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10069Cu;
        goto label_10069c;
    }
    ctx->pc = 0x100694u;
    {
        const bool branch_taken_0x100694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100694u;
        // 0x100698: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100694) {
            ctx->pc = 0x1006B8u;
            goto label_1006b8;
        }
    }
    ctx->pc = 0x10069Cu;
label_10069c:
    // 0x10069c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1006a0:
    // 0x1006a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1006a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1006a4:
    // 0x1006a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1006a8:
    // 0x1006a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1006ac:
    // 0x1006ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1006b0:
    // 0x1006b0: 0x60f809  jalr        $v1
label_1006b4:
    if (ctx->pc == 0x1006B4u) {
        ctx->pc = 0x1006B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006B0u;
        // 0x1006b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006B8u;
        goto label_1006b8;
    }
    ctx->pc = 0x1006B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1006B8u);
        ctx->pc = 0x1006B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006B0u;
        // 0x1006b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006B0u, 0x1006B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1006B8u;
label_1006b8:
    // 0x1006b8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1006b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1006bc:
    // 0x1006bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1006bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1006c0:
    // 0x1006c0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1006c4:
    if (ctx->pc == 0x1006C4u) {
        ctx->pc = 0x1006C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006C0u;
        // 0x1006c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006C8u;
        goto label_1006c8;
    }
    ctx->pc = 0x1006C0u;
    {
        const bool branch_taken_0x1006c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1006C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006C0u;
        // 0x1006c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006c0) {
            ctx->pc = 0x100680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100680;
        }
    }
    ctx->pc = 0x1006C8u;
label_1006c8:
    // 0x1006c8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1006c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1006cc:
    // 0x1006cc: 0xc067f04  jal         func_19FC10
label_1006d0:
    if (ctx->pc == 0x1006D0u) {
        ctx->pc = 0x1006D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006CCu;
        // 0x1006d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006D4u;
        goto label_1006d4;
    }
    ctx->pc = 0x1006CCu;
    SET_GPR_U32(ctx, 31, 0x1006D4u);
    ctx->pc = 0x1006D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1006CCu;
    // 0x1006d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1006CCu, 0x1006D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1006D4u;
label_1006d4:
    // 0x1006d4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1006d8:
    // 0x1006d8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1006dc:
    if (ctx->pc == 0x1006DCu) {
        ctx->pc = 0x1006DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006D8u;
        // 0x1006dc: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006E0u;
        goto label_1006e0;
    }
    ctx->pc = 0x1006D8u;
    {
        const bool branch_taken_0x1006d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1006d8) {
            ctx->pc = 0x1006DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1006D8u;
            // 0x1006dc: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10074Cu;
            goto label_10074c;
        }
    }
    ctx->pc = 0x1006E0u;
label_1006e0:
    // 0x1006e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1006e4:
    // 0x1006e4: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1006e8:
    if (ctx->pc == 0x1006E8u) {
        ctx->pc = 0x1006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E4u;
        // 0x1006e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006ECu;
        goto label_1006ec;
    }
    ctx->pc = 0x1006E4u;
    {
        const bool branch_taken_0x1006e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006E4u;
        // 0x1006e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006e4) {
            ctx->pc = 0x10073Cu;
            goto label_10073c;
        }
    }
    ctx->pc = 0x1006ECu;
label_1006ec:
    // 0x1006ec: 0x0  nop
    ctx->pc = 0x1006ecu;
    // NOP
label_1006f0:
    // 0x1006f0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1006f4:
    // 0x1006f4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1006f8:
    // 0x1006f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1006f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1006fc:
    // 0x1006fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1006fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100700:
    // 0x100700: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100704:
    // 0x100704: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100708:
    if (ctx->pc == 0x100708u) {
        ctx->pc = 0x100708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100704u;
        // 0x100708: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10070Cu;
        goto label_10070c;
    }
    ctx->pc = 0x100704u;
    {
        const bool branch_taken_0x100704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100704u;
        // 0x100708: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100704) {
            ctx->pc = 0x100728u;
            goto label_100728;
        }
    }
    ctx->pc = 0x10070Cu;
label_10070c:
    // 0x10070c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100710:
    // 0x100710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100714:
    // 0x100714: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100718:
    // 0x100718: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10071c:
    // 0x10071c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100720:
    // 0x100720: 0x60f809  jalr        $v1
label_100724:
    if (ctx->pc == 0x100724u) {
        ctx->pc = 0x100724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100720u;
        // 0x100724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100728u;
        goto label_100728;
    }
    ctx->pc = 0x100720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100728u);
        ctx->pc = 0x100724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100720u;
        // 0x100724: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100720u, 0x100728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100728u;
label_100728:
    // 0x100728: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_10072c:
    // 0x10072c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10072cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_100730:
    // 0x100730: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x100730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_100734:
    // 0x100734: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_100738:
    if (ctx->pc == 0x100738u) {
        ctx->pc = 0x100738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100734u;
        // 0x100738: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10073Cu;
        goto label_10073c;
    }
    ctx->pc = 0x100734u;
    {
        const bool branch_taken_0x100734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100734u;
        // 0x100738: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100734) {
            ctx->pc = 0x1006F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1006f0;
        }
    }
    ctx->pc = 0x10073Cu;
label_10073c:
    // 0x10073c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x10073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_100740:
    // 0x100740: 0xc067f04  jal         func_19FC10
label_100744:
    if (ctx->pc == 0x100744u) {
        ctx->pc = 0x100744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100740u;
        // 0x100744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100748u;
        goto label_100748;
    }
    ctx->pc = 0x100740u;
    SET_GPR_U32(ctx, 31, 0x100748u);
    ctx->pc = 0x100744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100740u;
    // 0x100744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100740u, 0x100748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100748u;
label_100748:
    // 0x100748: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x100748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_10074c:
    // 0x10074c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_100750:
    if (ctx->pc == 0x100750u) {
        ctx->pc = 0x100750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10074Cu;
        // 0x100750: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100754u;
        goto label_100754;
    }
    ctx->pc = 0x10074Cu;
    {
        const bool branch_taken_0x10074c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10074c) {
            ctx->pc = 0x100750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10074Cu;
            // 0x100750: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1007D8u;
            goto label_1007d8;
        }
    }
    ctx->pc = 0x100754u;
label_100754:
    // 0x100754: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x100754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_100758:
    // 0x100758: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_10075c:
    if (ctx->pc == 0x10075Cu) {
        ctx->pc = 0x10075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100758u;
        // 0x10075c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100760u;
        goto label_100760;
    }
    ctx->pc = 0x100758u;
    {
        const bool branch_taken_0x100758 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100758u;
        // 0x10075c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100758) {
            ctx->pc = 0x1007C8u;
            goto label_1007c8;
        }
    }
    ctx->pc = 0x100760u;
label_100760:
    // 0x100760: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x100760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_100764:
    // 0x100764: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x100764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_100768:
    // 0x100768: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10076c:
    // 0x10076c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10076cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100770:
    // 0x100770: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x100770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100774:
    // 0x100774: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x100774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100778:
    // 0x100778: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_10077c:
    if (ctx->pc == 0x10077Cu) {
        ctx->pc = 0x10077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100778u;
        // 0x10077c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100780u;
        goto label_100780;
    }
    ctx->pc = 0x100778u;
    {
        const bool branch_taken_0x100778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100778u;
        // 0x10077c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100778) {
            ctx->pc = 0x100788u;
            goto label_100788;
        }
    }
    ctx->pc = 0x100780u;
label_100780:
    // 0x100780: 0xc067f04  jal         func_19FC10
label_100784:
    if (ctx->pc == 0x100784u) {
        ctx->pc = 0x100784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100780u;
        // 0x100784: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100788u;
        goto label_100788;
    }
    ctx->pc = 0x100780u;
    SET_GPR_U32(ctx, 31, 0x100788u);
    ctx->pc = 0x100784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100780u;
    // 0x100784: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100780u, 0x100788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100788u;
label_100788:
    // 0x100788: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10078c:
    // 0x10078c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100790:
    if (ctx->pc == 0x100790u) {
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100794u;
        goto label_100794;
    }
    ctx->pc = 0x10078Cu;
    {
        const bool branch_taken_0x10078c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10078Cu;
        // 0x100790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10078c) {
            ctx->pc = 0x1007ACu;
            goto label_1007ac;
        }
    }
    ctx->pc = 0x100794u;
label_100794:
    // 0x100794: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100798:
    // 0x100798: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10079c:
    // 0x10079c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10079cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1007a0:
    // 0x1007a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1007a4:
    // 0x1007a4: 0x60f809  jalr        $v1
label_1007a8:
    if (ctx->pc == 0x1007A8u) {
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007A4u;
        // 0x1007a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007ACu;
        goto label_1007ac;
    }
    ctx->pc = 0x1007A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1007ACu);
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007A4u;
        // 0x1007a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1007A4u, 0x1007ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1007ACu;
label_1007ac:
    // 0x1007ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1007acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1007b0:
    // 0x1007b0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1007b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1007b4:
    // 0x1007b4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1007b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1007b8:
    // 0x1007b8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1007b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1007bc:
    // 0x1007bc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1007bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1007c0:
    // 0x1007c0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1007c4:
    if (ctx->pc == 0x1007C4u) {
        ctx->pc = 0x1007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007C0u;
        // 0x1007c4: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007C8u;
        goto label_1007c8;
    }
    ctx->pc = 0x1007C0u;
    {
        const bool branch_taken_0x1007c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007C0u;
        // 0x1007c4: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007c0) {
            ctx->pc = 0x100760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100760;
        }
    }
    ctx->pc = 0x1007C8u;
label_1007c8:
    // 0x1007c8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1007c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1007cc:
    // 0x1007cc: 0xc067f04  jal         func_19FC10
label_1007d0:
    if (ctx->pc == 0x1007D0u) {
        ctx->pc = 0x1007D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007CCu;
        // 0x1007d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007D4u;
        goto label_1007d4;
    }
    ctx->pc = 0x1007CCu;
    SET_GPR_U32(ctx, 31, 0x1007D4u);
    ctx->pc = 0x1007D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007CCu;
    // 0x1007d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1007CCu, 0x1007D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007D4u;
label_1007d4:
    // 0x1007d4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1007d8:
    // 0x1007d8: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_1007dc:
    if (ctx->pc == 0x1007DCu) {
        ctx->pc = 0x1007DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007D8u;
        // 0x1007dc: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007E0u;
        goto label_1007e0;
    }
    ctx->pc = 0x1007D8u;
    {
        const bool branch_taken_0x1007d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007d8) {
            ctx->pc = 0x1007DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1007D8u;
            // 0x1007dc: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100878u;
            goto label_100878;
        }
    }
    ctx->pc = 0x1007E0u;
label_1007e0:
    // 0x1007e0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1007e4:
    // 0x1007e4: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_1007e8:
    if (ctx->pc == 0x1007E8u) {
        ctx->pc = 0x1007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007E4u;
        // 0x1007e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1007ECu;
        goto label_1007ec;
    }
    ctx->pc = 0x1007E4u;
    {
        const bool branch_taken_0x1007e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007E4u;
        // 0x1007e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007e4) {
            ctx->pc = 0x100868u;
            goto label_100868;
        }
    }
    ctx->pc = 0x1007ECu;
label_1007ec:
    // 0x1007ec: 0x0  nop
    ctx->pc = 0x1007ecu;
    // NOP
label_1007f0:
    // 0x1007f0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1007f4:
    // 0x1007f4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1007f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1007f8:
    // 0x1007f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1007f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1007fc:
    // 0x1007fc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_100800:
    // 0x100800: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100804:
    // 0x100804: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100808:
    if (ctx->pc == 0x100808u) {
        ctx->pc = 0x100808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100804u;
        // 0x100808: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10080Cu;
        goto label_10080c;
    }
    ctx->pc = 0x100804u;
    {
        const bool branch_taken_0x100804 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100804u;
        // 0x100808: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100804) {
            ctx->pc = 0x100828u;
            goto label_100828;
        }
    }
    ctx->pc = 0x10080Cu;
label_10080c:
    // 0x10080c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100810:
    // 0x100810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100814:
    // 0x100814: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100818:
    // 0x100818: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10081c:
    // 0x10081c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100820:
    // 0x100820: 0x60f809  jalr        $v1
label_100824:
    if (ctx->pc == 0x100824u) {
        ctx->pc = 0x100824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100820u;
        // 0x100824: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100828u;
        goto label_100828;
    }
    ctx->pc = 0x100820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100828u);
        ctx->pc = 0x100824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100820u;
        // 0x100824: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100820u, 0x100828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100828u;
label_100828:
    // 0x100828: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x100828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10082c:
    // 0x10082c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100830:
    if (ctx->pc == 0x100830u) {
        ctx->pc = 0x100830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10082Cu;
        // 0x100830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100834u;
        goto label_100834;
    }
    ctx->pc = 0x10082Cu;
    {
        const bool branch_taken_0x10082c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10082Cu;
        // 0x100830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10082c) {
            ctx->pc = 0x10084Cu;
            goto label_10084c;
        }
    }
    ctx->pc = 0x100834u;
label_100834:
    // 0x100834: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100838:
    // 0x100838: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10083c:
    // 0x10083c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100840:
    // 0x100840: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100844:
    // 0x100844: 0x60f809  jalr        $v1
label_100848:
    if (ctx->pc == 0x100848u) {
        ctx->pc = 0x100848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100844u;
        // 0x100848: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10084Cu;
        goto label_10084c;
    }
    ctx->pc = 0x100844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10084Cu);
        ctx->pc = 0x100848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100844u;
        // 0x100848: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100844u, 0x10084Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10084Cu;
label_10084c:
    // 0x10084c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x10084cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_100850:
    // 0x100850: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x100850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_100854:
    // 0x100854: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x100854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_100858:
    // 0x100858: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x100858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_10085c:
    // 0x10085c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x10085cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_100860:
    // 0x100860: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_100864:
    if (ctx->pc == 0x100864u) {
        ctx->pc = 0x100864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100860u;
        // 0x100864: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100868u;
        goto label_100868;
    }
    ctx->pc = 0x100860u;
    {
        const bool branch_taken_0x100860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100860u;
        // 0x100864: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100860) {
            ctx->pc = 0x1007F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1007f0;
        }
    }
    ctx->pc = 0x100868u;
label_100868:
    // 0x100868: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x100868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_10086c:
    // 0x10086c: 0xc067f04  jal         func_19FC10
label_100870:
    if (ctx->pc == 0x100870u) {
        ctx->pc = 0x100870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10086Cu;
        // 0x100870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100874u;
        goto label_100874;
    }
    ctx->pc = 0x10086Cu;
    SET_GPR_U32(ctx, 31, 0x100874u);
    ctx->pc = 0x100870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10086Cu;
    // 0x100870: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10086Cu, 0x100874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100874u;
label_100874:
    // 0x100874: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x100874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_100878:
    // 0x100878: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_10087c:
    if (ctx->pc == 0x10087Cu) {
        ctx->pc = 0x10087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100878u;
        // 0x10087c: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100880u;
        goto label_100880;
    }
    ctx->pc = 0x100878u;
    {
        const bool branch_taken_0x100878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100878) {
            ctx->pc = 0x10087Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100878u;
            // 0x10087c: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100918u;
            goto label_100918;
        }
    }
    ctx->pc = 0x100880u;
label_100880:
    // 0x100880: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_100884:
    // 0x100884: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_100888:
    if (ctx->pc == 0x100888u) {
        ctx->pc = 0x100888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100884u;
        // 0x100888: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10088Cu;
        goto label_10088c;
    }
    ctx->pc = 0x100884u;
    {
        const bool branch_taken_0x100884 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100884u;
        // 0x100888: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100884) {
            ctx->pc = 0x100908u;
            goto label_100908;
        }
    }
    ctx->pc = 0x10088Cu;
label_10088c:
    // 0x10088c: 0x0  nop
    ctx->pc = 0x10088cu;
    // NOP
label_100890:
    // 0x100890: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_100894:
    // 0x100894: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x100894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_100898:
    // 0x100898: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10089c:
    // 0x10089c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1008a0:
    // 0x1008a0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1008a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1008a4:
    // 0x1008a4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1008a8:
    if (ctx->pc == 0x1008A8u) {
        ctx->pc = 0x1008A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008A4u;
        // 0x1008a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008ACu;
        goto label_1008ac;
    }
    ctx->pc = 0x1008A4u;
    {
        const bool branch_taken_0x1008a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008A4u;
        // 0x1008a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008a4) {
            ctx->pc = 0x1008C8u;
            goto label_1008c8;
        }
    }
    ctx->pc = 0x1008ACu;
label_1008ac:
    // 0x1008ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1008b0:
    // 0x1008b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1008b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1008b4:
    // 0x1008b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1008b8:
    // 0x1008b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1008b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1008bc:
    // 0x1008bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1008bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1008c0:
    // 0x1008c0: 0x60f809  jalr        $v1
label_1008c4:
    if (ctx->pc == 0x1008C4u) {
        ctx->pc = 0x1008C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C0u;
        // 0x1008c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008C8u;
        goto label_1008c8;
    }
    ctx->pc = 0x1008C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1008C8u);
        ctx->pc = 0x1008C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C0u;
        // 0x1008c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008C0u, 0x1008C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1008C8u;
label_1008c8:
    // 0x1008c8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1008cc:
    // 0x1008cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1008d0:
    if (ctx->pc == 0x1008D0u) {
        ctx->pc = 0x1008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008CCu;
        // 0x1008d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008D4u;
        goto label_1008d4;
    }
    ctx->pc = 0x1008CCu;
    {
        const bool branch_taken_0x1008cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008CCu;
        // 0x1008d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008cc) {
            ctx->pc = 0x1008ECu;
            goto label_1008ec;
        }
    }
    ctx->pc = 0x1008D4u;
label_1008d4:
    // 0x1008d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1008d8:
    // 0x1008d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1008dc:
    // 0x1008dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1008e0:
    // 0x1008e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1008e4:
    // 0x1008e4: 0x60f809  jalr        $v1
label_1008e8:
    if (ctx->pc == 0x1008E8u) {
        ctx->pc = 0x1008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008E4u;
        // 0x1008e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008ECu;
        goto label_1008ec;
    }
    ctx->pc = 0x1008E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1008ECu);
        ctx->pc = 0x1008E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008E4u;
        // 0x1008e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008E4u, 0x1008ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1008ECu;
label_1008ec:
    // 0x1008ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1008ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1008f0:
    // 0x1008f0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1008f4:
    // 0x1008f4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1008f8:
    // 0x1008f8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1008fc:
    // 0x1008fc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1008fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_100900:
    // 0x100900: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_100904:
    if (ctx->pc == 0x100904u) {
        ctx->pc = 0x100904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100900u;
        // 0x100904: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100908u;
        goto label_100908;
    }
    ctx->pc = 0x100900u;
    {
        const bool branch_taken_0x100900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100900u;
        // 0x100904: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100900) {
            ctx->pc = 0x100890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100890;
        }
    }
    ctx->pc = 0x100908u;
label_100908:
    // 0x100908: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_10090c:
    // 0x10090c: 0xc067f04  jal         func_19FC10
label_100910:
    if (ctx->pc == 0x100910u) {
        ctx->pc = 0x100910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10090Cu;
        // 0x100910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100914u;
        goto label_100914;
    }
    ctx->pc = 0x10090Cu;
    SET_GPR_U32(ctx, 31, 0x100914u);
    ctx->pc = 0x100910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10090Cu;
    // 0x100910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10090Cu, 0x100914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100914u;
label_100914:
    // 0x100914: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_100918:
    // 0x100918: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_10091c:
    if (ctx->pc == 0x10091Cu) {
        ctx->pc = 0x100920u;
        goto label_100920;
    }
    ctx->pc = 0x100918u;
    {
        const bool branch_taken_0x100918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100918) {
            ctx->pc = 0x10098Cu;
            goto label_10098c;
        }
    }
    ctx->pc = 0x100920u;
label_100920:
    // 0x100920: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_100924:
    // 0x100924: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_100928:
    if (ctx->pc == 0x100928u) {
        ctx->pc = 0x100928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100924u;
        // 0x100928: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10092Cu;
        goto label_10092c;
    }
    ctx->pc = 0x100924u;
    {
        const bool branch_taken_0x100924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100924u;
        // 0x100928: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100924) {
            ctx->pc = 0x100978u;
            goto label_100978;
        }
    }
    ctx->pc = 0x10092Cu;
label_10092c:
    // 0x10092c: 0x0  nop
    ctx->pc = 0x10092cu;
    // NOP
label_100930:
    // 0x100930: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_100934:
    // 0x100934: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_100938:
    // 0x100938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10093c:
    // 0x10093c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10093cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100940:
    // 0x100940: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100944:
    // 0x100944: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100948:
    if (ctx->pc == 0x100948u) {
        ctx->pc = 0x100948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100944u;
        // 0x100948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10094Cu;
        goto label_10094c;
    }
    ctx->pc = 0x100944u;
    {
        const bool branch_taken_0x100944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100944u;
        // 0x100948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100944) {
            ctx->pc = 0x100968u;
            goto label_100968;
        }
    }
    ctx->pc = 0x10094Cu;
label_10094c:
    // 0x10094c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100950:
    // 0x100950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100954:
    // 0x100954: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100958:
    // 0x100958: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10095c:
    // 0x10095c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100960:
    // 0x100960: 0x60f809  jalr        $v1
label_100964:
    if (ctx->pc == 0x100964u) {
        ctx->pc = 0x100964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100960u;
        // 0x100964: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100968u;
        goto label_100968;
    }
    ctx->pc = 0x100960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100968u);
        ctx->pc = 0x100964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100960u;
        // 0x100964: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100960u, 0x100968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100968u;
label_100968:
    // 0x100968: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_10096c:
    // 0x10096c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x10096cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_100970:
    // 0x100970: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_100974:
    if (ctx->pc == 0x100974u) {
        ctx->pc = 0x100974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100970u;
        // 0x100974: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100978u;
        goto label_100978;
    }
    ctx->pc = 0x100970u;
    {
        const bool branch_taken_0x100970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100970u;
        // 0x100974: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100970) {
            ctx->pc = 0x100930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100930;
        }
    }
    ctx->pc = 0x100978u;
label_100978:
    // 0x100978: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x100978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_10097c:
    // 0x10097c: 0xc067f04  jal         func_19FC10
label_100980:
    if (ctx->pc == 0x100980u) {
        ctx->pc = 0x100980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10097Cu;
        // 0x100980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100984u;
        goto label_100984;
    }
    ctx->pc = 0x10097Cu;
    SET_GPR_U32(ctx, 31, 0x100984u);
    ctx->pc = 0x100980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10097Cu;
    // 0x100980: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10097Cu, 0x100984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100984u;
label_100984:
    // 0x100984: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x100984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_100988:
    // 0x100988: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x100988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_10098c:
    // 0x10098c: 0xc068364  jal         func_1A0D90
label_100990:
    if (ctx->pc == 0x100990u) {
        ctx->pc = 0x100990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10098Cu;
        // 0x100990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100994u;
        goto label_100994;
    }
    ctx->pc = 0x10098Cu;
    SET_GPR_U32(ctx, 31, 0x100994u);
    ctx->pc = 0x100990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10098Cu;
    // 0x100990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x10098Cu, 0x100994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100994u;
label_100994:
    // 0x100994: 0xc068396  jal         func_1A0E58
label_100998:
    if (ctx->pc == 0x100998u) {
        ctx->pc = 0x100998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100994u;
        // 0x100998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10099Cu;
        goto label_10099c;
    }
    ctx->pc = 0x100994u;
    SET_GPR_U32(ctx, 31, 0x10099Cu);
    ctx->pc = 0x100998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100994u;
    // 0x100998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x100994u, 0x10099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10099Cu;
label_10099c:
    // 0x10099c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10099cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1009a0:
    // 0x1009a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1009a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1009a4:
    // 0x1009a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1009a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1009a8:
    // 0x1009a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1009a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1009ac:
    // 0x1009ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1009acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1009b0:
    // 0x1009b0: 0x3e00008  jr          $ra
label_1009b4:
    if (ctx->pc == 0x1009B4u) {
        ctx->pc = 0x1009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009B0u;
        // 0x1009b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1009B8u;
        goto label_fallthrough_0x1009b0;
    }
    ctx->pc = 0x1009B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1009B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009B0u;
        // 0x1009b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1009B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1009b0:
    ctx->pc = 0x1009B8u;
}
