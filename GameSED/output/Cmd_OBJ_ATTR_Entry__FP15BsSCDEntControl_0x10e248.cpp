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

// Function: Cmd_OBJ_ATTR_Entry__FP15BsSCDEntControl
// Address: 0x10e248 - 0x10e514
void Cmd_OBJ_ATTR_Entry__FP15BsSCDEntControl_0x10e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_ATTR_Entry__FP15BsSCDEntControl_0x10e248");
#endif

    switch (ctx->pc) {
        case 0x10e248u: goto label_10e248;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e250u: goto label_10e250;
        case 0x10e254u: goto label_10e254;
        case 0x10e258u: goto label_10e258;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e260u: goto label_10e260;
        case 0x10e264u: goto label_10e264;
        case 0x10e268u: goto label_10e268;
        case 0x10e26cu: goto label_10e26c;
        case 0x10e270u: goto label_10e270;
        case 0x10e274u: goto label_10e274;
        case 0x10e278u: goto label_10e278;
        case 0x10e27cu: goto label_10e27c;
        case 0x10e280u: goto label_10e280;
        case 0x10e284u: goto label_10e284;
        case 0x10e288u: goto label_10e288;
        case 0x10e28cu: goto label_10e28c;
        case 0x10e290u: goto label_10e290;
        case 0x10e294u: goto label_10e294;
        case 0x10e298u: goto label_10e298;
        case 0x10e29cu: goto label_10e29c;
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e2a4u: goto label_10e2a4;
        case 0x10e2a8u: goto label_10e2a8;
        case 0x10e2acu: goto label_10e2ac;
        case 0x10e2b0u: goto label_10e2b0;
        case 0x10e2b4u: goto label_10e2b4;
        case 0x10e2b8u: goto label_10e2b8;
        case 0x10e2bcu: goto label_10e2bc;
        case 0x10e2c0u: goto label_10e2c0;
        case 0x10e2c4u: goto label_10e2c4;
        case 0x10e2c8u: goto label_10e2c8;
        case 0x10e2ccu: goto label_10e2cc;
        case 0x10e2d0u: goto label_10e2d0;
        case 0x10e2d4u: goto label_10e2d4;
        case 0x10e2d8u: goto label_10e2d8;
        case 0x10e2dcu: goto label_10e2dc;
        case 0x10e2e0u: goto label_10e2e0;
        case 0x10e2e4u: goto label_10e2e4;
        case 0x10e2e8u: goto label_10e2e8;
        case 0x10e2ecu: goto label_10e2ec;
        case 0x10e2f0u: goto label_10e2f0;
        case 0x10e2f4u: goto label_10e2f4;
        case 0x10e2f8u: goto label_10e2f8;
        case 0x10e2fcu: goto label_10e2fc;
        case 0x10e300u: goto label_10e300;
        case 0x10e304u: goto label_10e304;
        case 0x10e308u: goto label_10e308;
        case 0x10e30cu: goto label_10e30c;
        case 0x10e310u: goto label_10e310;
        case 0x10e314u: goto label_10e314;
        case 0x10e318u: goto label_10e318;
        case 0x10e31cu: goto label_10e31c;
        case 0x10e320u: goto label_10e320;
        case 0x10e324u: goto label_10e324;
        case 0x10e328u: goto label_10e328;
        case 0x10e32cu: goto label_10e32c;
        case 0x10e330u: goto label_10e330;
        case 0x10e334u: goto label_10e334;
        case 0x10e338u: goto label_10e338;
        case 0x10e33cu: goto label_10e33c;
        case 0x10e340u: goto label_10e340;
        case 0x10e344u: goto label_10e344;
        case 0x10e348u: goto label_10e348;
        case 0x10e34cu: goto label_10e34c;
        case 0x10e350u: goto label_10e350;
        case 0x10e354u: goto label_10e354;
        case 0x10e358u: goto label_10e358;
        case 0x10e35cu: goto label_10e35c;
        case 0x10e360u: goto label_10e360;
        case 0x10e364u: goto label_10e364;
        case 0x10e368u: goto label_10e368;
        case 0x10e36cu: goto label_10e36c;
        case 0x10e370u: goto label_10e370;
        case 0x10e374u: goto label_10e374;
        case 0x10e378u: goto label_10e378;
        case 0x10e37cu: goto label_10e37c;
        case 0x10e380u: goto label_10e380;
        case 0x10e384u: goto label_10e384;
        case 0x10e388u: goto label_10e388;
        case 0x10e38cu: goto label_10e38c;
        case 0x10e390u: goto label_10e390;
        case 0x10e394u: goto label_10e394;
        case 0x10e398u: goto label_10e398;
        case 0x10e39cu: goto label_10e39c;
        case 0x10e3a0u: goto label_10e3a0;
        case 0x10e3a4u: goto label_10e3a4;
        case 0x10e3a8u: goto label_10e3a8;
        case 0x10e3acu: goto label_10e3ac;
        case 0x10e3b0u: goto label_10e3b0;
        case 0x10e3b4u: goto label_10e3b4;
        case 0x10e3b8u: goto label_10e3b8;
        case 0x10e3bcu: goto label_10e3bc;
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3e8u: goto label_10e3e8;
        case 0x10e3ecu: goto label_10e3ec;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e3f4u: goto label_10e3f4;
        case 0x10e3f8u: goto label_10e3f8;
        case 0x10e3fcu: goto label_10e3fc;
        case 0x10e400u: goto label_10e400;
        case 0x10e404u: goto label_10e404;
        case 0x10e408u: goto label_10e408;
        case 0x10e40cu: goto label_10e40c;
        case 0x10e410u: goto label_10e410;
        case 0x10e414u: goto label_10e414;
        case 0x10e418u: goto label_10e418;
        case 0x10e41cu: goto label_10e41c;
        case 0x10e420u: goto label_10e420;
        case 0x10e424u: goto label_10e424;
        case 0x10e428u: goto label_10e428;
        case 0x10e42cu: goto label_10e42c;
        case 0x10e430u: goto label_10e430;
        case 0x10e434u: goto label_10e434;
        case 0x10e438u: goto label_10e438;
        case 0x10e43cu: goto label_10e43c;
        case 0x10e440u: goto label_10e440;
        case 0x10e444u: goto label_10e444;
        case 0x10e448u: goto label_10e448;
        case 0x10e44cu: goto label_10e44c;
        case 0x10e450u: goto label_10e450;
        case 0x10e454u: goto label_10e454;
        case 0x10e458u: goto label_10e458;
        case 0x10e45cu: goto label_10e45c;
        case 0x10e460u: goto label_10e460;
        case 0x10e464u: goto label_10e464;
        case 0x10e468u: goto label_10e468;
        case 0x10e46cu: goto label_10e46c;
        case 0x10e470u: goto label_10e470;
        case 0x10e474u: goto label_10e474;
        case 0x10e478u: goto label_10e478;
        case 0x10e47cu: goto label_10e47c;
        case 0x10e480u: goto label_10e480;
        case 0x10e484u: goto label_10e484;
        case 0x10e488u: goto label_10e488;
        case 0x10e48cu: goto label_10e48c;
        case 0x10e490u: goto label_10e490;
        case 0x10e494u: goto label_10e494;
        case 0x10e498u: goto label_10e498;
        case 0x10e49cu: goto label_10e49c;
        case 0x10e4a0u: goto label_10e4a0;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4a8u: goto label_10e4a8;
        case 0x10e4acu: goto label_10e4ac;
        case 0x10e4b0u: goto label_10e4b0;
        case 0x10e4b4u: goto label_10e4b4;
        case 0x10e4b8u: goto label_10e4b8;
        case 0x10e4bcu: goto label_10e4bc;
        case 0x10e4c0u: goto label_10e4c0;
        case 0x10e4c4u: goto label_10e4c4;
        case 0x10e4c8u: goto label_10e4c8;
        case 0x10e4ccu: goto label_10e4cc;
        case 0x10e4d0u: goto label_10e4d0;
        case 0x10e4d4u: goto label_10e4d4;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4dcu: goto label_10e4dc;
        case 0x10e4e0u: goto label_10e4e0;
        case 0x10e4e4u: goto label_10e4e4;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e4ecu: goto label_10e4ec;
        case 0x10e4f0u: goto label_10e4f0;
        case 0x10e4f4u: goto label_10e4f4;
        case 0x10e4f8u: goto label_10e4f8;
        case 0x10e4fcu: goto label_10e4fc;
        case 0x10e500u: goto label_10e500;
        case 0x10e504u: goto label_10e504;
        case 0x10e508u: goto label_10e508;
        case 0x10e50cu: goto label_10e50c;
        case 0x10e510u: goto label_10e510;
        default: break;
    }

    ctx->pc = 0x10e248u;

label_10e248:
    // 0x10e248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10e24c:
    // 0x10e24c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e250:
    // 0x10e250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10e254:
    // 0x10e254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_10e258:
    // 0x10e258: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10e258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e25c:
    // 0x10e25c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10e260:
    // 0x10e260: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10e260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e264:
    // 0x10e264: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_10e268:
    // 0x10e268: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x10e268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e26c:
    // 0x10e26c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10e270:
    // 0x10e270: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10e270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10e274:
    // 0x10e274: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_10e278:
    // 0x10e278: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x10e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_10e27c:
    // 0x10e27c: 0xc04110c  jal         func_104430
label_10e280:
    if (ctx->pc == 0x10E280u) {
        ctx->pc = 0x10E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E27Cu;
        // 0x10e280: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E284u;
        goto label_10e284;
    }
    ctx->pc = 0x10E27Cu;
    SET_GPR_U32(ctx, 31, 0x10E284u);
    ctx->pc = 0x10E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E27Cu;
    // 0x10e280: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E27Cu, 0x10E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E284u;
label_10e284:
    // 0x10e284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e288:
    // 0x10e288: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x10e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_10e28c:
    // 0x10e28c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x10e28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10e290:
    // 0x10e290: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_10e294:
    if (ctx->pc == 0x10E294u) {
        ctx->pc = 0x10E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E290u;
        // 0x10e294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E298u;
        goto label_10e298;
    }
    ctx->pc = 0x10E290u;
    {
        const bool branch_taken_0x10e290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E290u;
        // 0x10e294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e290) {
            ctx->pc = 0x10E4F8u;
            goto label_10e4f8;
        }
    }
    ctx->pc = 0x10E298u;
label_10e298:
    // 0x10e298: 0xc06a26e  jal         func_1A89B8
label_10e29c:
    if (ctx->pc == 0x10E29Cu) {
        ctx->pc = 0x10E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E298u;
        // 0x10e29c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2A0u;
        goto label_10e2a0;
    }
    ctx->pc = 0x10E298u;
    SET_GPR_U32(ctx, 31, 0x10E2A0u);
    ctx->pc = 0x10E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E298u;
    // 0x10e29c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E298u, 0x10E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2A0u;
label_10e2a0:
    // 0x10e2a0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_10e2a4:
    if (ctx->pc == 0x10E2A4u) {
        ctx->pc = 0x10E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A0u;
        // 0x10e2a4: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2A8u;
        goto label_10e2a8;
    }
    ctx->pc = 0x10E2A0u;
    {
        const bool branch_taken_0x10e2a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A0u;
        // 0x10e2a4: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2a0) {
            ctx->pc = 0x10E2B4u;
            goto label_10e2b4;
        }
    }
    ctx->pc = 0x10E2A8u;
label_10e2a8:
    // 0x10e2a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10e2ac:
    // 0x10e2ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e2b0:
    // 0x10e2b0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x10e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10e2b4:
    // 0x10e2b4: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x10e2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_10e2b8:
    // 0x10e2b8: 0x5040008b  beql        $v0, $zero, . + 4 + (0x8B << 2)
label_10e2bc:
    if (ctx->pc == 0x10E2BCu) {
        ctx->pc = 0x10E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2B8u;
        // 0x10e2bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2C0u;
        goto label_10e2c0;
    }
    ctx->pc = 0x10E2B8u;
    {
        const bool branch_taken_0x10e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2b8) {
            ctx->pc = 0x10E2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E2B8u;
            // 0x10e2bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E4E8u;
            goto label_10e4e8;
        }
    }
    ctx->pc = 0x10E2C0u;
label_10e2c0:
    // 0x10e2c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e2c4:
    // 0x10e2c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x10e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_10e2c8:
    // 0x10e2c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e2cc:
    // 0x10e2cc: 0x8c633d20  lw          $v1, 0x3D20($v1)
    ctx->pc = 0x10e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15648)));
label_10e2d0:
    // 0x10e2d0: 0x600008  jr          $v1
label_10e2d4:
    if (ctx->pc == 0x10E2D4u) {
        ctx->pc = 0x10E2D8u;
        goto label_10e2d8;
    }
    ctx->pc = 0x10E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E2D8u: goto label_10e2d8;
            case 0x10E2F0u: goto label_10e2f0;
            case 0x10E308u: goto label_10e308;
            case 0x10E320u: goto label_10e320;
            case 0x10E338u: goto label_10e338;
            case 0x10E350u: goto label_10e350;
            case 0x10E368u: goto label_10e368;
            case 0x10E380u: goto label_10e380;
            case 0x10E3A0u: goto label_10e3a0;
            case 0x10E3C0u: goto label_10e3c0;
            case 0x10E3E8u: goto label_10e3e8;
            case 0x10E400u: goto label_10e400;
            case 0x10E418u: goto label_10e418;
            case 0x10E430u: goto label_10e430;
            case 0x10E450u: goto label_10e450;
            case 0x10E468u: goto label_10e468;
            case 0x10E488u: goto label_10e488;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E2D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10E2D8u;
label_10e2d8:
    // 0x10e2d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e2dc:
    // 0x10e2dc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x10e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_10e2e0:
    // 0x10e2e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10e2e4:
    // 0x10e2e4: 0x1000007f  b           . + 4 + (0x7F << 2)
label_10e2e8:
    if (ctx->pc == 0x10E2E8u) {
        ctx->pc = 0x10E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2E4u;
        // 0x10e2e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2ECu;
        goto label_10e2ec;
    }
    ctx->pc = 0x10E2E4u;
    {
        const bool branch_taken_0x10e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2E4u;
        // 0x10e2e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2e4) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E2ECu;
label_10e2ec:
    // 0x10e2ec: 0x0  nop
    ctx->pc = 0x10e2ecu;
    // NOP
label_10e2f0:
    // 0x10e2f0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_10e2f4:
    // 0x10e2f4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x10e2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_10e2f8:
    // 0x10e2f8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x10e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_10e2fc:
    // 0x10e2fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10e2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_10e300:
    // 0x10e300: 0x10000078  b           . + 4 + (0x78 << 2)
label_10e304:
    if (ctx->pc == 0x10E304u) {
        ctx->pc = 0x10E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E300u;
        // 0x10e304: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E308u;
        goto label_10e308;
    }
    ctx->pc = 0x10E300u;
    {
        const bool branch_taken_0x10e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E300u;
        // 0x10e304: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e300) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E308u;
label_10e308:
    // 0x10e308: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x10e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_10e30c:
    // 0x10e30c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x10e30cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_10e310:
    // 0x10e310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x10e310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_10e314:
    // 0x10e314: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x10e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_10e318:
    // 0x10e318: 0x10000072  b           . + 4 + (0x72 << 2)
label_10e31c:
    if (ctx->pc == 0x10E31Cu) {
        ctx->pc = 0x10E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E318u;
        // 0x10e31c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E320u;
        goto label_10e320;
    }
    ctx->pc = 0x10E318u;
    {
        const bool branch_taken_0x10e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E318u;
        // 0x10e31c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e318) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E320u;
label_10e320:
    // 0x10e320: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e324:
    // 0x10e324: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x10e324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_10e328:
    // 0x10e328: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10e328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_10e32c:
    // 0x10e32c: 0x10000018  b           . + 4 + (0x18 << 2)
label_10e330:
    if (ctx->pc == 0x10E330u) {
        ctx->pc = 0x10E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E32Cu;
        // 0x10e330: 0x1225c0  sll         $a0, $s2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E334u;
        goto label_10e334;
    }
    ctx->pc = 0x10E32Cu;
    {
        const bool branch_taken_0x10e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E32Cu;
        // 0x10e330: 0x1225c0  sll         $a0, $s2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e32c) {
            ctx->pc = 0x10E390u;
            goto label_10e390;
        }
    }
    ctx->pc = 0x10E334u;
label_10e334:
    // 0x10e334: 0x0  nop
    ctx->pc = 0x10e334u;
    // NOP
label_10e338:
    // 0x10e338: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e33c:
    // 0x10e33c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x10e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_10e340:
    // 0x10e340: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10e340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_10e344:
    // 0x10e344: 0x10000012  b           . + 4 + (0x12 << 2)
label_10e348:
    if (ctx->pc == 0x10E348u) {
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x1226c0  sll         $a0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E34Cu;
        goto label_10e34c;
    }
    ctx->pc = 0x10E344u;
    {
        const bool branch_taken_0x10e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x1226c0  sll         $a0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e344) {
            ctx->pc = 0x10E390u;
            goto label_10e390;
        }
    }
    ctx->pc = 0x10E34Cu;
label_10e34c:
    // 0x10e34c: 0x0  nop
    ctx->pc = 0x10e34cu;
    // NOP
label_10e350:
    // 0x10e350: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e354:
    // 0x10e354: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x10e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_10e358:
    // 0x10e358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10e35c:
    // 0x10e35c: 0x10000014  b           . + 4 + (0x14 << 2)
label_10e360:
    if (ctx->pc == 0x10E360u) {
        ctx->pc = 0x10E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E35Cu;
        // 0x10e360: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E364u;
        goto label_10e364;
    }
    ctx->pc = 0x10E35Cu;
    {
        const bool branch_taken_0x10e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E35Cu;
        // 0x10e360: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e35c) {
            ctx->pc = 0x10E3B0u;
            goto label_10e3b0;
        }
    }
    ctx->pc = 0x10E364u;
label_10e364:
    // 0x10e364: 0x0  nop
    ctx->pc = 0x10e364u;
    // NOP
label_10e368:
    // 0x10e368: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e36c:
    // 0x10e36c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_10e370:
    // 0x10e370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10e374:
    // 0x10e374: 0x1000000e  b           . + 4 + (0xE << 2)
label_10e378:
    if (ctx->pc == 0x10E378u) {
        ctx->pc = 0x10E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E374u;
        // 0x10e378: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E37Cu;
        goto label_10e37c;
    }
    ctx->pc = 0x10E374u;
    {
        const bool branch_taken_0x10e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E374u;
        // 0x10e378: 0x34440040  ori         $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e374) {
            ctx->pc = 0x10E3B0u;
            goto label_10e3b0;
        }
    }
    ctx->pc = 0x10E37Cu;
label_10e37c:
    // 0x10e37c: 0x0  nop
    ctx->pc = 0x10e37cu;
    // NOP
label_10e380:
    // 0x10e380: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e384:
    // 0x10e384: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x10e384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_10e388:
    // 0x10e388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10e388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_10e38c:
    // 0x10e38c: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x10e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
label_10e390:
    // 0x10e390: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10e394:
    // 0x10e394: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x10e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_10e398:
    // 0x10e398: 0x10000052  b           . + 4 + (0x52 << 2)
label_10e39c:
    if (ctx->pc == 0x10E39Cu) {
        ctx->pc = 0x10E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E398u;
        // 0x10e39c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3A0u;
        goto label_10e3a0;
    }
    ctx->pc = 0x10E398u;
    {
        const bool branch_taken_0x10e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E398u;
        // 0x10e39c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e398) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E3A0u;
label_10e3a0:
    // 0x10e3a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e3a4:
    // 0x10e3a4: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x10e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_10e3a8:
    // 0x10e3a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10e3ac:
    // 0x10e3ac: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x10e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_10e3b0:
    // 0x10e3b0: 0x92100b  movn        $v0, $a0, $s2
    ctx->pc = 0x10e3b0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_10e3b4:
    // 0x10e3b4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_10e3b8:
    if (ctx->pc == 0x10E3B8u) {
        ctx->pc = 0x10E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3B4u;
        // 0x10e3b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3BCu;
        goto label_10e3bc;
    }
    ctx->pc = 0x10E3B4u;
    {
        const bool branch_taken_0x10e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3B4u;
        // 0x10e3b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3b4) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E3BCu;
label_10e3bc:
    // 0x10e3bc: 0x0  nop
    ctx->pc = 0x10e3bcu;
    // NOP
label_10e3c0:
    // 0x10e3c0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_10e3c4:
    // 0x10e3c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10e3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e3c8:
    // 0x10e3c8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x10e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_10e3cc:
    // 0x10e3cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e3d0:
    // 0x10e3d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e3d4:
    // 0x10e3d4: 0x60f809  jalr        $v1
label_10e3d8:
    if (ctx->pc == 0x10E3D8u) {
        ctx->pc = 0x10E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D4u;
        // 0x10e3d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3DCu;
        goto label_10e3dc;
    }
    ctx->pc = 0x10E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E3DCu);
        ctx->pc = 0x10E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D4u;
        // 0x10e3d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E3D4u, 0x10E3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E3DCu;
label_10e3dc:
    // 0x10e3dc: 0x10000042  b           . + 4 + (0x42 << 2)
label_10e3e0:
    if (ctx->pc == 0x10E3E0u) {
        ctx->pc = 0x10E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3DCu;
        // 0x10e3e0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3E4u;
        goto label_10e3e4;
    }
    ctx->pc = 0x10E3DCu;
    {
        const bool branch_taken_0x10e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3DCu;
        // 0x10e3e0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3dc) {
            ctx->pc = 0x10E4E8u;
            goto label_10e4e8;
        }
    }
    ctx->pc = 0x10E3E4u;
label_10e3e4:
    // 0x10e3e4: 0x0  nop
    ctx->pc = 0x10e3e4u;
    // NOP
label_10e3e8:
    // 0x10e3e8: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_10e3ec:
    // 0x10e3ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e3ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e3f0:
    // 0x10e3f0: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x10e3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
label_10e3f4:
    // 0x10e3f4: 0x10000020  b           . + 4 + (0x20 << 2)
label_10e3f8:
    if (ctx->pc == 0x10E3F8u) {
        ctx->pc = 0x10E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F4u;
        // 0x10e3f8: 0x34640400  ori         $a0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3FCu;
        goto label_10e3fc;
    }
    ctx->pc = 0x10E3F4u;
    {
        const bool branch_taken_0x10e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F4u;
        // 0x10e3f8: 0x34640400  ori         $a0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3f4) {
            ctx->pc = 0x10E478u;
            goto label_10e478;
        }
    }
    ctx->pc = 0x10E3FCu;
label_10e3fc:
    // 0x10e3fc: 0x0  nop
    ctx->pc = 0x10e3fcu;
    // NOP
label_10e400:
    // 0x10e400: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_10e404:
    // 0x10e404: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e408:
    // 0x10e408: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x10e408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
label_10e40c:
    // 0x10e40c: 0x1000000c  b           . + 4 + (0xC << 2)
label_10e410:
    if (ctx->pc == 0x10E410u) {
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x34640800  ori         $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E414u;
        goto label_10e414;
    }
    ctx->pc = 0x10E40Cu;
    {
        const bool branch_taken_0x10e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x34640800  ori         $a0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e40c) {
            ctx->pc = 0x10E440u;
            goto label_10e440;
        }
    }
    ctx->pc = 0x10E414u;
label_10e414:
    // 0x10e414: 0x0  nop
    ctx->pc = 0x10e414u;
    // NOP
label_10e418:
    // 0x10e418: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_10e41c:
    // 0x10e41c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e41cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e420:
    // 0x10e420: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x10e420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
label_10e424:
    // 0x10e424: 0x10000014  b           . + 4 + (0x14 << 2)
label_10e428:
    if (ctx->pc == 0x10E428u) {
        ctx->pc = 0x10E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E424u;
        // 0x10e428: 0x34640080  ori         $a0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E42Cu;
        goto label_10e42c;
    }
    ctx->pc = 0x10E424u;
    {
        const bool branch_taken_0x10e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E424u;
        // 0x10e428: 0x34640080  ori         $a0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e424) {
            ctx->pc = 0x10E478u;
            goto label_10e478;
        }
    }
    ctx->pc = 0x10E42Cu;
label_10e42c:
    // 0x10e42c: 0x0  nop
    ctx->pc = 0x10e42cu;
    // NOP
label_10e430:
    // 0x10e430: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_10e434:
    // 0x10e434: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e438:
    // 0x10e438: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x10e438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
label_10e43c:
    // 0x10e43c: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x10e43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_10e440:
    // 0x10e440: 0x92180a  movz        $v1, $a0, $s2
    ctx->pc = 0x10e440u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_10e444:
    // 0x10e444: 0x10000027  b           . + 4 + (0x27 << 2)
label_10e448:
    if (ctx->pc == 0x10E448u) {
        ctx->pc = 0x10E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E444u;
        // 0x10e448: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E44Cu;
        goto label_10e44c;
    }
    ctx->pc = 0x10E444u;
    {
        const bool branch_taken_0x10e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E444u;
        // 0x10e448: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e444) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E44Cu;
label_10e44c:
    // 0x10e44c: 0x0  nop
    ctx->pc = 0x10e44cu;
    // NOP
label_10e450:
    // 0x10e450: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_10e454:
    // 0x10e454: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e458:
    // 0x10e458: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x10e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
label_10e45c:
    // 0x10e45c: 0x10000006  b           . + 4 + (0x6 << 2)
label_10e460:
    if (ctx->pc == 0x10E460u) {
        ctx->pc = 0x10E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E45Cu;
        // 0x10e460: 0x34644000  ori         $a0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E464u;
        goto label_10e464;
    }
    ctx->pc = 0x10E45Cu;
    {
        const bool branch_taken_0x10e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E45Cu;
        // 0x10e460: 0x34644000  ori         $a0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e45c) {
            ctx->pc = 0x10E478u;
            goto label_10e478;
        }
    }
    ctx->pc = 0x10E464u;
label_10e464:
    // 0x10e464: 0x0  nop
    ctx->pc = 0x10e464u;
    // NOP
label_10e468:
    // 0x10e468: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_10e46c:
    // 0x10e46c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e470:
    // 0x10e470: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x10e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
label_10e474:
    // 0x10e474: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x10e474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_10e478:
    // 0x10e478: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x10e478u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_10e47c:
    // 0x10e47c: 0x10000019  b           . + 4 + (0x19 << 2)
label_10e480:
    if (ctx->pc == 0x10E480u) {
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E484u;
        goto label_10e484;
    }
    ctx->pc = 0x10E47Cu;
    {
        const bool branch_taken_0x10e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E47Cu;
        // 0x10e480: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e47c) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E484u;
label_10e484:
    // 0x10e484: 0x0  nop
    ctx->pc = 0x10e484u;
    // NOP
label_10e488:
    // 0x10e488: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_10e48c:
    if (ctx->pc == 0x10E48Cu) {
        ctx->pc = 0x10E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E488u;
        // 0x10e48c: 0x8e250194  lw          $a1, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E490u;
        goto label_10e490;
    }
    ctx->pc = 0x10E488u;
    {
        const bool branch_taken_0x10e488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e488) {
            ctx->pc = 0x10E48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E488u;
            // 0x10e48c: 0x8e250194  lw          $a1, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E498u;
            goto label_10e498;
        }
    }
    ctx->pc = 0x10E490u;
label_10e490:
    // 0x10e490: 0x10000014  b           . + 4 + (0x14 << 2)
label_10e494:
    if (ctx->pc == 0x10E494u) {
        ctx->pc = 0x10E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E490u;
        // 0x10e494: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E498u;
        goto label_10e498;
    }
    ctx->pc = 0x10E490u;
    {
        const bool branch_taken_0x10e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E490u;
        // 0x10e494: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e490) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E498u;
label_10e498:
    // 0x10e498: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_10e49c:
    if (ctx->pc == 0x10E49Cu) {
        ctx->pc = 0x10E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E498u;
        // 0x10e49c: 0xae250158  sw          $a1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4A0u;
        goto label_10e4a0;
    }
    ctx->pc = 0x10E498u;
    {
        const bool branch_taken_0x10e498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E498u;
        // 0x10e49c: 0xae250158  sw          $a1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e498) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E4A0u;
label_10e4a0:
    // 0x10e4a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10e4a4:
    // 0x10e4a4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x10e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_10e4a8:
    // 0x10e4a8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_10e4ac:
    // 0x10e4ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10e4b0:
    // 0x10e4b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_10e4b4:
    if (ctx->pc == 0x10E4B4u) {
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4B8u;
        goto label_10e4b8;
    }
    ctx->pc = 0x10E4B0u;
    {
        const bool branch_taken_0x10e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b0) {
            ctx->pc = 0x10E4E4u;
            goto label_10e4e4;
        }
    }
    ctx->pc = 0x10E4B8u;
label_10e4b8:
    // 0x10e4b8: 0x26300160  addiu       $s0, $s1, 0x160
    ctx->pc = 0x10e4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_10e4bc:
    // 0x10e4bc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x10e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_10e4c0:
    // 0x10e4c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10e4c4:
    // 0x10e4c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_10e4c8:
    if (ctx->pc == 0x10E4C8u) {
        ctx->pc = 0x10E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4C4u;
        // 0x10e4c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4CCu;
        goto label_10e4cc;
    }
    ctx->pc = 0x10E4C4u;
    {
        const bool branch_taken_0x10e4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4C4u;
        // 0x10e4c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4c4) {
            ctx->pc = 0x10E4D4u;
            goto label_10e4d4;
        }
    }
    ctx->pc = 0x10E4CCu;
label_10e4cc:
    // 0x10e4cc: 0xc067f04  jal         func_19FC10
label_10e4d0:
    if (ctx->pc == 0x10E4D0u) {
        ctx->pc = 0x10E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4CCu;
        // 0x10e4d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4D4u;
        goto label_10e4d4;
    }
    ctx->pc = 0x10E4CCu;
    SET_GPR_U32(ctx, 31, 0x10E4D4u);
    ctx->pc = 0x10E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4CCu;
    // 0x10e4d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10E4CCu, 0x10E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4D4u;
label_10e4d4:
    // 0x10e4d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10e4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_10e4d8:
    // 0x10e4d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_10e4dc:
    // 0x10e4dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_10e4e0:
    // 0x10e4e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10e4e4:
    // 0x10e4e4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x10e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_10e4e8:
    // 0x10e4e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x10e4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_10e4ec:
    // 0x10e4ec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x10e4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10e4f0:
    // 0x10e4f0: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
label_10e4f4:
    if (ctx->pc == 0x10E4F4u) {
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F0u;
        // 0x10e4f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4F8u;
        goto label_10e4f8;
    }
    ctx->pc = 0x10E4F0u;
    {
        const bool branch_taken_0x10e4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F0u;
        // 0x10e4f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f0) {
            ctx->pc = 0x10E298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e298;
        }
    }
    ctx->pc = 0x10E4F8u;
label_10e4f8:
    // 0x10e4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10e4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10e4fc:
    // 0x10e4fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10e4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e500:
    // 0x10e500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10e500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10e504:
    // 0x10e504: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10e504u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e508:
    // 0x10e508: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10e508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_10e50c:
    // 0x10e50c: 0x3e00008  jr          $ra
label_10e510:
    if (ctx->pc == 0x10E510u) {
        ctx->pc = 0x10E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E50Cu;
        // 0x10e510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E514u;
        goto label_fallthrough_0x10e50c;
    }
    ctx->pc = 0x10E50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E50Cu;
        // 0x10e510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e50c:
    ctx->pc = 0x10E514u;
}
