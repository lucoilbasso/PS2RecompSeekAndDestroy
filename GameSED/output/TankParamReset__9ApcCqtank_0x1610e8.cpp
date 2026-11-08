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

// Function: TankParamReset__9ApcCqtank
// Address: 0x1610e8 - 0x1614a0
void TankParamReset__9ApcCqtank_0x1610e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankParamReset__9ApcCqtank_0x1610e8");
#endif

    switch (ctx->pc) {
        case 0x1610e8u: goto label_1610e8;
        case 0x1610ecu: goto label_1610ec;
        case 0x1610f0u: goto label_1610f0;
        case 0x1610f4u: goto label_1610f4;
        case 0x1610f8u: goto label_1610f8;
        case 0x1610fcu: goto label_1610fc;
        case 0x161100u: goto label_161100;
        case 0x161104u: goto label_161104;
        case 0x161108u: goto label_161108;
        case 0x16110cu: goto label_16110c;
        case 0x161110u: goto label_161110;
        case 0x161114u: goto label_161114;
        case 0x161118u: goto label_161118;
        case 0x16111cu: goto label_16111c;
        case 0x161120u: goto label_161120;
        case 0x161124u: goto label_161124;
        case 0x161128u: goto label_161128;
        case 0x16112cu: goto label_16112c;
        case 0x161130u: goto label_161130;
        case 0x161134u: goto label_161134;
        case 0x161138u: goto label_161138;
        case 0x16113cu: goto label_16113c;
        case 0x161140u: goto label_161140;
        case 0x161144u: goto label_161144;
        case 0x161148u: goto label_161148;
        case 0x16114cu: goto label_16114c;
        case 0x161150u: goto label_161150;
        case 0x161154u: goto label_161154;
        case 0x161158u: goto label_161158;
        case 0x16115cu: goto label_16115c;
        case 0x161160u: goto label_161160;
        case 0x161164u: goto label_161164;
        case 0x161168u: goto label_161168;
        case 0x16116cu: goto label_16116c;
        case 0x161170u: goto label_161170;
        case 0x161174u: goto label_161174;
        case 0x161178u: goto label_161178;
        case 0x16117cu: goto label_16117c;
        case 0x161180u: goto label_161180;
        case 0x161184u: goto label_161184;
        case 0x161188u: goto label_161188;
        case 0x16118cu: goto label_16118c;
        case 0x161190u: goto label_161190;
        case 0x161194u: goto label_161194;
        case 0x161198u: goto label_161198;
        case 0x16119cu: goto label_16119c;
        case 0x1611a0u: goto label_1611a0;
        case 0x1611a4u: goto label_1611a4;
        case 0x1611a8u: goto label_1611a8;
        case 0x1611acu: goto label_1611ac;
        case 0x1611b0u: goto label_1611b0;
        case 0x1611b4u: goto label_1611b4;
        case 0x1611b8u: goto label_1611b8;
        case 0x1611bcu: goto label_1611bc;
        case 0x1611c0u: goto label_1611c0;
        case 0x1611c4u: goto label_1611c4;
        case 0x1611c8u: goto label_1611c8;
        case 0x1611ccu: goto label_1611cc;
        case 0x1611d0u: goto label_1611d0;
        case 0x1611d4u: goto label_1611d4;
        case 0x1611d8u: goto label_1611d8;
        case 0x1611dcu: goto label_1611dc;
        case 0x1611e0u: goto label_1611e0;
        case 0x1611e4u: goto label_1611e4;
        case 0x1611e8u: goto label_1611e8;
        case 0x1611ecu: goto label_1611ec;
        case 0x1611f0u: goto label_1611f0;
        case 0x1611f4u: goto label_1611f4;
        case 0x1611f8u: goto label_1611f8;
        case 0x1611fcu: goto label_1611fc;
        case 0x161200u: goto label_161200;
        case 0x161204u: goto label_161204;
        case 0x161208u: goto label_161208;
        case 0x16120cu: goto label_16120c;
        case 0x161210u: goto label_161210;
        case 0x161214u: goto label_161214;
        case 0x161218u: goto label_161218;
        case 0x16121cu: goto label_16121c;
        case 0x161220u: goto label_161220;
        case 0x161224u: goto label_161224;
        case 0x161228u: goto label_161228;
        case 0x16122cu: goto label_16122c;
        case 0x161230u: goto label_161230;
        case 0x161234u: goto label_161234;
        case 0x161238u: goto label_161238;
        case 0x16123cu: goto label_16123c;
        case 0x161240u: goto label_161240;
        case 0x161244u: goto label_161244;
        case 0x161248u: goto label_161248;
        case 0x16124cu: goto label_16124c;
        case 0x161250u: goto label_161250;
        case 0x161254u: goto label_161254;
        case 0x161258u: goto label_161258;
        case 0x16125cu: goto label_16125c;
        case 0x161260u: goto label_161260;
        case 0x161264u: goto label_161264;
        case 0x161268u: goto label_161268;
        case 0x16126cu: goto label_16126c;
        case 0x161270u: goto label_161270;
        case 0x161274u: goto label_161274;
        case 0x161278u: goto label_161278;
        case 0x16127cu: goto label_16127c;
        case 0x161280u: goto label_161280;
        case 0x161284u: goto label_161284;
        case 0x161288u: goto label_161288;
        case 0x16128cu: goto label_16128c;
        case 0x161290u: goto label_161290;
        case 0x161294u: goto label_161294;
        case 0x161298u: goto label_161298;
        case 0x16129cu: goto label_16129c;
        case 0x1612a0u: goto label_1612a0;
        case 0x1612a4u: goto label_1612a4;
        case 0x1612a8u: goto label_1612a8;
        case 0x1612acu: goto label_1612ac;
        case 0x1612b0u: goto label_1612b0;
        case 0x1612b4u: goto label_1612b4;
        case 0x1612b8u: goto label_1612b8;
        case 0x1612bcu: goto label_1612bc;
        case 0x1612c0u: goto label_1612c0;
        case 0x1612c4u: goto label_1612c4;
        case 0x1612c8u: goto label_1612c8;
        case 0x1612ccu: goto label_1612cc;
        case 0x1612d0u: goto label_1612d0;
        case 0x1612d4u: goto label_1612d4;
        case 0x1612d8u: goto label_1612d8;
        case 0x1612dcu: goto label_1612dc;
        case 0x1612e0u: goto label_1612e0;
        case 0x1612e4u: goto label_1612e4;
        case 0x1612e8u: goto label_1612e8;
        case 0x1612ecu: goto label_1612ec;
        case 0x1612f0u: goto label_1612f0;
        case 0x1612f4u: goto label_1612f4;
        case 0x1612f8u: goto label_1612f8;
        case 0x1612fcu: goto label_1612fc;
        case 0x161300u: goto label_161300;
        case 0x161304u: goto label_161304;
        case 0x161308u: goto label_161308;
        case 0x16130cu: goto label_16130c;
        case 0x161310u: goto label_161310;
        case 0x161314u: goto label_161314;
        case 0x161318u: goto label_161318;
        case 0x16131cu: goto label_16131c;
        case 0x161320u: goto label_161320;
        case 0x161324u: goto label_161324;
        case 0x161328u: goto label_161328;
        case 0x16132cu: goto label_16132c;
        case 0x161330u: goto label_161330;
        case 0x161334u: goto label_161334;
        case 0x161338u: goto label_161338;
        case 0x16133cu: goto label_16133c;
        case 0x161340u: goto label_161340;
        case 0x161344u: goto label_161344;
        case 0x161348u: goto label_161348;
        case 0x16134cu: goto label_16134c;
        case 0x161350u: goto label_161350;
        case 0x161354u: goto label_161354;
        case 0x161358u: goto label_161358;
        case 0x16135cu: goto label_16135c;
        case 0x161360u: goto label_161360;
        case 0x161364u: goto label_161364;
        case 0x161368u: goto label_161368;
        case 0x16136cu: goto label_16136c;
        case 0x161370u: goto label_161370;
        case 0x161374u: goto label_161374;
        case 0x161378u: goto label_161378;
        case 0x16137cu: goto label_16137c;
        case 0x161380u: goto label_161380;
        case 0x161384u: goto label_161384;
        case 0x161388u: goto label_161388;
        case 0x16138cu: goto label_16138c;
        case 0x161390u: goto label_161390;
        case 0x161394u: goto label_161394;
        case 0x161398u: goto label_161398;
        case 0x16139cu: goto label_16139c;
        case 0x1613a0u: goto label_1613a0;
        case 0x1613a4u: goto label_1613a4;
        case 0x1613a8u: goto label_1613a8;
        case 0x1613acu: goto label_1613ac;
        case 0x1613b0u: goto label_1613b0;
        case 0x1613b4u: goto label_1613b4;
        case 0x1613b8u: goto label_1613b8;
        case 0x1613bcu: goto label_1613bc;
        case 0x1613c0u: goto label_1613c0;
        case 0x1613c4u: goto label_1613c4;
        case 0x1613c8u: goto label_1613c8;
        case 0x1613ccu: goto label_1613cc;
        case 0x1613d0u: goto label_1613d0;
        case 0x1613d4u: goto label_1613d4;
        case 0x1613d8u: goto label_1613d8;
        case 0x1613dcu: goto label_1613dc;
        case 0x1613e0u: goto label_1613e0;
        case 0x1613e4u: goto label_1613e4;
        case 0x1613e8u: goto label_1613e8;
        case 0x1613ecu: goto label_1613ec;
        case 0x1613f0u: goto label_1613f0;
        case 0x1613f4u: goto label_1613f4;
        case 0x1613f8u: goto label_1613f8;
        case 0x1613fcu: goto label_1613fc;
        case 0x161400u: goto label_161400;
        case 0x161404u: goto label_161404;
        case 0x161408u: goto label_161408;
        case 0x16140cu: goto label_16140c;
        case 0x161410u: goto label_161410;
        case 0x161414u: goto label_161414;
        case 0x161418u: goto label_161418;
        case 0x16141cu: goto label_16141c;
        case 0x161420u: goto label_161420;
        case 0x161424u: goto label_161424;
        case 0x161428u: goto label_161428;
        case 0x16142cu: goto label_16142c;
        case 0x161430u: goto label_161430;
        case 0x161434u: goto label_161434;
        case 0x161438u: goto label_161438;
        case 0x16143cu: goto label_16143c;
        case 0x161440u: goto label_161440;
        case 0x161444u: goto label_161444;
        case 0x161448u: goto label_161448;
        case 0x16144cu: goto label_16144c;
        case 0x161450u: goto label_161450;
        case 0x161454u: goto label_161454;
        case 0x161458u: goto label_161458;
        case 0x16145cu: goto label_16145c;
        case 0x161460u: goto label_161460;
        case 0x161464u: goto label_161464;
        case 0x161468u: goto label_161468;
        case 0x16146cu: goto label_16146c;
        case 0x161470u: goto label_161470;
        case 0x161474u: goto label_161474;
        case 0x161478u: goto label_161478;
        case 0x16147cu: goto label_16147c;
        case 0x161480u: goto label_161480;
        case 0x161484u: goto label_161484;
        case 0x161488u: goto label_161488;
        case 0x16148cu: goto label_16148c;
        case 0x161490u: goto label_161490;
        case 0x161494u: goto label_161494;
        case 0x161498u: goto label_161498;
        case 0x16149cu: goto label_16149c;
        default: break;
    }

    ctx->pc = 0x1610e8u;

label_1610e8:
    // 0x1610e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1610e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1610ec:
    // 0x1610ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1610ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1610f0:
    // 0x1610f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1610f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1610f4:
    // 0x1610f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1610f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1610f8:
    // 0x1610f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1610f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1610fc:
    // 0x1610fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1610fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_161100:
    // 0x161100: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_161104:
    // 0x161104: 0x8e1301b0  lw          $s3, 0x1B0($s0)
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_161108:
    // 0x161108: 0x1a6000db  blez        $s3, . + 4 + (0xDB << 2)
label_16110c:
    if (ctx->pc == 0x16110Cu) {
        ctx->pc = 0x16110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161108u;
        // 0x16110c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161110u;
        goto label_161110;
    }
    ctx->pc = 0x161108u;
    {
        const bool branch_taken_0x161108 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161108u;
        // 0x16110c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161108) {
            ctx->pc = 0x161478u;
            goto label_161478;
        }
    }
    ctx->pc = 0x161110u;
label_161110:
    // 0x161110: 0x8e0401b4  lw          $a0, 0x1B4($s0)
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_161114:
    // 0x161114: 0x0  nop
    ctx->pc = 0x161114u;
    // NOP
label_161118:
    // 0x161118: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_16111c:
    // 0x16111c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x16111cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_161120:
    // 0x161120: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161124:
    // 0x161124: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_161128:
    // 0x161128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16112c:
    // 0x16112c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_161130:
    // 0x161130: 0x2c83000d  sltiu       $v1, $a0, 0xD
    ctx->pc = 0x161130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_161134:
    // 0x161134: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_161138:
    if (ctx->pc == 0x161138u) {
        ctx->pc = 0x161138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161134u;
        // 0x161138: 0xac520c04  sw          $s2, 0xC04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3076), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16113Cu;
        goto label_16113c;
    }
    ctx->pc = 0x161134u;
    {
        const bool branch_taken_0x161134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161134u;
        // 0x161138: 0xac520c04  sw          $s2, 0xC04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3076), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161134) {
            ctx->pc = 0x161448u;
            goto label_161448;
        }
    }
    ctx->pc = 0x16113Cu;
label_16113c:
    // 0x16113c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_161140:
    // 0x161140: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_161144:
    // 0x161144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_161148:
    // 0x161148: 0x8c636ec0  lw          $v1, 0x6EC0($v1)
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
label_16114c:
    // 0x16114c: 0x600008  jr          $v1
label_161150:
    if (ctx->pc == 0x161150u) {
        ctx->pc = 0x161154u;
        goto label_161154;
    }
    ctx->pc = 0x16114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161158u: goto label_161158;
            case 0x161168u: goto label_161168;
            case 0x161178u: goto label_161178;
            case 0x161188u: goto label_161188;
            case 0x1611D0u: goto label_1611d0;
            case 0x161230u: goto label_161230;
            case 0x161298u: goto label_161298;
            case 0x161400u: goto label_161400;
            case 0x161448u: goto label_161448;
            case 0x161468u: goto label_161468;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16114Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x161154u;
label_161154:
    // 0x161154: 0x0  nop
    ctx->pc = 0x161154u;
    // NOP
label_161158:
    // 0x161158: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16115c:
    // 0x16115c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_161160:
    if (ctx->pc == 0x161160u) {
        ctx->pc = 0x161160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16115Cu;
        // 0x161160: 0x26041a30  addiu       $a0, $s0, 0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161164u;
        goto label_161164;
    }
    ctx->pc = 0x16115Cu;
    {
        const bool branch_taken_0x16115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16115Cu;
        // 0x161160: 0x26041a30  addiu       $a0, $s0, 0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16115c) {
            ctx->pc = 0x161218u;
            goto label_161218;
        }
    }
    ctx->pc = 0x161164u;
label_161164:
    // 0x161164: 0x0  nop
    ctx->pc = 0x161164u;
    // NOP
label_161168:
    // 0x161168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16116c:
    // 0x16116c: 0x100000be  b           . + 4 + (0xBE << 2)
label_161170:
    if (ctx->pc == 0x161170u) {
        ctx->pc = 0x161170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16116Cu;
        // 0x161170: 0xae021a60  sw          $v0, 0x1A60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161174u;
        goto label_161174;
    }
    ctx->pc = 0x16116Cu;
    {
        const bool branch_taken_0x16116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16116Cu;
        // 0x161170: 0xae021a60  sw          $v0, 0x1A60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16116c) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x161174u;
label_161174:
    // 0x161174: 0x0  nop
    ctx->pc = 0x161174u;
    // NOP
label_161178:
    // 0x161178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16117c:
    // 0x16117c: 0x100000ba  b           . + 4 + (0xBA << 2)
label_161180:
    if (ctx->pc == 0x161180u) {
        ctx->pc = 0x161180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16117Cu;
        // 0x161180: 0xae021a64  sw          $v0, 0x1A64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161184u;
        goto label_161184;
    }
    ctx->pc = 0x16117Cu;
    {
        const bool branch_taken_0x16117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16117Cu;
        // 0x161180: 0xae021a64  sw          $v0, 0x1A64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16117c) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x161184u;
label_161184:
    // 0x161184: 0x0  nop
    ctx->pc = 0x161184u;
    // NOP
label_161188:
    // 0x161188: 0x26061a74  addiu       $a2, $s0, 0x1A74
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6772));
label_16118c:
    // 0x16118c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161190:
    // 0x161190: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_161194:
    // 0x161194: 0x26041a80  addiu       $a0, $s0, 0x1A80
    ctx->pc = 0x161194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6784));
label_161198:
    // 0x161198: 0x24e500d0  addiu       $a1, $a3, 0xD0
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
label_16119c:
    // 0x16119c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1611a0:
    // 0x1611a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1611a4:
    // 0x1611a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1611a8:
    // 0x1611a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1611a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1611ac:
    // 0x1611ac: 0xac671a68  sw          $a3, 0x1A68($v1)
    ctx->pc = 0x1611acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6760), GPR_U32(ctx, 7));
label_1611b0:
    // 0x1611b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1611b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1611b4:
    // 0x1611b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1611b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1611b8:
    // 0x1611b8: 0x26031a90  addiu       $v1, $s0, 0x1A90
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6800));
label_1611bc:
    // 0x1611bc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1611bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1611c0:
    // 0x1611c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1611c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1611c4:
    // 0x1611c4: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_1611c8:
    if (ctx->pc == 0x1611C8u) {
        ctx->pc = 0x1611C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611C4u;
        // 0x1611c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1611CCu;
        goto label_1611cc;
    }
    ctx->pc = 0x1611C4u;
    {
        const bool branch_taken_0x1611c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611C4u;
        // 0x1611c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611c4) {
            ctx->pc = 0x16146Cu;
            goto label_16146c;
        }
    }
    ctx->pc = 0x1611CCu;
label_1611cc:
    // 0x1611cc: 0x0  nop
    ctx->pc = 0x1611ccu;
    // NOP
label_1611d0:
    // 0x1611d0: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x1611d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
label_1611d4:
    // 0x1611d4: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x1611d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_1611d8:
    // 0x1611d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1611dc:
    if (ctx->pc == 0x1611DCu) {
        ctx->pc = 0x1611DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D8u;
        // 0x1611dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1611E0u;
        goto label_1611e0;
    }
    ctx->pc = 0x1611D8u;
    {
        const bool branch_taken_0x1611d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D8u;
        // 0x1611dc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611d8) {
            ctx->pc = 0x161200u;
            goto label_161200;
        }
    }
    ctx->pc = 0x1611E0u;
label_1611e0:
    // 0x1611e0: 0x26040cf0  addiu       $a0, $s0, 0xCF0
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3312));
label_1611e4:
    // 0x1611e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1611e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1611e8:
    // 0x1611e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1611ec:
    // 0x1611ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1611f0:
    // 0x1611f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1611f4:
    // 0x1611f4: 0xac520cf4  sw          $s2, 0xCF4($v0)
    ctx->pc = 0x1611f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 18));
label_1611f8:
    // 0x1611f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1611fc:
    if (ctx->pc == 0x1611FCu) {
        ctx->pc = 0x1611FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611F8u;
        // 0x1611fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161200u;
        goto label_161200;
    }
    ctx->pc = 0x1611F8u;
    {
        const bool branch_taken_0x1611f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611F8u;
        // 0x1611fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611f8) {
            ctx->pc = 0x161210u;
            goto label_161210;
        }
    }
    ctx->pc = 0x161200u;
label_161200:
    // 0x161200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161204:
    // 0x161204: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
label_161208:
    // 0x161208: 0xc068186  jal         func_1A0618
label_16120c:
    if (ctx->pc == 0x16120Cu) {
        ctx->pc = 0x16120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161208u;
        // 0x16120c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161210u;
        goto label_161210;
    }
    ctx->pc = 0x161208u;
    SET_GPR_U32(ctx, 31, 0x161210u);
    ctx->pc = 0x16120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161208u;
    // 0x16120c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x161208u, 0x161210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161210u;
label_161210:
    // 0x161210: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161214:
    // 0x161214: 0x26041a40  addiu       $a0, $s0, 0x1A40
    ctx->pc = 0x161214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6720));
label_161218:
    // 0x161218: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_16121c:
    // 0x16121c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16121cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_161220:
    // 0x161220: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x161220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_161224:
    // 0x161224: 0x10000091  b           . + 4 + (0x91 << 2)
label_161228:
    if (ctx->pc == 0x161228u) {
        ctx->pc = 0x161228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161224u;
        // 0x161228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16122Cu;
        goto label_16122c;
    }
    ctx->pc = 0x161224u;
    {
        const bool branch_taken_0x161224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161224u;
        // 0x161228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161224) {
            ctx->pc = 0x16146Cu;
            goto label_16146c;
        }
    }
    ctx->pc = 0x16122Cu;
label_16122c:
    // 0x16122c: 0x0  nop
    ctx->pc = 0x16122cu;
    // NOP
label_161230:
    // 0x161230: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
label_161234:
    // 0x161234: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x161234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_161238:
    // 0x161238: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16123c:
    if (ctx->pc == 0x16123Cu) {
        ctx->pc = 0x16123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161238u;
        // 0x16123c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161240u;
        goto label_161240;
    }
    ctx->pc = 0x161238u;
    {
        const bool branch_taken_0x161238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161238u;
        // 0x16123c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161238) {
            ctx->pc = 0x161260u;
            goto label_161260;
        }
    }
    ctx->pc = 0x161240u;
label_161240:
    // 0x161240: 0x26040cf0  addiu       $a0, $s0, 0xCF0
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3312));
label_161244:
    // 0x161244: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161248:
    // 0x161248: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16124c:
    // 0x16124c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_161250:
    // 0x161250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x161250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_161254:
    // 0x161254: 0xac520cf4  sw          $s2, 0xCF4($v0)
    ctx->pc = 0x161254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 18));
label_161258:
    // 0x161258: 0x10000005  b           . + 4 + (0x5 << 2)
label_16125c:
    if (ctx->pc == 0x16125Cu) {
        ctx->pc = 0x16125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161258u;
        // 0x16125c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161260u;
        goto label_161260;
    }
    ctx->pc = 0x161258u;
    {
        const bool branch_taken_0x161258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161258u;
        // 0x16125c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161258) {
            ctx->pc = 0x161270u;
            goto label_161270;
        }
    }
    ctx->pc = 0x161260u;
label_161260:
    // 0x161260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161264:
    // 0x161264: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x161264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
label_161268:
    // 0x161268: 0xc068186  jal         func_1A0618
label_16126c:
    if (ctx->pc == 0x16126Cu) {
        ctx->pc = 0x16126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161268u;
        // 0x16126c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161270u;
        goto label_161270;
    }
    ctx->pc = 0x161268u;
    SET_GPR_U32(ctx, 31, 0x161270u);
    ctx->pc = 0x16126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161268u;
    // 0x16126c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x161268u, 0x161270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161270u;
label_161270:
    // 0x161270: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161274:
    // 0x161274: 0x26041a50  addiu       $a0, $s0, 0x1A50
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6736));
label_161278:
    // 0x161278: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_16127c:
    // 0x16127c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16127cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_161280:
    // 0x161280: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x161280u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_161284:
    // 0x161284: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x161284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161288:
    // 0x161288: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x161288u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_16128c:
    // 0x16128c: 0xe6001ac0  swc1        $f0, 0x1AC0($s0)
    ctx->pc = 0x16128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6848), bits); }
label_161290:
    // 0x161290: 0x10000075  b           . + 4 + (0x75 << 2)
label_161294:
    if (ctx->pc == 0x161294u) {
        ctx->pc = 0x161294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161290u;
        // 0x161294: 0xe6011ac4  swc1        $f1, 0x1AC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161298u;
        goto label_161298;
    }
    ctx->pc = 0x161290u;
    {
        const bool branch_taken_0x161290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161290u;
        // 0x161294: 0xe6011ac4  swc1        $f1, 0x1AC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161290) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x161298u;
label_161298:
    // 0x161298: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x161298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
label_16129c:
    // 0x16129c: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x16129cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_1612a0:
    // 0x1612a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1612a4:
    if (ctx->pc == 0x1612A4u) {
        ctx->pc = 0x1612A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612A0u;
        // 0x1612a4: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612A8u;
        goto label_1612a8;
    }
    ctx->pc = 0x1612A0u;
    {
        const bool branch_taken_0x1612a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612A0u;
        // 0x1612a4: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612a0) {
            ctx->pc = 0x1612C8u;
            goto label_1612c8;
        }
    }
    ctx->pc = 0x1612A8u;
label_1612a8:
    // 0x1612a8: 0x26040cf0  addiu       $a0, $s0, 0xCF0
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3312));
label_1612ac:
    // 0x1612ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1612b0:
    // 0x1612b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1612b4:
    // 0x1612b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1612b8:
    // 0x1612b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1612bc:
    // 0x1612bc: 0xac520cf4  sw          $s2, 0xCF4($v0)
    ctx->pc = 0x1612bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3316), GPR_U32(ctx, 18));
label_1612c0:
    // 0x1612c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1612c4:
    if (ctx->pc == 0x1612C4u) {
        ctx->pc = 0x1612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612C0u;
        // 0x1612c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612C8u;
        goto label_1612c8;
    }
    ctx->pc = 0x1612C0u;
    {
        const bool branch_taken_0x1612c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612C0u;
        // 0x1612c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612c0) {
            ctx->pc = 0x1612D8u;
            goto label_1612d8;
        }
    }
    ctx->pc = 0x1612C8u;
label_1612c8:
    // 0x1612c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1612c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1612cc:
    // 0x1612cc: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x1612ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
label_1612d0:
    // 0x1612d0: 0xc068186  jal         func_1A0618
label_1612d4:
    if (ctx->pc == 0x1612D4u) {
        ctx->pc = 0x1612D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612D0u;
        // 0x1612d4: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612D8u;
        goto label_1612d8;
    }
    ctx->pc = 0x1612D0u;
    SET_GPR_U32(ctx, 31, 0x1612D8u);
    ctx->pc = 0x1612D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1612D0u;
    // 0x1612d4: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1612D0u, 0x1612D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612D8u;
label_1612d8:
    // 0x1612d8: 0x260911b0  addiu       $t1, $s0, 0x11B0
    ctx->pc = 0x1612d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4528));
label_1612dc:
    // 0x1612dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1612dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1612e0:
    // 0x1612e0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1612e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1612e4:
    // 0x1612e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1612e8:
    // 0x1612e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1612e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1612ec:
    // 0x1612ec: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1612f0:
    // 0x1612f0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1612f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_1612f4:
    // 0x1612f4: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x1612f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1612f8:
    // 0x1612f8: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x1612f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_1612fc:
    // 0x1612fc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_161300:
    // 0x161300: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x161300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_161304:
    // 0x161304: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_161308:
    // 0x161308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16130c:
    if (ctx->pc == 0x16130Cu) {
        ctx->pc = 0x16130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161308u;
        // 0x16130c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161310u;
        goto label_161310;
    }
    ctx->pc = 0x161308u;
    {
        const bool branch_taken_0x161308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161308u;
        // 0x16130c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161308) {
            ctx->pc = 0x161320u;
            goto label_161320;
        }
    }
    ctx->pc = 0x161310u;
label_161310:
    // 0x161310: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_161314:
    // 0x161314: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_161318:
    // 0x161318: 0x10000002  b           . + 4 + (0x2 << 2)
label_16131c:
    if (ctx->pc == 0x16131Cu) {
        ctx->pc = 0x16131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161318u;
        // 0x16131c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161320u;
        goto label_161320;
    }
    ctx->pc = 0x161318u;
    {
        const bool branch_taken_0x161318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161318u;
        // 0x16131c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161318) {
            ctx->pc = 0x161324u;
            goto label_161324;
        }
    }
    ctx->pc = 0x161320u;
label_161320:
    // 0x161320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161324:
    // 0x161324: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161328:
    // 0x161328: 0x25050030  addiu       $a1, $t0, 0x30
    ctx->pc = 0x161328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_16132c:
    // 0x16132c: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x16132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161330:
    // 0x161330: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161334:
    // 0x161334: 0x0  nop
    ctx->pc = 0x161334u;
    // NOP
label_161338:
    // 0x161338: 0x0  nop
    ctx->pc = 0x161338u;
    // NOP
label_16133c:
    // 0x16133c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16133cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_161340:
    // 0x161340: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x161340u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_161344:
    // 0x161344: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x161344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_161348:
    // 0x161348: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x161348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_16134c:
    // 0x16134c: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x16134cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_161350:
    // 0x161350: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x161350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_161354:
    // 0x161354: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x161354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_161358:
    // 0x161358: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x161358u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_16135c:
    // 0x16135c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x16135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_161360:
    // 0x161360: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_161364:
    if (ctx->pc == 0x161364u) {
        ctx->pc = 0x161364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161360u;
        // 0x161364: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161368u;
        goto label_161368;
    }
    ctx->pc = 0x161360u;
    {
        const bool branch_taken_0x161360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161360) {
            ctx->pc = 0x161364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161360u;
            // 0x161364: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x161384u;
            goto label_161384;
        }
    }
    ctx->pc = 0x161368u;
label_161368:
    // 0x161368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16136c:
    // 0x16136c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_161370:
    // 0x161370: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x161370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_161374:
    // 0x161374: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x161374u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_161378:
    // 0x161378: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x161378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16137c:
    // 0x16137c: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x16137cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_161380:
    // 0x161380: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x161380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161384:
    // 0x161384: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x161384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161388:
    // 0x161388: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_16138c:
    if (ctx->pc == 0x16138Cu) {
        ctx->pc = 0x16138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161388u;
        // 0x16138c: 0x8d230008  lw          $v1, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161390u;
        goto label_161390;
    }
    ctx->pc = 0x161388u;
    {
        const bool branch_taken_0x161388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161388) {
            ctx->pc = 0x16138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161388u;
            // 0x16138c: 0x8d230008  lw          $v1, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1613C8u;
            goto label_1613c8;
        }
    }
    ctx->pc = 0x161390u;
label_161390:
    // 0x161390: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x161390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_161394:
    // 0x161394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_161398:
    // 0x161398: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_16139c:
    if (ctx->pc == 0x16139Cu) {
        ctx->pc = 0x16139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161398u;
        // 0x16139c: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613A0u;
        goto label_1613a0;
    }
    ctx->pc = 0x161398u;
    {
        const bool branch_taken_0x161398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161398u;
        // 0x16139c: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161398) {
            ctx->pc = 0x1613B8u;
            goto label_1613b8;
        }
    }
    ctx->pc = 0x1613A0u;
label_1613a0:
    // 0x1613a0: 0xc5010038  lwc1        $f1, 0x38($t0)
    ctx->pc = 0x1613a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1613a4:
    // 0x1613a4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1613a8:
    // 0x1613a8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1613a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1613ac:
    // 0x1613ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1613acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1613b0:
    // 0x1613b0: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
label_1613b4:
    if (ctx->pc == 0x1613B4u) {
        ctx->pc = 0x1613B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613B0u;
        // 0x1613b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613B8u;
        goto label_1613b8;
    }
    ctx->pc = 0x1613B0u;
    {
        const bool branch_taken_0x1613b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1613b0) {
            ctx->pc = 0x1613B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1613B0u;
            // 0x1613b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16146Cu;
            goto label_16146c;
        }
    }
    ctx->pc = 0x1613B8u;
label_1613b8:
    // 0x1613b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1613bc:
    // 0x1613bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1613c0:
    // 0x1613c0: 0x10000029  b           . + 4 + (0x29 << 2)
label_1613c4:
    if (ctx->pc == 0x1613C4u) {
        ctx->pc = 0x1613C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C0u;
        // 0x1613c4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613C8u;
        goto label_1613c8;
    }
    ctx->pc = 0x1613C0u;
    {
        const bool branch_taken_0x1613c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C0u;
        // 0x1613c4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c0) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x1613C8u;
label_1613c8:
    // 0x1613c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1613cc:
    // 0x1613cc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1613d0:
    if (ctx->pc == 0x1613D0u) {
        ctx->pc = 0x1613D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613CCu;
        // 0x1613d0: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613D4u;
        goto label_1613d4;
    }
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1613D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613CCu;
        // 0x1613d0: 0x31180  sll         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x1613ECu;
            goto label_1613ec;
        }
    }
    ctx->pc = 0x1613D4u;
label_1613d4:
    // 0x1613d4: 0xc5010038  lwc1        $f1, 0x38($t0)
    ctx->pc = 0x1613d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1613d8:
    // 0x1613d8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1613dc:
    // 0x1613dc: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1613dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1613e0:
    // 0x1613e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1613e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1613e4:
    // 0x1613e4: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_1613e8:
    if (ctx->pc == 0x1613E8u) {
        ctx->pc = 0x1613E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613E4u;
        // 0x1613e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613ECu;
        goto label_1613ec;
    }
    ctx->pc = 0x1613E4u;
    {
        const bool branch_taken_0x1613e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1613e4) {
            ctx->pc = 0x1613E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1613E4u;
            // 0x1613e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16146Cu;
            goto label_16146c;
        }
    }
    ctx->pc = 0x1613ECu;
label_1613ec:
    // 0x1613ec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1613ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1613f0:
    // 0x1613f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1613f4:
    // 0x1613f4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1613f8:
    if (ctx->pc == 0x1613F8u) {
        ctx->pc = 0x1613F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613F4u;
        // 0x1613f8: 0xad220008  sw          $v0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613FCu;
        goto label_1613fc;
    }
    ctx->pc = 0x1613F4u;
    {
        const bool branch_taken_0x1613f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613F4u;
        // 0x1613f8: 0xad220008  sw          $v0, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613f4) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x1613FCu;
label_1613fc:
    // 0x1613fc: 0x0  nop
    ctx->pc = 0x1613fcu;
    // NOP
label_161400:
    // 0x161400: 0x8e020ccc  lw          $v0, 0xCCC($s0)
    ctx->pc = 0x161400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3276)));
label_161404:
    // 0x161404: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x161404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_161408:
    // 0x161408: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16140c:
    if (ctx->pc == 0x16140Cu) {
        ctx->pc = 0x16140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161408u;
        // 0x16140c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161410u;
        goto label_161410;
    }
    ctx->pc = 0x161408u;
    {
        const bool branch_taken_0x161408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161408u;
        // 0x16140c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161408) {
            ctx->pc = 0x161430u;
            goto label_161430;
        }
    }
    ctx->pc = 0x161410u;
label_161410:
    // 0x161410: 0x26040ccc  addiu       $a0, $s0, 0xCCC
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3276));
label_161414:
    // 0x161414: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161418:
    // 0x161418: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16141c:
    // 0x16141c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_161420:
    // 0x161420: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_161424:
    // 0x161424: 0xac520cd0  sw          $s2, 0xCD0($v0)
    ctx->pc = 0x161424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3280), GPR_U32(ctx, 18));
label_161428:
    // 0x161428: 0x1000000f  b           . + 4 + (0xF << 2)
label_16142c:
    if (ctx->pc == 0x16142Cu) {
        ctx->pc = 0x16142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161428u;
        // 0x16142c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161430u;
        goto label_161430;
    }
    ctx->pc = 0x161428u;
    {
        const bool branch_taken_0x161428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161428u;
        // 0x16142c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161428) {
            ctx->pc = 0x161468u;
            goto label_161468;
        }
    }
    ctx->pc = 0x161430u;
label_161430:
    // 0x161430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161434:
    // 0x161434: 0x24a56ea8  addiu       $a1, $a1, 0x6EA8
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28328));
label_161438:
    // 0x161438: 0xc068186  jal         func_1A0618
label_16143c:
    if (ctx->pc == 0x16143Cu) {
        ctx->pc = 0x16143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161438u;
        // 0x16143c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161440u;
        goto label_161440;
    }
    ctx->pc = 0x161438u;
    SET_GPR_U32(ctx, 31, 0x161440u);
    ctx->pc = 0x16143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161438u;
    // 0x16143c: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x161438u, 0x161440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161440u;
label_161440:
    // 0x161440: 0x1000000a  b           . + 4 + (0xA << 2)
label_161444:
    if (ctx->pc == 0x161444u) {
        ctx->pc = 0x161444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161440u;
        // 0x161444: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161448u;
        goto label_161448;
    }
    ctx->pc = 0x161440u;
    {
        const bool branch_taken_0x161440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161440u;
        // 0x161444: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161440) {
            ctx->pc = 0x16146Cu;
            goto label_16146c;
        }
    }
    ctx->pc = 0x161448u;
label_161448:
    // 0x161448: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x161448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16144c:
    // 0x16144c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161450:
    // 0x161450: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_161454:
    // 0x161454: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_161458:
    // 0x161458: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x161458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16145c:
    // 0x16145c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_161460:
    // 0x161460: 0x60f809  jalr        $v1
label_161464:
    if (ctx->pc == 0x161464u) {
        ctx->pc = 0x161464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161460u;
        // 0x161464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161468u;
        goto label_161468;
    }
    ctx->pc = 0x161460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161468u);
        ctx->pc = 0x161464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161460u;
        // 0x161464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161460u, 0x161468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161468u;
label_161468:
    // 0x161468: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16146c:
    // 0x16146c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x16146cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_161470:
    // 0x161470: 0x5440ff29  bnel        $v0, $zero, . + 4 + (-0xD7 << 2)
label_161474:
    if (ctx->pc == 0x161474u) {
        ctx->pc = 0x161474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161470u;
        // 0x161474: 0x8e0401b4  lw          $a0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161478u;
        goto label_161478;
    }
    ctx->pc = 0x161470u;
    {
        const bool branch_taken_0x161470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161470) {
            ctx->pc = 0x161474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161470u;
            // 0x161474: 0x8e0401b4  lw          $a0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161118;
        }
    }
    ctx->pc = 0x161478u;
label_161478:
    // 0x161478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16147c:
    // 0x16147c: 0xc058ab0  jal         func_162AC0
label_161480:
    if (ctx->pc == 0x161480u) {
        ctx->pc = 0x161480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16147Cu;
        // 0x161480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161484u;
        goto label_161484;
    }
    ctx->pc = 0x16147Cu;
    SET_GPR_U32(ctx, 31, 0x161484u);
    ctx->pc = 0x161480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16147Cu;
    // 0x161480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162AC0u, 0x16147Cu, 0x161484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161484u;
label_161484:
    // 0x161484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161488:
    // 0x161488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16148c:
    // 0x16148c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16148cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161490:
    // 0x161490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x161490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_161494:
    // 0x161494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161498:
    // 0x161498: 0x3e00008  jr          $ra
label_16149c:
    if (ctx->pc == 0x16149Cu) {
        ctx->pc = 0x16149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161498u;
        // 0x16149c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1614A0u;
        goto label_fallthrough_0x161498;
    }
    ctx->pc = 0x161498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161498u;
        // 0x16149c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x161498:
    ctx->pc = 0x1614A0u;
}
