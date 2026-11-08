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

// Function: SMoverMotionEntry__FP15BsSCDEntControlP8ApcMoveri
// Address: 0x16c100 - 0x16c4a0
void SMoverMotionEntry__FP15BsSCDEntControlP8ApcMoveri_0x16c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SMoverMotionEntry__FP15BsSCDEntControlP8ApcMoveri_0x16c100");
#endif

    switch (ctx->pc) {
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        case 0x16c108u: goto label_16c108;
        case 0x16c10cu: goto label_16c10c;
        case 0x16c110u: goto label_16c110;
        case 0x16c114u: goto label_16c114;
        case 0x16c118u: goto label_16c118;
        case 0x16c11cu: goto label_16c11c;
        case 0x16c120u: goto label_16c120;
        case 0x16c124u: goto label_16c124;
        case 0x16c128u: goto label_16c128;
        case 0x16c12cu: goto label_16c12c;
        case 0x16c130u: goto label_16c130;
        case 0x16c134u: goto label_16c134;
        case 0x16c138u: goto label_16c138;
        case 0x16c13cu: goto label_16c13c;
        case 0x16c140u: goto label_16c140;
        case 0x16c144u: goto label_16c144;
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        case 0x16c168u: goto label_16c168;
        case 0x16c16cu: goto label_16c16c;
        case 0x16c170u: goto label_16c170;
        case 0x16c174u: goto label_16c174;
        case 0x16c178u: goto label_16c178;
        case 0x16c17cu: goto label_16c17c;
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        case 0x16c27cu: goto label_16c27c;
        case 0x16c280u: goto label_16c280;
        case 0x16c284u: goto label_16c284;
        case 0x16c288u: goto label_16c288;
        case 0x16c28cu: goto label_16c28c;
        case 0x16c290u: goto label_16c290;
        case 0x16c294u: goto label_16c294;
        case 0x16c298u: goto label_16c298;
        case 0x16c29cu: goto label_16c29c;
        case 0x16c2a0u: goto label_16c2a0;
        case 0x16c2a4u: goto label_16c2a4;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2acu: goto label_16c2ac;
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2b4u: goto label_16c2b4;
        case 0x16c2b8u: goto label_16c2b8;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c0u: goto label_16c2c0;
        case 0x16c2c4u: goto label_16c2c4;
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2d0u: goto label_16c2d0;
        case 0x16c2d4u: goto label_16c2d4;
        case 0x16c2d8u: goto label_16c2d8;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e0u: goto label_16c2e0;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2e8u: goto label_16c2e8;
        case 0x16c2ecu: goto label_16c2ec;
        case 0x16c2f0u: goto label_16c2f0;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2f8u: goto label_16c2f8;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c300u: goto label_16c300;
        case 0x16c304u: goto label_16c304;
        case 0x16c308u: goto label_16c308;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c310u: goto label_16c310;
        case 0x16c314u: goto label_16c314;
        case 0x16c318u: goto label_16c318;
        case 0x16c31cu: goto label_16c31c;
        case 0x16c320u: goto label_16c320;
        case 0x16c324u: goto label_16c324;
        case 0x16c328u: goto label_16c328;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c330u: goto label_16c330;
        case 0x16c334u: goto label_16c334;
        case 0x16c338u: goto label_16c338;
        case 0x16c33cu: goto label_16c33c;
        case 0x16c340u: goto label_16c340;
        case 0x16c344u: goto label_16c344;
        case 0x16c348u: goto label_16c348;
        case 0x16c34cu: goto label_16c34c;
        case 0x16c350u: goto label_16c350;
        case 0x16c354u: goto label_16c354;
        case 0x16c358u: goto label_16c358;
        case 0x16c35cu: goto label_16c35c;
        case 0x16c360u: goto label_16c360;
        case 0x16c364u: goto label_16c364;
        case 0x16c368u: goto label_16c368;
        case 0x16c36cu: goto label_16c36c;
        case 0x16c370u: goto label_16c370;
        case 0x16c374u: goto label_16c374;
        case 0x16c378u: goto label_16c378;
        case 0x16c37cu: goto label_16c37c;
        case 0x16c380u: goto label_16c380;
        case 0x16c384u: goto label_16c384;
        case 0x16c388u: goto label_16c388;
        case 0x16c38cu: goto label_16c38c;
        case 0x16c390u: goto label_16c390;
        case 0x16c394u: goto label_16c394;
        case 0x16c398u: goto label_16c398;
        case 0x16c39cu: goto label_16c39c;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3a4u: goto label_16c3a4;
        case 0x16c3a8u: goto label_16c3a8;
        case 0x16c3acu: goto label_16c3ac;
        case 0x16c3b0u: goto label_16c3b0;
        case 0x16c3b4u: goto label_16c3b4;
        case 0x16c3b8u: goto label_16c3b8;
        case 0x16c3bcu: goto label_16c3bc;
        case 0x16c3c0u: goto label_16c3c0;
        case 0x16c3c4u: goto label_16c3c4;
        case 0x16c3c8u: goto label_16c3c8;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d0u: goto label_16c3d0;
        case 0x16c3d4u: goto label_16c3d4;
        case 0x16c3d8u: goto label_16c3d8;
        case 0x16c3dcu: goto label_16c3dc;
        case 0x16c3e0u: goto label_16c3e0;
        case 0x16c3e4u: goto label_16c3e4;
        case 0x16c3e8u: goto label_16c3e8;
        case 0x16c3ecu: goto label_16c3ec;
        case 0x16c3f0u: goto label_16c3f0;
        case 0x16c3f4u: goto label_16c3f4;
        case 0x16c3f8u: goto label_16c3f8;
        case 0x16c3fcu: goto label_16c3fc;
        case 0x16c400u: goto label_16c400;
        case 0x16c404u: goto label_16c404;
        case 0x16c408u: goto label_16c408;
        case 0x16c40cu: goto label_16c40c;
        case 0x16c410u: goto label_16c410;
        case 0x16c414u: goto label_16c414;
        case 0x16c418u: goto label_16c418;
        case 0x16c41cu: goto label_16c41c;
        case 0x16c420u: goto label_16c420;
        case 0x16c424u: goto label_16c424;
        case 0x16c428u: goto label_16c428;
        case 0x16c42cu: goto label_16c42c;
        case 0x16c430u: goto label_16c430;
        case 0x16c434u: goto label_16c434;
        case 0x16c438u: goto label_16c438;
        case 0x16c43cu: goto label_16c43c;
        case 0x16c440u: goto label_16c440;
        case 0x16c444u: goto label_16c444;
        case 0x16c448u: goto label_16c448;
        case 0x16c44cu: goto label_16c44c;
        case 0x16c450u: goto label_16c450;
        case 0x16c454u: goto label_16c454;
        case 0x16c458u: goto label_16c458;
        case 0x16c45cu: goto label_16c45c;
        case 0x16c460u: goto label_16c460;
        case 0x16c464u: goto label_16c464;
        case 0x16c468u: goto label_16c468;
        case 0x16c46cu: goto label_16c46c;
        case 0x16c470u: goto label_16c470;
        case 0x16c474u: goto label_16c474;
        case 0x16c478u: goto label_16c478;
        case 0x16c47cu: goto label_16c47c;
        case 0x16c480u: goto label_16c480;
        case 0x16c484u: goto label_16c484;
        case 0x16c488u: goto label_16c488;
        case 0x16c48cu: goto label_16c48c;
        case 0x16c490u: goto label_16c490;
        case 0x16c494u: goto label_16c494;
        case 0x16c498u: goto label_16c498;
        case 0x16c49cu: goto label_16c49c;
        default: break;
    }

    ctx->pc = 0x16c100u;

label_16c100:
    // 0x16c100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16c104:
    // 0x16c104: 0x24c6fffa  addiu       $a2, $a2, -0x6
    ctx->pc = 0x16c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
label_16c108:
    // 0x16c108: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x16c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_16c10c:
    // 0x16c10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c110:
    // 0x16c110: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x16c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_16c114:
    // 0x16c114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16c114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c118:
    // 0x16c118: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x16c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_16c11c:
    // 0x16c11c: 0x2cc3000d  sltiu       $v1, $a2, 0xD
    ctx->pc = 0x16c11cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_16c120:
    // 0x16c120: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x16c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_16c124:
    // 0x16c124: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16c128:
    // 0x16c128: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
label_16c12c:
    if (ctx->pc == 0x16C12Cu) {
        ctx->pc = 0x16C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C128u;
        // 0x16c12c: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C130u;
        goto label_16c130;
    }
    ctx->pc = 0x16C128u;
    {
        const bool branch_taken_0x16c128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C128u;
        // 0x16c12c: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c128) {
            ctx->pc = 0x16C488u;
            goto label_16c488;
        }
    }
    ctx->pc = 0x16C130u;
label_16c130:
    // 0x16c130: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16c130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_16c134:
    // 0x16c134: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16c134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16c138:
    // 0x16c138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16c13c:
    // 0x16c13c: 0x8c637410  lw          $v1, 0x7410($v1)
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29712)));
label_16c140:
    // 0x16c140: 0x600008  jr          $v1
label_16c144:
    if (ctx->pc == 0x16C144u) {
        ctx->pc = 0x16C148u;
        goto label_16c148;
    }
    ctx->pc = 0x16C140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C148u: goto label_16c148;
            case 0x16C168u: goto label_16c168;
            case 0x16C170u: goto label_16c170;
            case 0x16C1D0u: goto label_16c1d0;
            case 0x16C238u: goto label_16c238;
            case 0x16C270u: goto label_16c270;
            case 0x16C298u: goto label_16c298;
            case 0x16C300u: goto label_16c300;
            case 0x16C308u: goto label_16c308;
            case 0x16C370u: goto label_16c370;
            case 0x16C3D8u: goto label_16c3d8;
            case 0x16C410u: goto label_16c410;
            case 0x16C480u: goto label_16c480;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16C148u;
label_16c148:
    // 0x16c148: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16c14c:
    // 0x16c14c: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_16c150:
    // 0x16c150: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16c154:
    // 0x16c154: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16c158:
    // 0x16c158: 0x60f809  jalr        $v1
label_16c15c:
    if (ctx->pc == 0x16C15Cu) {
        ctx->pc = 0x16C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C158u;
        // 0x16c15c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C160u;
        goto label_16c160;
    }
    ctx->pc = 0x16C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C160u);
        ctx->pc = 0x16C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C158u;
        // 0x16c15c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C158u, 0x16C160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C160u;
label_16c160:
    // 0x16c160: 0x100000ca  b           . + 4 + (0xCA << 2)
label_16c164:
    if (ctx->pc == 0x16C164u) {
        ctx->pc = 0x16C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C160u;
        // 0x16c164: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C168u;
        goto label_16c168;
    }
    ctx->pc = 0x16C160u;
    {
        const bool branch_taken_0x16c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C160u;
        // 0x16c164: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c160) {
            ctx->pc = 0x16C48Cu;
            goto label_16c48c;
        }
    }
    ctx->pc = 0x16C168u;
label_16c168:
    // 0x16c168: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_16c16c:
    if (ctx->pc == 0x16C16Cu) {
        ctx->pc = 0x16C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C168u;
        // 0x16c16c: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C170u;
        goto label_16c170;
    }
    ctx->pc = 0x16C168u;
    {
        const bool branch_taken_0x16c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C168u;
        // 0x16c16c: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c168) {
            ctx->pc = 0x16C488u;
            goto label_16c488;
        }
    }
    ctx->pc = 0x16C170u;
label_16c170:
    // 0x16c170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c174:
    // 0x16c174: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
label_16c178:
    if (ctx->pc == 0x16C178u) {
        ctx->pc = 0x16C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C174u;
        // 0x16c178: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C17Cu;
        goto label_16c17c;
    }
    ctx->pc = 0x16C174u;
    {
        const bool branch_taken_0x16c174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c174) {
            ctx->pc = 0x16C178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C174u;
            // 0x16c178: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1A0u;
            goto label_16c1a0;
        }
    }
    ctx->pc = 0x16C17Cu;
label_16c17c:
    // 0x16c17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c180:
    // 0x16c180: 0xc06a2ac  jal         func_1A8AB0
label_16c184:
    if (ctx->pc == 0x16C184u) {
        ctx->pc = 0x16C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C180u;
        // 0x16c184: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C188u;
        goto label_16c188;
    }
    ctx->pc = 0x16C180u;
    SET_GPR_U32(ctx, 31, 0x16C188u);
    ctx->pc = 0x16C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C180u;
    // 0x16c184: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C180u, 0x16C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C188u;
label_16c188:
    // 0x16c188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c18c:
    // 0x16c18c: 0xc06a2ac  jal         func_1A8AB0
label_16c190:
    if (ctx->pc == 0x16C190u) {
        ctx->pc = 0x16C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C18Cu;
        // 0x16c190: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C194u;
        goto label_16c194;
    }
    ctx->pc = 0x16C18Cu;
    SET_GPR_U32(ctx, 31, 0x16C194u);
    ctx->pc = 0x16C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C18Cu;
    // 0x16c190: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C18Cu, 0x16C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C194u;
label_16c194:
    // 0x16c194: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_16c198:
    // 0x16c198: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c19c:
    if (ctx->pc == 0x16C19Cu) {
        ctx->pc = 0x16C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C198u;
        // 0x16c19c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1A0u;
        goto label_16c1a0;
    }
    ctx->pc = 0x16C198u;
    {
        const bool branch_taken_0x16c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C198u;
        // 0x16c19c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c198) {
            ctx->pc = 0x16C1A8u;
            goto label_16c1a8;
        }
    }
    ctx->pc = 0x16C1A0u;
label_16c1a0:
    // 0x16c1a0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16c1a4:
    // 0x16c1a4: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x16c1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_16c1a8:
    // 0x16c1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c1ac:
    // 0x16c1ac: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x16c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_16c1b0:
    // 0x16c1b0: 0xae2401e0  sw          $a0, 0x1E0($s1)
    ctx->pc = 0x16c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 4));
label_16c1b4:
    // 0x16c1b4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_16c1b8:
    // 0x16c1b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16c1bc:
    // 0x16c1bc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c1c0:
    // 0x16c1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c1c4:
    // 0x16c1c4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c1c8:
    // 0x16c1c8: 0x1000009a  b           . + 4 + (0x9A << 2)
label_16c1cc:
    if (ctx->pc == 0x16C1CCu) {
        ctx->pc = 0x16C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1C8u;
        // 0x16c1cc: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1D0u;
        goto label_16c1d0;
    }
    ctx->pc = 0x16C1C8u;
    {
        const bool branch_taken_0x16c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1C8u;
        // 0x16c1cc: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1c8) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C1D0u;
label_16c1d0:
    // 0x16c1d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c1d4:
    // 0x16c1d4: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
label_16c1d8:
    if (ctx->pc == 0x16C1D8u) {
        ctx->pc = 0x16C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1D4u;
        // 0x16c1d8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1DCu;
        goto label_16c1dc;
    }
    ctx->pc = 0x16C1D4u;
    {
        const bool branch_taken_0x16c1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c1d4) {
            ctx->pc = 0x16C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1D4u;
            // 0x16c1d8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C208u;
            goto label_16c208;
        }
    }
    ctx->pc = 0x16C1DCu;
label_16c1dc:
    // 0x16c1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c1e0:
    // 0x16c1e0: 0xc06a282  jal         func_1A8A08
label_16c1e4:
    if (ctx->pc == 0x16C1E4u) {
        ctx->pc = 0x16C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1E0u;
        // 0x16c1e4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1E8u;
        goto label_16c1e8;
    }
    ctx->pc = 0x16C1E0u;
    SET_GPR_U32(ctx, 31, 0x16C1E8u);
    ctx->pc = 0x16C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1E0u;
    // 0x16c1e4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C1E0u, 0x16C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1E8u;
label_16c1e8:
    // 0x16c1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c1ec:
    // 0x16c1ec: 0xc06a282  jal         func_1A8A08
label_16c1f0:
    if (ctx->pc == 0x16C1F0u) {
        ctx->pc = 0x16C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1ECu;
        // 0x16c1f0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C1F4u;
        goto label_16c1f4;
    }
    ctx->pc = 0x16C1ECu;
    SET_GPR_U32(ctx, 31, 0x16C1F4u);
    ctx->pc = 0x16C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1ECu;
    // 0x16c1f0: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C1ECu, 0x16C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1F4u;
label_16c1f4:
    // 0x16c1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c1f8:
    // 0x16c1f8: 0xc06a282  jal         func_1A8A08
label_16c1fc:
    if (ctx->pc == 0x16C1FCu) {
        ctx->pc = 0x16C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1F8u;
        // 0x16c1fc: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C200u;
        goto label_16c200;
    }
    ctx->pc = 0x16C1F8u;
    SET_GPR_U32(ctx, 31, 0x16C200u);
    ctx->pc = 0x16C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C1F8u;
    // 0x16c1fc: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C1F8u, 0x16C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C200u;
label_16c200:
    // 0x16c200: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c204:
    if (ctx->pc == 0x16C204u) {
        ctx->pc = 0x16C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C200u;
        // 0x16c204: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C208u;
        goto label_16c208;
    }
    ctx->pc = 0x16C200u;
    {
        const bool branch_taken_0x16c200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C200u;
        // 0x16c204: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c200) {
            ctx->pc = 0x16C20Cu;
            goto label_16c20c;
        }
    }
    ctx->pc = 0x16C208u;
label_16c208:
    // 0x16c208: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x16c208u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16c20c:
    // 0x16c20c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c210:
    // 0x16c210: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_16c214:
    // 0x16c214: 0xae2401e0  sw          $a0, 0x1E0($s1)
    ctx->pc = 0x16c214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 4));
label_16c218:
    // 0x16c218: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_16c21c:
    // 0x16c21c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16c220:
    // 0x16c220: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c224:
    // 0x16c224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c228:
    // 0x16c228: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c22c:
    // 0x16c22c: 0x10000081  b           . + 4 + (0x81 << 2)
label_16c230:
    if (ctx->pc == 0x16C230u) {
        ctx->pc = 0x16C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C22Cu;
        // 0x16c230: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C234u;
        goto label_16c234;
    }
    ctx->pc = 0x16C22Cu;
    {
        const bool branch_taken_0x16c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C22Cu;
        // 0x16c230: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c22c) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C234u;
label_16c234:
    // 0x16c234: 0x0  nop
    ctx->pc = 0x16c234u;
    // NOP
label_16c238:
    // 0x16c238: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_16c23c:
    // 0x16c23c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c240:
    // 0x16c240: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_16c244:
    // 0x16c244: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x16c244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_16c248:
    // 0x16c248: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x16c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_16c24c:
    // 0x16c24c: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x16c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
label_16c250:
    // 0x16c250: 0xc066810  jal         func_19A040
label_16c254:
    if (ctx->pc == 0x16C254u) {
        ctx->pc = 0x16C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C250u;
        // 0x16c254: 0xae2401e4  sw          $a0, 0x1E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C258u;
        goto label_16c258;
    }
    ctx->pc = 0x16C250u;
    SET_GPR_U32(ctx, 31, 0x16C258u);
    ctx->pc = 0x16C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C250u;
    // 0x16c254: 0xae2401e4  sw          $a0, 0x1E4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x16C250u, 0x16C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C258u;
label_16c258:
    // 0x16c258: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c25c:
    // 0x16c25c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c260:
    // 0x16c260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c264:
    // 0x16c264: 0x10000073  b           . + 4 + (0x73 << 2)
label_16c268:
    if (ctx->pc == 0x16C268u) {
        ctx->pc = 0x16C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C264u;
        // 0x16c268: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C26Cu;
        goto label_16c26c;
    }
    ctx->pc = 0x16C264u;
    {
        const bool branch_taken_0x16c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C264u;
        // 0x16c268: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c264) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C26Cu;
label_16c26c:
    // 0x16c26c: 0x0  nop
    ctx->pc = 0x16c26cu;
    // NOP
label_16c270:
    // 0x16c270: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16c274:
    // 0x16c274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16c278:
    // 0x16c278: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x16c278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
label_16c27c:
    // 0x16c27c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c280:
    // 0x16c280: 0x8c623630  lw          $v0, 0x3630($v1)
    ctx->pc = 0x16c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
label_16c284:
    // 0x16c284: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16c284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_16c288:
    // 0x16c288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c28c:
    // 0x16c28c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16c28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_16c290:
    // 0x16c290: 0x10000068  b           . + 4 + (0x68 << 2)
label_16c294:
    if (ctx->pc == 0x16C294u) {
        ctx->pc = 0x16C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C290u;
        // 0x16c294: 0xae2201e4  sw          $v0, 0x1E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C298u;
        goto label_16c298;
    }
    ctx->pc = 0x16C290u;
    {
        const bool branch_taken_0x16c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C290u;
        // 0x16c294: 0xae2201e4  sw          $v0, 0x1E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c290) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C298u;
label_16c298:
    // 0x16c298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c29c:
    // 0x16c29c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
label_16c2a0:
    if (ctx->pc == 0x16C2A0u) {
        ctx->pc = 0x16C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C29Cu;
        // 0x16c2a0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2A4u;
        goto label_16c2a4;
    }
    ctx->pc = 0x16C29Cu;
    {
        const bool branch_taken_0x16c29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c29c) {
            ctx->pc = 0x16C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C29Cu;
            // 0x16c2a0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C2D0u;
            goto label_16c2d0;
        }
    }
    ctx->pc = 0x16C2A4u;
label_16c2a4:
    // 0x16c2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c2a8:
    // 0x16c2a8: 0xc06a2ac  jal         func_1A8AB0
label_16c2ac:
    if (ctx->pc == 0x16C2ACu) {
        ctx->pc = 0x16C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2A8u;
        // 0x16c2ac: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2B0u;
        goto label_16c2b0;
    }
    ctx->pc = 0x16C2A8u;
    SET_GPR_U32(ctx, 31, 0x16C2B0u);
    ctx->pc = 0x16C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2A8u;
    // 0x16c2ac: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C2A8u, 0x16C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2B0u;
label_16c2b0:
    // 0x16c2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c2b4:
    // 0x16c2b4: 0xc06a2ac  jal         func_1A8AB0
label_16c2b8:
    if (ctx->pc == 0x16C2B8u) {
        ctx->pc = 0x16C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2B4u;
        // 0x16c2b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2BCu;
        goto label_16c2bc;
    }
    ctx->pc = 0x16C2B4u;
    SET_GPR_U32(ctx, 31, 0x16C2BCu);
    ctx->pc = 0x16C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2B4u;
    // 0x16c2b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C2B4u, 0x16C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2BCu;
label_16c2bc:
    // 0x16c2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c2c0:
    // 0x16c2c0: 0xc06a2ac  jal         func_1A8AB0
label_16c2c4:
    if (ctx->pc == 0x16C2C4u) {
        ctx->pc = 0x16C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2C0u;
        // 0x16c2c4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2C8u;
        goto label_16c2c8;
    }
    ctx->pc = 0x16C2C0u;
    SET_GPR_U32(ctx, 31, 0x16C2C8u);
    ctx->pc = 0x16C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C2C0u;
    // 0x16c2c4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C2C0u, 0x16C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2C8u;
label_16c2c8:
    // 0x16c2c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c2cc:
    if (ctx->pc == 0x16C2CCu) {
        ctx->pc = 0x16C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2C8u;
        // 0x16c2cc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C2D0u;
        goto label_16c2d0;
    }
    ctx->pc = 0x16C2C8u;
    {
        const bool branch_taken_0x16c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2C8u;
        // 0x16c2cc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2c8) {
            ctx->pc = 0x16C2D8u;
            goto label_16c2d8;
        }
    }
    ctx->pc = 0x16C2D0u;
label_16c2d0:
    // 0x16c2d0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16c2d4:
    // 0x16c2d4: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x16c2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_16c2d8:
    // 0x16c2d8: 0x26220250  addiu       $v0, $s1, 0x250
    ctx->pc = 0x16c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
label_16c2dc:
    // 0x16c2dc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x16c2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_16c2e0:
    // 0x16c2e0: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16c2e0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16c2e4:
    // 0x16c2e4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16c2e4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_16c2e8:
    // 0x16c2e8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16c2ec:
    // 0x16c2ec: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c2f0:
    // 0x16c2f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c2f4:
    // 0x16c2f4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c2f8:
    // 0x16c2f8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_16c2fc:
    if (ctx->pc == 0x16C2FCu) {
        ctx->pc = 0x16C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2F8u;
        // 0x16c2fc: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C300u;
        goto label_16c300;
    }
    ctx->pc = 0x16C2F8u;
    {
        const bool branch_taken_0x16c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2F8u;
        // 0x16c2fc: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2f8) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C300u;
label_16c300:
    // 0x16c300: 0x10000061  b           . + 4 + (0x61 << 2)
label_16c304:
    if (ctx->pc == 0x16C304u) {
        ctx->pc = 0x16C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C300u;
        // 0x16c304: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C308u;
        goto label_16c308;
    }
    ctx->pc = 0x16C300u;
    {
        const bool branch_taken_0x16c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C300u;
        // 0x16c304: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c300) {
            ctx->pc = 0x16C488u;
            goto label_16c488;
        }
    }
    ctx->pc = 0x16C308u;
label_16c308:
    // 0x16c308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c30c:
    // 0x16c30c: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
label_16c310:
    if (ctx->pc == 0x16C310u) {
        ctx->pc = 0x16C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C30Cu;
        // 0x16c310: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C314u;
        goto label_16c314;
    }
    ctx->pc = 0x16C30Cu;
    {
        const bool branch_taken_0x16c30c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c30c) {
            ctx->pc = 0x16C310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C30Cu;
            // 0x16c310: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C340u;
            goto label_16c340;
        }
    }
    ctx->pc = 0x16C314u;
label_16c314:
    // 0x16c314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c318:
    // 0x16c318: 0xc06a282  jal         func_1A8A08
label_16c31c:
    if (ctx->pc == 0x16C31Cu) {
        ctx->pc = 0x16C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C318u;
        // 0x16c31c: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C320u;
        goto label_16c320;
    }
    ctx->pc = 0x16C318u;
    SET_GPR_U32(ctx, 31, 0x16C320u);
    ctx->pc = 0x16C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C318u;
    // 0x16c31c: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C318u, 0x16C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C320u;
label_16c320:
    // 0x16c320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c324:
    // 0x16c324: 0xc06a282  jal         func_1A8A08
label_16c328:
    if (ctx->pc == 0x16C328u) {
        ctx->pc = 0x16C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C324u;
        // 0x16c328: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C32Cu;
        goto label_16c32c;
    }
    ctx->pc = 0x16C324u;
    SET_GPR_U32(ctx, 31, 0x16C32Cu);
    ctx->pc = 0x16C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C324u;
    // 0x16c328: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C324u, 0x16C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C32Cu;
label_16c32c:
    // 0x16c32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c330:
    // 0x16c330: 0xc06a282  jal         func_1A8A08
label_16c334:
    if (ctx->pc == 0x16C334u) {
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C338u;
        goto label_16c338;
    }
    ctx->pc = 0x16C330u;
    SET_GPR_U32(ctx, 31, 0x16C338u);
    ctx->pc = 0x16C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C330u;
    // 0x16c334: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C330u, 0x16C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C338u;
label_16c338:
    // 0x16c338: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c33c:
    if (ctx->pc == 0x16C33Cu) {
        ctx->pc = 0x16C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C338u;
        // 0x16c33c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C340u;
        goto label_16c340;
    }
    ctx->pc = 0x16C338u;
    {
        const bool branch_taken_0x16c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C338u;
        // 0x16c33c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c338) {
            ctx->pc = 0x16C344u;
            goto label_16c344;
        }
    }
    ctx->pc = 0x16C340u;
label_16c340:
    // 0x16c340: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x16c340u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16c344:
    // 0x16c344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c348:
    // 0x16c348: 0x26230270  addiu       $v1, $s1, 0x270
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_16c34c:
    // 0x16c34c: 0xae240260  sw          $a0, 0x260($s1)
    ctx->pc = 0x16c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 4));
label_16c350:
    // 0x16c350: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_16c354:
    // 0x16c354: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c354u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16c358:
    // 0x16c358: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c35c:
    // 0x16c35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c360:
    // 0x16c360: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c364:
    // 0x16c364: 0x10000033  b           . + 4 + (0x33 << 2)
label_16c368:
    if (ctx->pc == 0x16C368u) {
        ctx->pc = 0x16C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C364u;
        // 0x16c368: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C36Cu;
        goto label_16c36c;
    }
    ctx->pc = 0x16C364u;
    {
        const bool branch_taken_0x16c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C364u;
        // 0x16c368: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c364) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C36Cu;
label_16c36c:
    // 0x16c36c: 0x0  nop
    ctx->pc = 0x16c36cu;
    // NOP
label_16c370:
    // 0x16c370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c374:
    // 0x16c374: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
label_16c378:
    if (ctx->pc == 0x16C378u) {
        ctx->pc = 0x16C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C374u;
        // 0x16c378: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C37Cu;
        goto label_16c37c;
    }
    ctx->pc = 0x16C374u;
    {
        const bool branch_taken_0x16c374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c374) {
            ctx->pc = 0x16C378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C374u;
            // 0x16c378: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C3A8u;
            goto label_16c3a8;
        }
    }
    ctx->pc = 0x16C37Cu;
label_16c37c:
    // 0x16c37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c380:
    // 0x16c380: 0xc06a282  jal         func_1A8A08
label_16c384:
    if (ctx->pc == 0x16C384u) {
        ctx->pc = 0x16C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C380u;
        // 0x16c384: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C388u;
        goto label_16c388;
    }
    ctx->pc = 0x16C380u;
    SET_GPR_U32(ctx, 31, 0x16C388u);
    ctx->pc = 0x16C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C380u;
    // 0x16c384: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C380u, 0x16C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C388u;
label_16c388:
    // 0x16c388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c38c:
    // 0x16c38c: 0xc06a282  jal         func_1A8A08
label_16c390:
    if (ctx->pc == 0x16C390u) {
        ctx->pc = 0x16C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C38Cu;
        // 0x16c390: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C394u;
        goto label_16c394;
    }
    ctx->pc = 0x16C38Cu;
    SET_GPR_U32(ctx, 31, 0x16C394u);
    ctx->pc = 0x16C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C38Cu;
    // 0x16c390: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C38Cu, 0x16C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C394u;
label_16c394:
    // 0x16c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c398:
    // 0x16c398: 0xc06a282  jal         func_1A8A08
label_16c39c:
    if (ctx->pc == 0x16C39Cu) {
        ctx->pc = 0x16C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C398u;
        // 0x16c39c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3A0u;
        goto label_16c3a0;
    }
    ctx->pc = 0x16C398u;
    SET_GPR_U32(ctx, 31, 0x16C3A0u);
    ctx->pc = 0x16C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C398u;
    // 0x16c39c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C398u, 0x16C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3A0u;
label_16c3a0:
    // 0x16c3a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c3a4:
    if (ctx->pc == 0x16C3A4u) {
        ctx->pc = 0x16C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3A0u;
        // 0x16c3a4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3A8u;
        goto label_16c3a8;
    }
    ctx->pc = 0x16C3A0u;
    {
        const bool branch_taken_0x16c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3A0u;
        // 0x16c3a4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3a0) {
            ctx->pc = 0x16C3ACu;
            goto label_16c3ac;
        }
    }
    ctx->pc = 0x16C3A8u;
label_16c3a8:
    // 0x16c3a8: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x16c3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16c3ac:
    // 0x16c3ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c3b0:
    // 0x16c3b0: 0x26230270  addiu       $v1, $s1, 0x270
    ctx->pc = 0x16c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_16c3b4:
    // 0x16c3b4: 0xae240260  sw          $a0, 0x260($s1)
    ctx->pc = 0x16c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 4));
label_16c3b8:
    // 0x16c3b8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16c3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_16c3bc:
    // 0x16c3bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16c3c0:
    // 0x16c3c0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c3c4:
    // 0x16c3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c3c8:
    // 0x16c3c8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c3cc:
    // 0x16c3cc: 0x10000019  b           . + 4 + (0x19 << 2)
label_16c3d0:
    if (ctx->pc == 0x16C3D0u) {
        ctx->pc = 0x16C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3CCu;
        // 0x16c3d0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3D4u;
        goto label_16c3d4;
    }
    ctx->pc = 0x16C3CCu;
    {
        const bool branch_taken_0x16c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3CCu;
        // 0x16c3d0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3cc) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C3D4u;
label_16c3d4:
    // 0x16c3d4: 0x0  nop
    ctx->pc = 0x16c3d4u;
    // NOP
label_16c3d8:
    // 0x16c3d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_16c3dc:
    // 0x16c3dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c3e0:
    // 0x16c3e0: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x16c3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_16c3e4:
    // 0x16c3e4: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x16c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_16c3e8:
    // 0x16c3e8: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x16c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_16c3ec:
    // 0x16c3ec: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x16c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_16c3f0:
    // 0x16c3f0: 0xc066810  jal         func_19A040
label_16c3f4:
    if (ctx->pc == 0x16C3F4u) {
        ctx->pc = 0x16C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3F0u;
        // 0x16c3f4: 0xae240264  sw          $a0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C3F8u;
        goto label_16c3f8;
    }
    ctx->pc = 0x16C3F0u;
    SET_GPR_U32(ctx, 31, 0x16C3F8u);
    ctx->pc = 0x16C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3F0u;
    // 0x16c3f4: 0xae240264  sw          $a0, 0x264($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x16C3F0u, 0x16C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3F8u;
label_16c3f8:
    // 0x16c3f8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_16c3fc:
    // 0x16c3fc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c400:
    // 0x16c400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c404:
    // 0x16c404: 0x1000000b  b           . + 4 + (0xB << 2)
label_16c408:
    if (ctx->pc == 0x16C408u) {
        ctx->pc = 0x16C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C404u;
        // 0x16c408: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C40Cu;
        goto label_16c40c;
    }
    ctx->pc = 0x16C404u;
    {
        const bool branch_taken_0x16c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C404u;
        // 0x16c408: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c404) {
            ctx->pc = 0x16C434u;
            goto label_16c434;
        }
    }
    ctx->pc = 0x16C40Cu;
label_16c40c:
    // 0x16c40c: 0x0  nop
    ctx->pc = 0x16c40cu;
    // NOP
label_16c410:
    // 0x16c410: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16c414:
    // 0x16c414: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16c418:
    // 0x16c418: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x16c418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_16c41c:
    // 0x16c41c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_16c420:
    // 0x16c420: 0x8c623630  lw          $v0, 0x3630($v1)
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
label_16c424:
    // 0x16c424: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16c424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
label_16c428:
    // 0x16c428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c42c:
    // 0x16c42c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16c42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_16c430:
    // 0x16c430: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x16c430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
label_16c434:
    // 0x16c434: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x16c434u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_16c438:
    // 0x16c438: 0x2610ed50  addiu       $s0, $s0, -0x12B0
    ctx->pc = 0x16c438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962512));
label_16c43c:
    // 0x16c43c: 0xc06164c  jal         func_185930
label_16c440:
    if (ctx->pc == 0x16C440u) {
        ctx->pc = 0x16C444u;
        goto label_16c444;
    }
    ctx->pc = 0x16C43Cu;
    SET_GPR_U32(ctx, 31, 0x16C444u);
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16C43Cu, 0x16C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C444u;
label_16c444:
    // 0x16c444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c448:
    // 0x16c448: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16c44c:
    // 0x16c44c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_16c450:
    if (ctx->pc == 0x16C450u) {
        ctx->pc = 0x16C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C44Cu;
        // 0x16c450: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C454u;
        goto label_16c454;
    }
    ctx->pc = 0x16C44Cu;
    {
        const bool branch_taken_0x16c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c44c) {
            ctx->pc = 0x16C450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C44Cu;
            // 0x16c450: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C48Cu;
            goto label_16c48c;
        }
    }
    ctx->pc = 0x16C454u;
label_16c454:
    // 0x16c454: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x16c454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16c458:
    // 0x16c458: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x16c458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_16c45c:
    // 0x16c45c: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x16c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
label_16c460:
    // 0x16c460: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x16c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_16c464:
    // 0x16c464: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x16c464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_16c468:
    // 0x16c468: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x16c468u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_16c46c:
    // 0x16c46c: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x16c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
label_16c470:
    // 0x16c470: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16c470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_16c474:
    // 0x16c474: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16c474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_16c478:
    // 0x16c478: 0x10000003  b           . + 4 + (0x3 << 2)
label_16c47c:
    if (ctx->pc == 0x16C47Cu) {
        ctx->pc = 0x16C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C478u;
        // 0x16c47c: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C480u;
        goto label_16c480;
    }
    ctx->pc = 0x16C478u;
    {
        const bool branch_taken_0x16c478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C478u;
        // 0x16c47c: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c478) {
            ctx->pc = 0x16C488u;
            goto label_16c488;
        }
    }
    ctx->pc = 0x16C480u;
label_16c480:
    // 0x16c480: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16c484:
    // 0x16c484: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x16c484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_16c488:
    // 0x16c488: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x16c488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16c48c:
    // 0x16c48c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16c48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_16c490:
    // 0x16c490: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x16c490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16c494:
    // 0x16c494: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x16c494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_16c498:
    // 0x16c498: 0x3e00008  jr          $ra
label_16c49c:
    if (ctx->pc == 0x16C49Cu) {
        ctx->pc = 0x16C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C498u;
        // 0x16c49c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C4A0u;
        goto label_fallthrough_0x16c498;
    }
    ctx->pc = 0x16C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C498u;
        // 0x16c49c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c498:
    ctx->pc = 0x16C4A0u;
}
