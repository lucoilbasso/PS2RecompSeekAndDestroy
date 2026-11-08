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

// Function: BMotionDataLiner__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a3400 - 0x1a3830
void BMotionDataLiner__FP11BMotionCtrlP11BMotionWorki_0x1a3400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionDataLiner__FP11BMotionCtrlP11BMotionWorki_0x1a3400");
#endif

    switch (ctx->pc) {
        case 0x1a3400u: goto label_1a3400;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3408u: goto label_1a3408;
        case 0x1a340cu: goto label_1a340c;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a3414u: goto label_1a3414;
        case 0x1a3418u: goto label_1a3418;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a3420u: goto label_1a3420;
        case 0x1a3424u: goto label_1a3424;
        case 0x1a3428u: goto label_1a3428;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3430u: goto label_1a3430;
        case 0x1a3434u: goto label_1a3434;
        case 0x1a3438u: goto label_1a3438;
        case 0x1a343cu: goto label_1a343c;
        case 0x1a3440u: goto label_1a3440;
        case 0x1a3444u: goto label_1a3444;
        case 0x1a3448u: goto label_1a3448;
        case 0x1a344cu: goto label_1a344c;
        case 0x1a3450u: goto label_1a3450;
        case 0x1a3454u: goto label_1a3454;
        case 0x1a3458u: goto label_1a3458;
        case 0x1a345cu: goto label_1a345c;
        case 0x1a3460u: goto label_1a3460;
        case 0x1a3464u: goto label_1a3464;
        case 0x1a3468u: goto label_1a3468;
        case 0x1a346cu: goto label_1a346c;
        case 0x1a3470u: goto label_1a3470;
        case 0x1a3474u: goto label_1a3474;
        case 0x1a3478u: goto label_1a3478;
        case 0x1a347cu: goto label_1a347c;
        case 0x1a3480u: goto label_1a3480;
        case 0x1a3484u: goto label_1a3484;
        case 0x1a3488u: goto label_1a3488;
        case 0x1a348cu: goto label_1a348c;
        case 0x1a3490u: goto label_1a3490;
        case 0x1a3494u: goto label_1a3494;
        case 0x1a3498u: goto label_1a3498;
        case 0x1a349cu: goto label_1a349c;
        case 0x1a34a0u: goto label_1a34a0;
        case 0x1a34a4u: goto label_1a34a4;
        case 0x1a34a8u: goto label_1a34a8;
        case 0x1a34acu: goto label_1a34ac;
        case 0x1a34b0u: goto label_1a34b0;
        case 0x1a34b4u: goto label_1a34b4;
        case 0x1a34b8u: goto label_1a34b8;
        case 0x1a34bcu: goto label_1a34bc;
        case 0x1a34c0u: goto label_1a34c0;
        case 0x1a34c4u: goto label_1a34c4;
        case 0x1a34c8u: goto label_1a34c8;
        case 0x1a34ccu: goto label_1a34cc;
        case 0x1a34d0u: goto label_1a34d0;
        case 0x1a34d4u: goto label_1a34d4;
        case 0x1a34d8u: goto label_1a34d8;
        case 0x1a34dcu: goto label_1a34dc;
        case 0x1a34e0u: goto label_1a34e0;
        case 0x1a34e4u: goto label_1a34e4;
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34ecu: goto label_1a34ec;
        case 0x1a34f0u: goto label_1a34f0;
        case 0x1a34f4u: goto label_1a34f4;
        case 0x1a34f8u: goto label_1a34f8;
        case 0x1a34fcu: goto label_1a34fc;
        case 0x1a3500u: goto label_1a3500;
        case 0x1a3504u: goto label_1a3504;
        case 0x1a3508u: goto label_1a3508;
        case 0x1a350cu: goto label_1a350c;
        case 0x1a3510u: goto label_1a3510;
        case 0x1a3514u: goto label_1a3514;
        case 0x1a3518u: goto label_1a3518;
        case 0x1a351cu: goto label_1a351c;
        case 0x1a3520u: goto label_1a3520;
        case 0x1a3524u: goto label_1a3524;
        case 0x1a3528u: goto label_1a3528;
        case 0x1a352cu: goto label_1a352c;
        case 0x1a3530u: goto label_1a3530;
        case 0x1a3534u: goto label_1a3534;
        case 0x1a3538u: goto label_1a3538;
        case 0x1a353cu: goto label_1a353c;
        case 0x1a3540u: goto label_1a3540;
        case 0x1a3544u: goto label_1a3544;
        case 0x1a3548u: goto label_1a3548;
        case 0x1a354cu: goto label_1a354c;
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        case 0x1a35f0u: goto label_1a35f0;
        case 0x1a35f4u: goto label_1a35f4;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a35fcu: goto label_1a35fc;
        case 0x1a3600u: goto label_1a3600;
        case 0x1a3604u: goto label_1a3604;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3610u: goto label_1a3610;
        case 0x1a3614u: goto label_1a3614;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a361cu: goto label_1a361c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3624u: goto label_1a3624;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3630u: goto label_1a3630;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3638u: goto label_1a3638;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3640u: goto label_1a3640;
        case 0x1a3644u: goto label_1a3644;
        case 0x1a3648u: goto label_1a3648;
        case 0x1a364cu: goto label_1a364c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3654u: goto label_1a3654;
        case 0x1a3658u: goto label_1a3658;
        case 0x1a365cu: goto label_1a365c;
        case 0x1a3660u: goto label_1a3660;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3668u: goto label_1a3668;
        case 0x1a366cu: goto label_1a366c;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3674u: goto label_1a3674;
        case 0x1a3678u: goto label_1a3678;
        case 0x1a367cu: goto label_1a367c;
        case 0x1a3680u: goto label_1a3680;
        case 0x1a3684u: goto label_1a3684;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a368cu: goto label_1a368c;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a3698u: goto label_1a3698;
        case 0x1a369cu: goto label_1a369c;
        case 0x1a36a0u: goto label_1a36a0;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36a8u: goto label_1a36a8;
        case 0x1a36acu: goto label_1a36ac;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b4u: goto label_1a36b4;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36bcu: goto label_1a36bc;
        case 0x1a36c0u: goto label_1a36c0;
        case 0x1a36c4u: goto label_1a36c4;
        case 0x1a36c8u: goto label_1a36c8;
        case 0x1a36ccu: goto label_1a36cc;
        case 0x1a36d0u: goto label_1a36d0;
        case 0x1a36d4u: goto label_1a36d4;
        case 0x1a36d8u: goto label_1a36d8;
        case 0x1a36dcu: goto label_1a36dc;
        case 0x1a36e0u: goto label_1a36e0;
        case 0x1a36e4u: goto label_1a36e4;
        case 0x1a36e8u: goto label_1a36e8;
        case 0x1a36ecu: goto label_1a36ec;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36f4u: goto label_1a36f4;
        case 0x1a36f8u: goto label_1a36f8;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3700u: goto label_1a3700;
        case 0x1a3704u: goto label_1a3704;
        case 0x1a3708u: goto label_1a3708;
        case 0x1a370cu: goto label_1a370c;
        case 0x1a3710u: goto label_1a3710;
        case 0x1a3714u: goto label_1a3714;
        case 0x1a3718u: goto label_1a3718;
        case 0x1a371cu: goto label_1a371c;
        case 0x1a3720u: goto label_1a3720;
        case 0x1a3724u: goto label_1a3724;
        case 0x1a3728u: goto label_1a3728;
        case 0x1a372cu: goto label_1a372c;
        case 0x1a3730u: goto label_1a3730;
        case 0x1a3734u: goto label_1a3734;
        case 0x1a3738u: goto label_1a3738;
        case 0x1a373cu: goto label_1a373c;
        case 0x1a3740u: goto label_1a3740;
        case 0x1a3744u: goto label_1a3744;
        case 0x1a3748u: goto label_1a3748;
        case 0x1a374cu: goto label_1a374c;
        case 0x1a3750u: goto label_1a3750;
        case 0x1a3754u: goto label_1a3754;
        case 0x1a3758u: goto label_1a3758;
        case 0x1a375cu: goto label_1a375c;
        case 0x1a3760u: goto label_1a3760;
        case 0x1a3764u: goto label_1a3764;
        case 0x1a3768u: goto label_1a3768;
        case 0x1a376cu: goto label_1a376c;
        case 0x1a3770u: goto label_1a3770;
        case 0x1a3774u: goto label_1a3774;
        case 0x1a3778u: goto label_1a3778;
        case 0x1a377cu: goto label_1a377c;
        case 0x1a3780u: goto label_1a3780;
        case 0x1a3784u: goto label_1a3784;
        case 0x1a3788u: goto label_1a3788;
        case 0x1a378cu: goto label_1a378c;
        case 0x1a3790u: goto label_1a3790;
        case 0x1a3794u: goto label_1a3794;
        case 0x1a3798u: goto label_1a3798;
        case 0x1a379cu: goto label_1a379c;
        case 0x1a37a0u: goto label_1a37a0;
        case 0x1a37a4u: goto label_1a37a4;
        case 0x1a37a8u: goto label_1a37a8;
        case 0x1a37acu: goto label_1a37ac;
        case 0x1a37b0u: goto label_1a37b0;
        case 0x1a37b4u: goto label_1a37b4;
        case 0x1a37b8u: goto label_1a37b8;
        case 0x1a37bcu: goto label_1a37bc;
        case 0x1a37c0u: goto label_1a37c0;
        case 0x1a37c4u: goto label_1a37c4;
        case 0x1a37c8u: goto label_1a37c8;
        case 0x1a37ccu: goto label_1a37cc;
        case 0x1a37d0u: goto label_1a37d0;
        case 0x1a37d4u: goto label_1a37d4;
        case 0x1a37d8u: goto label_1a37d8;
        case 0x1a37dcu: goto label_1a37dc;
        case 0x1a37e0u: goto label_1a37e0;
        case 0x1a37e4u: goto label_1a37e4;
        case 0x1a37e8u: goto label_1a37e8;
        case 0x1a37ecu: goto label_1a37ec;
        case 0x1a37f0u: goto label_1a37f0;
        case 0x1a37f4u: goto label_1a37f4;
        case 0x1a37f8u: goto label_1a37f8;
        case 0x1a37fcu: goto label_1a37fc;
        case 0x1a3800u: goto label_1a3800;
        case 0x1a3804u: goto label_1a3804;
        case 0x1a3808u: goto label_1a3808;
        case 0x1a380cu: goto label_1a380c;
        case 0x1a3810u: goto label_1a3810;
        case 0x1a3814u: goto label_1a3814;
        case 0x1a3818u: goto label_1a3818;
        case 0x1a381cu: goto label_1a381c;
        case 0x1a3820u: goto label_1a3820;
        case 0x1a3824u: goto label_1a3824;
        case 0x1a3828u: goto label_1a3828;
        case 0x1a382cu: goto label_1a382c;
        default: break;
    }

    ctx->pc = 0x1a3400u;

label_1a3400:
    // 0x1a3400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3404:
    // 0x1a3404: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a3404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a3408:
    // 0x1a3408: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a3408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a340c:
    // 0x1a340c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a340cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3410:
    // 0x1a3410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3414:
    // 0x1a3414: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3418:
    // 0x1a3418: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a3418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a341c:
    // 0x1a341c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a341cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3420:
    // 0x1a3420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a3424:
    // 0x1a3424: 0x16620048  bne         $s3, $v0, . + 4 + (0x48 << 2)
label_1a3428:
    if (ctx->pc == 0x1A3428u) {
        ctx->pc = 0x1A3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3424u;
        // 0x1a3428: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A342Cu;
        goto label_1a342c;
    }
    ctx->pc = 0x1A3424u;
    {
        const bool branch_taken_0x1a3424 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3424u;
        // 0x1a3428: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3424) {
            ctx->pc = 0x1A3548u;
            goto label_1a3548;
        }
    }
    ctx->pc = 0x1A342Cu;
label_1a342c:
    // 0x1a342c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1a342cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3430:
    // 0x1a3430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3434:
    // 0x1a3434: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x1a3434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_1a3438:
    // 0x1a3438: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a3438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a343c:
    // 0x1a343c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1a343cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3440:
    // 0x1a3440: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1a3440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_1a3444:
    // 0x1a3444: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1a3444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1a3448:
    // 0x1a3448: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a3448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a344c:
    // 0x1a344c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a3450:
    if (ctx->pc == 0x1A3450u) {
        ctx->pc = 0x1A3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A344Cu;
        // 0x1a3450: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3454u;
        goto label_1a3454;
    }
    ctx->pc = 0x1A344Cu;
    {
        const bool branch_taken_0x1a344c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A344Cu;
        // 0x1a3450: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a344c) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3454u;
label_1a3454:
    // 0x1a3454: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a3454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3458:
    // 0x1a3458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a345c:
    // 0x1a345c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a3460:
    if (ctx->pc == 0x1A3460u) {
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0x84e30008  lh          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3464u;
        goto label_1a3464;
    }
    ctx->pc = 0x1A345Cu;
    {
        const bool branch_taken_0x1a345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A345Cu;
        // 0x1a3460: 0x84e30008  lh          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a345c) {
            ctx->pc = 0x1A3494u;
            goto label_1a3494;
        }
    }
    ctx->pc = 0x1A3464u;
label_1a3464:
    // 0x1a3464: 0x0  nop
    ctx->pc = 0x1a3464u;
    // NOP
label_1a3468:
    // 0x1a3468: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_1a346c:
    // 0x1a346c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1a3470:
    if (ctx->pc == 0x1A3470u) {
        ctx->pc = 0x1A3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A346Cu;
        // 0x1a3470: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3474u;
        goto label_1a3474;
    }
    ctx->pc = 0x1A346Cu;
    {
        const bool branch_taken_0x1a346c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a346c) {
            ctx->pc = 0x1A3470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A346Cu;
            // 0x1a3470: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3480u;
            goto label_1a3480;
        }
    }
    ctx->pc = 0x1A3474u;
label_1a3474:
    // 0x1a3474: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a3478:
    if (ctx->pc == 0x1A3478u) {
        ctx->pc = 0x1A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3474u;
        // 0x1a3478: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A347Cu;
        goto label_1a347c;
    }
    ctx->pc = 0x1A3474u;
    {
        const bool branch_taken_0x1a3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3474u;
        // 0x1a3478: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3474) {
            ctx->pc = 0x1A3490u;
            goto label_1a3490;
        }
    }
    ctx->pc = 0x1A347Cu;
label_1a347c:
    // 0x1a347c: 0x0  nop
    ctx->pc = 0x1a347cu;
    // NOP
label_1a3480:
    // 0x1a3480: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a3480u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1a3484:
    // 0x1a3484: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a3484u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1a3488:
    // 0x1a3488: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a3488u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_1a348c:
    // 0x1a348c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3490:
    // 0x1a3490: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1a3494:
    // 0x1a3494: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x1a3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1a3498:
    // 0x1a3498: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a3498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a349c:
    // 0x1a349c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a349cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a34a0:
    // 0x1a34a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a34a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1a34a4:
    // 0x1a34a4: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1a34a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a34a8:
    // 0x1a34a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a34ac:
    // 0x1a34ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1a34b0:
    if (ctx->pc == 0x1A34B0u) {
        ctx->pc = 0x1A34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34ACu;
        // 0x1a34b0: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34B4u;
        goto label_1a34b4;
    }
    ctx->pc = 0x1A34ACu;
    {
        const bool branch_taken_0x1a34ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34ac) {
            ctx->pc = 0x1A34B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34ACu;
            // 0x1a34b0: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A34C8u;
            goto label_1a34c8;
        }
    }
    ctx->pc = 0x1A34B4u;
label_1a34b4:
    // 0x1a34b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a34b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a34b8:
    // 0x1a34b8: 0x40f809  jalr        $v0
label_1a34bc:
    if (ctx->pc == 0x1A34BCu) {
        ctx->pc = 0x1A34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34B8u;
        // 0x1a34bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34C0u;
        goto label_1a34c0;
    }
    ctx->pc = 0x1A34B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A34C0u);
        ctx->pc = 0x1A34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34B8u;
        // 0x1a34bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A34B8u, 0x1A34C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A34C0u;
label_1a34c0:
    // 0x1a34c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a34c4:
    if (ctx->pc == 0x1A34C4u) {
        ctx->pc = 0x1A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C0u;
        // 0x1a34c4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34C8u;
        goto label_1a34c8;
    }
    ctx->pc = 0x1A34C0u;
    {
        const bool branch_taken_0x1a34c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C0u;
        // 0x1a34c4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34c0) {
            ctx->pc = 0x1A34F4u;
            goto label_1a34f4;
        }
    }
    ctx->pc = 0x1A34C8u;
label_1a34c8:
    // 0x1a34c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a34cc:
    if (ctx->pc == 0x1A34CCu) {
        ctx->pc = 0x1A34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C8u;
        // 0x1a34cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34D0u;
        goto label_1a34d0;
    }
    ctx->pc = 0x1A34C8u;
    {
        const bool branch_taken_0x1a34c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34c8) {
            ctx->pc = 0x1A34CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34C8u;
            // 0x1a34cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A34E0u;
            goto label_1a34e0;
        }
    }
    ctx->pc = 0x1A34D0u;
label_1a34d0:
    // 0x1a34d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a34d4:
    // 0x1a34d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a34d8:
    if (ctx->pc == 0x1A34D8u) {
        ctx->pc = 0x1A34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D4u;
        // 0x1a34d8: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34DCu;
        goto label_1a34dc;
    }
    ctx->pc = 0x1A34D4u;
    {
        const bool branch_taken_0x1a34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D4u;
        // 0x1a34d8: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34d4) {
            ctx->pc = 0x1A34F4u;
            goto label_1a34f4;
        }
    }
    ctx->pc = 0x1A34DCu;
label_1a34dc:
    // 0x1a34dc: 0x0  nop
    ctx->pc = 0x1a34dcu;
    // NOP
label_1a34e0:
    // 0x1a34e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a34e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a34e4:
    // 0x1a34e4: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a34e8:
    // 0x1a34e8: 0xc068186  jal         func_1A0618
label_1a34ec:
    if (ctx->pc == 0x1A34ECu) {
        ctx->pc = 0x1A34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E8u;
        // 0x1a34ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34F0u;
        goto label_1a34f0;
    }
    ctx->pc = 0x1A34E8u;
    SET_GPR_U32(ctx, 31, 0x1A34F0u);
    ctx->pc = 0x1A34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34E8u;
    // 0x1a34ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A34E8u, 0x1A34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34F0u;
label_1a34f0:
    // 0x1a34f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a34f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a34f4:
    // 0x1a34f4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1a34f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1a34f8:
    // 0x1a34f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a34fc:
    // 0x1a34fc: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1a34fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a3500:
    // 0x1a3500: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a3504:
    // 0x1a3504: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a3504u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a3508:
    // 0x1a3508: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a350c:
    // 0x1a350c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a3510:
    // 0x1a3510: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3514:
    // 0x1a3514: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1a3518:
    // 0x1a3518: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x1a3518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_1a351c:
    // 0x1a351c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a351cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a3520:
    // 0x1a3520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3524:
    // 0x1a3524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a3524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3528:
    // 0x1a3528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a3528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a352c:
    // 0x1a352c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1a352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a3530:
    // 0x1a3530: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a3530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3534:
    // 0x1a3534: 0x0  nop
    ctx->pc = 0x1a3534u;
    // NOP
label_1a3538:
    // 0x1a3538: 0x0  nop
    ctx->pc = 0x1a3538u;
    // NOP
label_1a353c:
    // 0x1a353c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a353cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a3540:
    // 0x1a3540: 0xc0688f4  jal         func_1A23D0
label_1a3544:
    if (ctx->pc == 0x1A3544u) {
        ctx->pc = 0x1A3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3540u;
        // 0x1a3544: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3548u;
        goto label_1a3548;
    }
    ctx->pc = 0x1A3540u;
    SET_GPR_U32(ctx, 31, 0x1A3548u);
    ctx->pc = 0x1A3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3540u;
    // 0x1a3544: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23D0u, 0x1A3540u, 0x1A3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3548u;
label_1a3548:
    // 0x1a3548: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x1a3548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a354c:
    // 0x1a354c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a354cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a3550:
    // 0x1a3550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a3554:
    if (ctx->pc == 0x1A3554u) {
        ctx->pc = 0x1A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3550u;
        // 0x1a3554: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3558u;
        goto label_1a3558;
    }
    ctx->pc = 0x1A3550u;
    {
        const bool branch_taken_0x1a3550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3550u;
        // 0x1a3554: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3550) {
            ctx->pc = 0x1A3564u;
            goto label_1a3564;
        }
    }
    ctx->pc = 0x1A3558u;
label_1a3558:
    // 0x1a3558: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1a3558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1a355c:
    // 0x1a355c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a3560:
    // 0x1a3560: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1a3560u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a3564:
    // 0x1a3564: 0x6610018  bgez        $s3, . + 4 + (0x18 << 2)
label_1a3568:
    if (ctx->pc == 0x1A3568u) {
        ctx->pc = 0x1A356Cu;
        goto label_1a356c;
    }
    ctx->pc = 0x1A3564u;
    {
        const bool branch_taken_0x1a3564 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1a3564) {
            ctx->pc = 0x1A35C8u;
            goto label_1a35c8;
        }
    }
    ctx->pc = 0x1A356Cu;
label_1a356c:
    // 0x1a356c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a3570:
    // 0x1a3570: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3574:
    if (ctx->pc == 0x1A3574u) {
        ctx->pc = 0x1A3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3570u;
        // 0x1a3574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3578u;
        goto label_1a3578;
    }
    ctx->pc = 0x1A3570u;
    {
        const bool branch_taken_0x1a3570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3570u;
        // 0x1a3574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3570) {
            ctx->pc = 0x1A3590u;
            goto label_1a3590;
        }
    }
    ctx->pc = 0x1A3578u;
label_1a3578:
    // 0x1a3578: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a3578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a357c:
    // 0x1a357c: 0x40f809  jalr        $v0
label_1a3580:
    if (ctx->pc == 0x1A3580u) {
        ctx->pc = 0x1A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A357Cu;
        // 0x1a3580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3584u;
        goto label_1a3584;
    }
    ctx->pc = 0x1A357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3584u);
        ctx->pc = 0x1A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A357Cu;
        // 0x1a3580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A357Cu, 0x1A3584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3584u;
label_1a3584:
    // 0x1a3584: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1a3588:
    if (ctx->pc == 0x1A3588u) {
        ctx->pc = 0x1A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3584u;
        // 0x1a3588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A358Cu;
        goto label_1a358c;
    }
    ctx->pc = 0x1A3584u;
    {
        const bool branch_taken_0x1a3584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3584u;
        // 0x1a3588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3584) {
            ctx->pc = 0x1A3818u;
            goto label_1a3818;
        }
    }
    ctx->pc = 0x1A358Cu;
label_1a358c:
    // 0x1a358c: 0x0  nop
    ctx->pc = 0x1a358cu;
    // NOP
label_1a3590:
    // 0x1a3590: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1a3590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1a3594:
    // 0x1a3594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a3598:
    if (ctx->pc == 0x1A3598u) {
        ctx->pc = 0x1A3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3594u;
        // 0x1a3598: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A359Cu;
        goto label_1a359c;
    }
    ctx->pc = 0x1A3594u;
    {
        const bool branch_taken_0x1a3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3594) {
            ctx->pc = 0x1A3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3594u;
            // 0x1a3598: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A35A8u;
            goto label_1a35a8;
        }
    }
    ctx->pc = 0x1A359Cu;
label_1a359c:
    // 0x1a359c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1a359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1a35a0:
    // 0x1a35a0: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1a35a4:
    if (ctx->pc == 0x1A35A4u) {
        ctx->pc = 0x1A35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35A0u;
        // 0x1a35a4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35A8u;
        goto label_1a35a8;
    }
    ctx->pc = 0x1A35A0u;
    {
        const bool branch_taken_0x1a35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35A0u;
        // 0x1a35a4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35a0) {
            ctx->pc = 0x1A3814u;
            goto label_1a3814;
        }
    }
    ctx->pc = 0x1A35A8u;
label_1a35a8:
    // 0x1a35a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a35a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a35ac:
    // 0x1a35ac: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
label_1a35b0:
    // 0x1a35b0: 0xc068186  jal         func_1A0618
label_1a35b4:
    if (ctx->pc == 0x1A35B4u) {
        ctx->pc = 0x1A35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35B0u;
        // 0x1a35b4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35B8u;
        goto label_1a35b8;
    }
    ctx->pc = 0x1A35B0u;
    SET_GPR_U32(ctx, 31, 0x1A35B8u);
    ctx->pc = 0x1A35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35B0u;
    // 0x1a35b4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A35B0u, 0x1A35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35B8u;
label_1a35b8:
    // 0x1a35b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a35b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a35bc:
    // 0x1a35bc: 0x10000096  b           . + 4 + (0x96 << 2)
label_1a35c0:
    if (ctx->pc == 0x1A35C0u) {
        ctx->pc = 0x1A35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35BCu;
        // 0x1a35c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35C4u;
        goto label_1a35c4;
    }
    ctx->pc = 0x1A35BCu;
    {
        const bool branch_taken_0x1a35bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35BCu;
        // 0x1a35c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35bc) {
            ctx->pc = 0x1A3818u;
            goto label_1a3818;
        }
    }
    ctx->pc = 0x1A35C4u;
label_1a35c4:
    // 0x1a35c4: 0x0  nop
    ctx->pc = 0x1a35c4u;
    // NOP
label_1a35c8:
    // 0x1a35c8: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
label_1a35cc:
    if (ctx->pc == 0x1A35CCu) {
        ctx->pc = 0x1A35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35C8u;
        // 0x1a35cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35D0u;
        goto label_1a35d0;
    }
    ctx->pc = 0x1A35C8u;
    {
        const bool branch_taken_0x1a35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35C8u;
        // 0x1a35cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35c8) {
            ctx->pc = 0x1A3808u;
            goto label_1a3808;
        }
    }
    ctx->pc = 0x1A35D0u;
label_1a35d0:
    // 0x1a35d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a35d4:
    // 0x1a35d4: 0xc0688f4  jal         func_1A23D0
label_1a35d8:
    if (ctx->pc == 0x1A35D8u) {
        ctx->pc = 0x1A35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35D4u;
        // 0x1a35d8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35DCu;
        goto label_1a35dc;
    }
    ctx->pc = 0x1A35D4u;
    SET_GPR_U32(ctx, 31, 0x1A35DCu);
    ctx->pc = 0x1A35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35D4u;
    // 0x1a35d8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23D0u, 0x1A35D4u, 0x1A35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35DCu;
label_1a35dc:
    // 0x1a35dc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a35dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a35e0:
    // 0x1a35e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a35e4:
    // 0x1a35e4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a35e8:
    // 0x1a35e8: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
label_1a35ec:
    if (ctx->pc == 0x1A35ECu) {
        ctx->pc = 0x1A35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E8u;
        // 0x1a35ec: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35F0u;
        goto label_1a35f0;
    }
    ctx->pc = 0x1A35E8u;
    {
        const bool branch_taken_0x1a35e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E8u;
        // 0x1a35ec: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35e8) {
            ctx->pc = 0x1A3810u;
            goto label_1a3810;
        }
    }
    ctx->pc = 0x1A35F0u;
label_1a35f0:
    // 0x1a35f0: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1a35f4:
    // 0x1a35f4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1a35f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a35f8:
    // 0x1a35f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a35fc:
    // 0x1a35fc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x1a35fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a3600:
    // 0x1a3600: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3604:
    // 0x1a3604: 0x4610038  bgez        $v1, . + 4 + (0x38 << 2)
label_1a3608:
    if (ctx->pc == 0x1A3608u) {
        ctx->pc = 0x1A3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3604u;
        // 0x1a3608: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A360Cu;
        goto label_1a360c;
    }
    ctx->pc = 0x1A3604u;
    {
        const bool branch_taken_0x1a3604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3604u;
        // 0x1a3608: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3604) {
            ctx->pc = 0x1A36E8u;
            goto label_1a36e8;
        }
    }
    ctx->pc = 0x1A360Cu;
label_1a360c:
    // 0x1a360c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3610:
    // 0x1a3610: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_1a3614:
    if (ctx->pc == 0x1A3614u) {
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3610u;
        // 0x1a3614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3618u;
        goto label_1a3618;
    }
    ctx->pc = 0x1A3610u;
    {
        const bool branch_taken_0x1a3610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3610u;
        // 0x1a3614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3610) {
            ctx->pc = 0x1A3704u;
            goto label_1a3704;
        }
    }
    ctx->pc = 0x1A3618u;
label_1a3618:
    // 0x1a3618: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a361c:
    // 0x1a361c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a3620:
    if (ctx->pc == 0x1A3620u) {
        ctx->pc = 0x1A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A361Cu;
        // 0x1a3620: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3624u;
        goto label_1a3624;
    }
    ctx->pc = 0x1A361Cu;
    {
        const bool branch_taken_0x1a361c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A361Cu;
        // 0x1a3620: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a361c) {
            ctx->pc = 0x1A3630u;
            goto label_1a3630;
        }
    }
    ctx->pc = 0x1A3624u;
label_1a3624:
    // 0x1a3624: 0x10000030  b           . + 4 + (0x30 << 2)
label_1a3628:
    if (ctx->pc == 0x1A3628u) {
        ctx->pc = 0x1A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3624u;
        // 0x1a3628: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A362Cu;
        goto label_1a362c;
    }
    ctx->pc = 0x1A3624u;
    {
        const bool branch_taken_0x1a3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3624u;
        // 0x1a3628: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3624) {
            ctx->pc = 0x1A36E8u;
            goto label_1a36e8;
        }
    }
    ctx->pc = 0x1A362Cu;
label_1a362c:
    // 0x1a362c: 0x0  nop
    ctx->pc = 0x1a362cu;
    // NOP
label_1a3630:
    // 0x1a3630: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_1a3634:
    if (ctx->pc == 0x1A3634u) {
        ctx->pc = 0x1A3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3630u;
        // 0x1a3634: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3638u;
        goto label_1a3638;
    }
    ctx->pc = 0x1A3630u;
    {
        const bool branch_taken_0x1a3630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3630u;
        // 0x1a3634: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3630) {
            ctx->pc = 0x1A36D0u;
            goto label_1a36d0;
        }
    }
    ctx->pc = 0x1A3638u;
label_1a3638:
    // 0x1a3638: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a363c:
    // 0x1a363c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3640:
    // 0x1a3640: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x1a3640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_1a3644:
    // 0x1a3644: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
label_1a3648:
    if (ctx->pc == 0x1A3648u) {
        ctx->pc = 0x1A3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3644u;
        // 0x1a3648: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A364Cu;
        goto label_1a364c;
    }
    ctx->pc = 0x1A3644u;
    {
        const bool branch_taken_0x1a3644 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3644u;
        // 0x1a3648: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3644) {
            ctx->pc = 0x1A3698u;
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A364Cu;
label_1a364c:
    // 0x1a364c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a3650:
    // 0x1a3650: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1a3654:
    if (ctx->pc == 0x1A3654u) {
        ctx->pc = 0x1A3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3650u;
        // 0x1a3654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3658u;
        goto label_1a3658;
    }
    ctx->pc = 0x1A3650u;
    {
        const bool branch_taken_0x1a3650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3650u;
        // 0x1a3654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3650) {
            ctx->pc = 0x1A3690u;
            goto label_1a3690;
        }
    }
    ctx->pc = 0x1A3658u;
label_1a3658:
    // 0x1a3658: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a3658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a365c:
    // 0x1a365c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a365cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3660:
    // 0x1a3660: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1a3660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a3664:
    // 0x1a3664: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1a3664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1a3668:
    // 0x1a3668: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1a366c:
    // 0x1a366c: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_1a3670:
    // 0x1a3670: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
label_1a3674:
    // 0x1a3674: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1a3678:
    // 0x1a3678: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1a367c:
    // 0x1a367c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a3680:
    // 0x1a3680: 0x441fff7  bgez        $v0, . + 4 + (-0x9 << 2)
label_1a3684:
    if (ctx->pc == 0x1A3684u) {
        ctx->pc = 0x1A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3680u;
        // 0x1a3684: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3688u;
        goto label_1a3688;
    }
    ctx->pc = 0x1A3680u;
    {
        const bool branch_taken_0x1a3680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3680u;
        // 0x1a3684: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3680) {
            ctx->pc = 0x1A3660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3660;
        }
    }
    ctx->pc = 0x1A3688u;
label_1a3688:
    // 0x1a3688: 0xa505000a  sh          $a1, 0xA($t0)
    ctx->pc = 0x1a3688u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 5));
label_1a368c:
    // 0x1a368c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3690:
    // 0x1a3690: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a3694:
    if (ctx->pc == 0x1A3694u) {
        ctx->pc = 0x1A3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3690u;
        // 0x1a3694: 0xa5020008  sh          $v0, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3698u;
        goto label_1a3698;
    }
    ctx->pc = 0x1A3690u;
    {
        const bool branch_taken_0x1a3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3690u;
        // 0x1a3694: 0xa5020008  sh          $v0, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3690) {
            ctx->pc = 0x1A3704u;
            goto label_1a3704;
        }
    }
    ctx->pc = 0x1A3698u;
label_1a3698:
    // 0x1a3698: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1a369c:
    if (ctx->pc == 0x1A369Cu) {
        ctx->pc = 0x1A369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3698u;
        // 0x1a369c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36A0u;
        goto label_1a36a0;
    }
    ctx->pc = 0x1A3698u;
    {
        const bool branch_taken_0x1a3698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3698u;
        // 0x1a369c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3698) {
            ctx->pc = 0x1A3704u;
            goto label_1a3704;
        }
    }
    ctx->pc = 0x1A36A0u;
label_1a36a0:
    // 0x1a36a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a36a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a36a4:
    // 0x1a36a4: 0x0  nop
    ctx->pc = 0x1a36a4u;
    // NOP
label_1a36a8:
    // 0x1a36a8: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1a36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1a36ac:
    // 0x1a36ac: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1a36acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a36b0:
    // 0x1a36b0: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_1a36b4:
    // 0x1a36b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a36b8:
    // 0x1a36b8: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1a36bc:
    // 0x1a36bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1a36c0:
    if (ctx->pc == 0x1A36C0u) {
        ctx->pc = 0x1A36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36BCu;
        // 0x1a36c0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36C4u;
        goto label_1a36c4;
    }
    ctx->pc = 0x1A36BCu;
    {
        const bool branch_taken_0x1a36bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36BCu;
        // 0x1a36c0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36bc) {
            ctx->pc = 0x1A36A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a36a8;
        }
    }
    ctx->pc = 0x1A36C4u;
label_1a36c4:
    // 0x1a36c4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a36c8:
    if (ctx->pc == 0x1A36C8u) {
        ctx->pc = 0x1A36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36C4u;
        // 0x1a36c8: 0xa505000a  sh          $a1, 0xA($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36CCu;
        goto label_1a36cc;
    }
    ctx->pc = 0x1A36C4u;
    {
        const bool branch_taken_0x1a36c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36C4u;
        // 0x1a36c8: 0xa505000a  sh          $a1, 0xA($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36c4) {
            ctx->pc = 0x1A3704u;
            goto label_1a3704;
        }
    }
    ctx->pc = 0x1A36CCu;
label_1a36cc:
    // 0x1a36cc: 0x0  nop
    ctx->pc = 0x1a36ccu;
    // NOP
label_1a36d0:
    // 0x1a36d0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_1a36d4:
    if (ctx->pc == 0x1A36D4u) {
        ctx->pc = 0x1A36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36D0u;
        // 0x1a36d4: 0x9502000a  lhu         $v0, 0xA($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36D8u;
        goto label_1a36d8;
    }
    ctx->pc = 0x1A36D0u;
    {
        const bool branch_taken_0x1a36d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a36d0) {
            ctx->pc = 0x1A36D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A36D0u;
            // 0x1a36d4: 0x9502000a  lhu         $v0, 0xA($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A36ECu;
            goto label_1a36ec;
        }
    }
    ctx->pc = 0x1A36D8u;
label_1a36d8:
    // 0x1a36d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a36dc:
    // 0x1a36dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a36dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a36e0:
    // 0x1a36e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a36e4:
    if (ctx->pc == 0x1A36E4u) {
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36E8u;
        goto label_1a36e8;
    }
    ctx->pc = 0x1A36E0u;
    {
        const bool branch_taken_0x1a36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36e0) {
            ctx->pc = 0x1A3704u;
            goto label_1a3704;
        }
    }
    ctx->pc = 0x1A36E8u;
label_1a36e8:
    // 0x1a36e8: 0x9502000a  lhu         $v0, 0xA($t0)
    ctx->pc = 0x1a36e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_1a36ec:
    // 0x1a36ec: 0x8503000a  lh          $v1, 0xA($t0)
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_1a36f0:
    // 0x1a36f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a36f4:
    // 0x1a36f4: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1a36f8:
    // 0x1a36f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a36fc:
    // 0x1a36fc: 0xa502000a  sh          $v0, 0xA($t0)
    ctx->pc = 0x1a36fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 2));
label_1a3700:
    // 0x1a3700: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a3700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a3704:
    // 0x1a3704: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_1a3708:
    if (ctx->pc == 0x1A3708u) {
        ctx->pc = 0x1A3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3704u;
        // 0x1a3708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A370Cu;
        goto label_1a370c;
    }
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3704u;
        // 0x1a3708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A3810u;
            goto label_1a3810;
        }
    }
    ctx->pc = 0x1A370Cu;
label_1a370c:
    // 0x1a370c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1a370cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3710:
    // 0x1a3710: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3714:
    // 0x1a3714: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x1a3714u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
label_1a3718:
    // 0x1a3718: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x1a3718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_1a371c:
    // 0x1a371c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1a371cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a3720:
    // 0x1a3720: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a3724:
    if (ctx->pc == 0x1A3724u) {
        ctx->pc = 0x1A3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3720u;
        // 0x1a3724: 0x84a2000e  lh          $v0, 0xE($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3728u;
        goto label_1a3728;
    }
    ctx->pc = 0x1A3720u;
    {
        const bool branch_taken_0x1a3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3720) {
            ctx->pc = 0x1A3724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3720u;
            // 0x1a3724: 0x84a2000e  lh          $v0, 0xE($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3738u;
            goto label_1a3738;
        }
    }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1a3728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a372c:
    // 0x1a372c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a372cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3730:
    // 0x1a3730: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a3734:
    if (ctx->pc == 0x1A3734u) {
        ctx->pc = 0x1A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3730u;
        // 0x1a3734: 0x84a30008  lh          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3738u;
        goto label_1a3738;
    }
    ctx->pc = 0x1A3730u;
    {
        const bool branch_taken_0x1a3730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3730u;
        // 0x1a3734: 0x84a30008  lh          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3730) {
            ctx->pc = 0x1A375Cu;
            goto label_1a375c;
        }
    }
    ctx->pc = 0x1A3738u;
label_1a3738:
    // 0x1a3738: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1a373c:
    if (ctx->pc == 0x1A373Cu) {
        ctx->pc = 0x1A373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3738u;
        // 0x1a373c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3740u;
        goto label_1a3740;
    }
    ctx->pc = 0x1A3738u;
    {
        const bool branch_taken_0x1a3738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3738) {
            ctx->pc = 0x1A373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3738u;
            // 0x1a373c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3748u;
            goto label_1a3748;
        }
    }
    ctx->pc = 0x1A3740u;
label_1a3740:
    // 0x1a3740: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a3744:
    if (ctx->pc == 0x1A3744u) {
        ctx->pc = 0x1A3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3740u;
        // 0x1a3744: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3748u;
        goto label_1a3748;
    }
    ctx->pc = 0x1A3740u;
    {
        const bool branch_taken_0x1a3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3740u;
        // 0x1a3744: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3740) {
            ctx->pc = 0x1A3758u;
            goto label_1a3758;
        }
    }
    ctx->pc = 0x1A3748u;
label_1a3748:
    // 0x1a3748: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a3748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1a374c:
    // 0x1a374c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a374cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1a3750:
    // 0x1a3750: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a3750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_1a3754:
    // 0x1a3754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3758:
    // 0x1a3758: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x1a3758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1a375c:
    // 0x1a375c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1a3760:
    // 0x1a3760: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a3760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a3764:
    // 0x1a3764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3768:
    // 0x1a3768: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1a376c:
    // 0x1a376c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1a376cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a3770:
    // 0x1a3770: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a3774:
    // 0x1a3774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a3778:
    if (ctx->pc == 0x1A3778u) {
        ctx->pc = 0x1A3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3774u;
        // 0x1a3778: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A377Cu;
        goto label_1a377c;
    }
    ctx->pc = 0x1A3774u;
    {
        const bool branch_taken_0x1a3774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3774u;
        // 0x1a3778: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3774) {
            ctx->pc = 0x1A3790u;
            goto label_1a3790;
        }
    }
    ctx->pc = 0x1A377Cu;
label_1a377c:
    // 0x1a377c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a377cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3780:
    // 0x1a3780: 0x40f809  jalr        $v0
label_1a3784:
    if (ctx->pc == 0x1A3784u) {
        ctx->pc = 0x1A3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3780u;
        // 0x1a3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3788u;
        goto label_1a3788;
    }
    ctx->pc = 0x1A3780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3788u);
        ctx->pc = 0x1A3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3780u;
        // 0x1a3784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3780u, 0x1A3788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3788u;
label_1a3788:
    // 0x1a3788: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a378c:
    if (ctx->pc == 0x1A378Cu) {
        ctx->pc = 0x1A378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3788u;
        // 0x1a378c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3790u;
        goto label_1a3790;
    }
    ctx->pc = 0x1A3788u;
    {
        const bool branch_taken_0x1a3788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3788u;
        // 0x1a378c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3788) {
            ctx->pc = 0x1A37BCu;
            goto label_1a37bc;
        }
    }
    ctx->pc = 0x1A3790u;
label_1a3790:
    // 0x1a3790: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x1a3790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
label_1a3794:
    // 0x1a3794: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a3798:
    if (ctx->pc == 0x1A3798u) {
        ctx->pc = 0x1A3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3794u;
        // 0x1a3798: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A379Cu;
        goto label_1a379c;
    }
    ctx->pc = 0x1A3794u;
    {
        const bool branch_taken_0x1a3794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3794) {
            ctx->pc = 0x1A3798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3794u;
            // 0x1a3798: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A37A8u;
            goto label_1a37a8;
        }
    }
    ctx->pc = 0x1A379Cu;
label_1a379c:
    // 0x1a379c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a37a0:
    // 0x1a37a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a37a4:
    if (ctx->pc == 0x1A37A4u) {
        ctx->pc = 0x1A37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37A0u;
        // 0x1a37a4: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37A8u;
        goto label_1a37a8;
    }
    ctx->pc = 0x1A37A0u;
    {
        const bool branch_taken_0x1a37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37A0u;
        // 0x1a37a4: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37a0) {
            ctx->pc = 0x1A37BCu;
            goto label_1a37bc;
        }
    }
    ctx->pc = 0x1A37A8u;
label_1a37a8:
    // 0x1a37a8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a37ac:
    // 0x1a37ac: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a37b0:
    // 0x1a37b0: 0xc068186  jal         func_1A0618
label_1a37b4:
    if (ctx->pc == 0x1A37B4u) {
        ctx->pc = 0x1A37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37B0u;
        // 0x1a37b4: 0x24a59220  addiu       $a1, $a1, -0x6DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37B8u;
        goto label_1a37b8;
    }
    ctx->pc = 0x1A37B0u;
    SET_GPR_U32(ctx, 31, 0x1A37B8u);
    ctx->pc = 0x1A37B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A37B0u;
    // 0x1a37b4: 0x24a59220  addiu       $a1, $a1, -0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A37B0u, 0x1A37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37B8u;
label_1a37b8:
    // 0x1a37b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a37b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a37bc:
    // 0x1a37bc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a37bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1a37c0:
    // 0x1a37c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a37c4:
    // 0x1a37c4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1a37c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a37c8:
    // 0x1a37c8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a37c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a37cc:
    // 0x1a37cc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1a37ccu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1a37d0:
    // 0x1a37d0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1a37d4:
    // 0x1a37d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a37d8:
    // 0x1a37d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a37dc:
    // 0x1a37dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1a37e0:
    // 0x1a37e0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a37e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1a37e4:
    // 0x1a37e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a37e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1a37e8:
    // 0x1a37e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a37e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a37ec:
    // 0x1a37ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a37ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a37f0:
    // 0x1a37f0: 0x0  nop
    ctx->pc = 0x1a37f0u;
    // NOP
label_1a37f4:
    // 0x1a37f4: 0x0  nop
    ctx->pc = 0x1a37f4u;
    // NOP
label_1a37f8:
    // 0x1a37f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a37f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a37fc:
    // 0x1a37fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a3800:
    if (ctx->pc == 0x1A3800u) {
        ctx->pc = 0x1A3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37FCu;
        // 0x1a3800: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3804u;
        goto label_1a3804;
    }
    ctx->pc = 0x1A37FCu;
    {
        const bool branch_taken_0x1a37fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37FCu;
        // 0x1a3800: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37fc) {
            ctx->pc = 0x1A3810u;
            goto label_1a3810;
        }
    }
    ctx->pc = 0x1A3804u;
label_1a3804:
    // 0x1a3804: 0x0  nop
    ctx->pc = 0x1a3804u;
    // NOP
label_1a3808:
    // 0x1a3808: 0xc06881e  jal         func_1A2078
label_1a380c:
    if (ctx->pc == 0x1A380Cu) {
        ctx->pc = 0x1A380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3808u;
        // 0x1a380c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3810u;
        goto label_1a3810;
    }
    ctx->pc = 0x1A3808u;
    SET_GPR_U32(ctx, 31, 0x1A3810u);
    ctx->pc = 0x1A380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3808u;
    // 0x1a380c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A3808u, 0x1A3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3810u;
label_1a3810:
    // 0x1a3810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3814:
    // 0x1a3814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3818:
    // 0x1a3818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a381c:
    // 0x1a381c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a381cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3820:
    // 0x1a3820: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a3820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a3824:
    // 0x1a3824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3828:
    // 0x1a3828: 0x3e00008  jr          $ra
label_1a382c:
    if (ctx->pc == 0x1A382Cu) {
        ctx->pc = 0x1A382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3828u;
        // 0x1a382c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3830u;
        goto label_fallthrough_0x1a3828;
    }
    ctx->pc = 0x1A3828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3828u;
        // 0x1a382c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3828:
    ctx->pc = 0x1A3830u;
}
