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

// Function: EffectCommandInit__FPUi
// Address: 0x12e1d8 - 0x12e3bc
void EffectCommandInit__FPUi_0x12e1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectCommandInit__FPUi_0x12e1d8");
#endif

    switch (ctx->pc) {
        case 0x12e204u: goto label_12e204;
        case 0x12e21cu: goto label_12e21c;
        case 0x12e248u: goto label_12e248;
        case 0x12e25cu: goto label_12e25c;
        case 0x12e268u: goto label_12e268;
        case 0x12e284u: goto label_12e284;
        case 0x12e2a4u: goto label_12e2a4;
        case 0x12e2c0u: goto label_12e2c0;
        case 0x12e2e0u: goto label_12e2e0;
        case 0x12e2e8u: goto label_12e2e8;
        case 0x12e310u: goto label_12e310;
        case 0x12e324u: goto label_12e324;
        case 0x12e338u: goto label_12e338;
        case 0x12e358u: goto label_12e358;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e380u: goto label_12e380;
        case 0x12e398u: goto label_12e398;
        default: break;
    }

    ctx->pc = 0x12e1d8u;

    // 0x12e1d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e1dc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x12e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12e1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e1e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12e1e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e1f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e1f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12e1f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12e1fc: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E1FCu;
    SET_GPR_U32(ctx, 31, 0x12E204u);
    ctx->pc = 0x12E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1FCu;
    // 0x12e200: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E1FCu, 0x12E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E204u;
label_12e204:
    // 0x12e204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e208: 0x52000064  beql        $s0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x12E208u;
    {
        const bool branch_taken_0x12e208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e208) {
            ctx->pc = 0x12E20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E208u;
            // 0x12e20c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E39Cu;
            goto label_12e39c;
        }
    }
    ctx->pc = 0x12E210u;
    // 0x12e210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e214: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E214u;
    SET_GPR_U32(ctx, 31, 0x12E21Cu);
    ctx->pc = 0x12E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E214u;
    // 0x12e218: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E214u, 0x12E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E21Cu;
label_12e21c:
    // 0x12e21c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x12e21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e224: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E224u;
    {
        const bool branch_taken_0x12e224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E224u;
        // 0x12e228: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e224) {
            ctx->pc = 0x12E240u;
            goto label_12e240;
        }
    }
    ctx->pc = 0x12E22Cu;
    // 0x12e22c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e230: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x12e230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x12e234: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12e238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E238u;
    {
        const bool branch_taken_0x12e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E238u;
        // 0x12e23c: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e238) {
            ctx->pc = 0x12E25Cu;
            goto label_12e25c;
        }
    }
    ctx->pc = 0x12E240u;
label_12e240:
    // 0x12e240: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12E240u;
    SET_GPR_U32(ctx, 31, 0x12E248u);
    ctx->pc = 0x12E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E240u;
    // 0x12e244: 0x24845eb0  addiu       $a0, $a0, 0x5EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12E240u, 0x12E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E248u;
label_12e248:
    // 0x12e248: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e24c: 0x24a55ec0  addiu       $a1, $a1, 0x5EC0
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24256));
    // 0x12e250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12e250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e254: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E254u;
    SET_GPR_U32(ctx, 31, 0x12E25Cu);
    ctx->pc = 0x12E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E254u;
    // 0x12e258: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E254u, 0x12E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E25Cu;
label_12e25c:
    // 0x12e25c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e260: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E260u;
    SET_GPR_U32(ctx, 31, 0x12E268u);
    ctx->pc = 0x12E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E260u;
    // 0x12e264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E260u, 0x12E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E268u;
label_12e268:
    // 0x12e268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e26c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E26Cu;
    {
        const bool branch_taken_0x12e26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E26Cu;
        // 0x12e270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e26c) {
            ctx->pc = 0x12E27Cu;
            goto label_12e27c;
        }
    }
    ctx->pc = 0x12E274u;
    // 0x12e274: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e278: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x12e278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_12e27c:
    // 0x12e27c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E27Cu;
    SET_GPR_U32(ctx, 31, 0x12E284u);
    ctx->pc = 0x12E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E27Cu;
    // 0x12e280: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E27Cu, 0x12E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E284u;
label_12e284:
    // 0x12e284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e288: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E288u;
    {
        const bool branch_taken_0x12e288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e288) {
            ctx->pc = 0x12E28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E288u;
            // 0x12e28c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E294u;
            goto label_12e294;
        }
    }
    ctx->pc = 0x12E290u;
    // 0x12e290: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12e294:
    // 0x12e294: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x12e294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x12e298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e29c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E29Cu;
    SET_GPR_U32(ctx, 31, 0x12E2A4u);
    ctx->pc = 0x12E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E29Cu;
    // 0x12e2a0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E29Cu, 0x12E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2A4u;
label_12e2a4:
    // 0x12e2a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2a8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E2A8u;
            // 0x12e2ac: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E2C8u;
            goto label_12e2c8;
        }
    }
    ctx->pc = 0x12E2B0u;
    // 0x12e2b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e2b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E2B4u;
    {
        const bool branch_taken_0x12e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2B4u;
        // 0x12e2b8: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2b4) {
            ctx->pc = 0x12E2C8u;
            goto label_12e2c8;
        }
    }
    ctx->pc = 0x12E2BCu;
    // 0x12e2bc: 0x0  nop
    ctx->pc = 0x12e2bcu;
    // NOP
label_12e2c0:
    // 0x12e2c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12E2C0u;
    {
        const bool branch_taken_0x12e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2C0u;
        // 0x12e2c4: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2c0) {
            ctx->pc = 0x12E328u;
            goto label_12e328;
        }
    }
    ctx->pc = 0x12E2C8u;
label_12e2c8:
    // 0x12e2c8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x12e2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2d0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12e2d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e2d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E2D4u;
    {
        const bool branch_taken_0x12e2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D4u;
        // 0x12e2d8: 0x2671002c  addiu       $s1, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2d4) {
            ctx->pc = 0x12E2F8u;
            goto label_12e2f8;
        }
    }
    ctx->pc = 0x12E2DCu;
    // 0x12e2dc: 0x0  nop
    ctx->pc = 0x12e2dcu;
    // NOP
label_12e2e0:
    // 0x12e2e0: 0xc04c852  jal         func_132148
    ctx->pc = 0x12E2E0u;
    SET_GPR_U32(ctx, 31, 0x12E2E8u);
    ctx->pc = 0x12E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2E0u;
    // 0x12e2e4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132148u, 0x12E2E0u, 0x12E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2E8u;
label_12e2e8:
    // 0x12e2e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12e2ec: 0x1255fff4  beq         $s2, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x12E2ECu;
    {
        const bool branch_taken_0x12e2ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x12E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2ECu;
        // 0x12e2f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2ec) {
            ctx->pc = 0x12E2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e2c0;
        }
    }
    ctx->pc = 0x12E2F4u;
    // 0x12e2f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12e2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12e2f8:
    // 0x12e2f8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x12e2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12e2fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12E2FCu;
    {
        const bool branch_taken_0x12e2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2fc) {
            ctx->pc = 0x12E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E2FCu;
            // 0x12e300: 0xae720038  sw          $s2, 0x38($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E32Cu;
            goto label_12e32c;
        }
    }
    ctx->pc = 0x12E304u;
    // 0x12e304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e308: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E308u;
    SET_GPR_U32(ctx, 31, 0x12E310u);
    ctx->pc = 0x12E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E308u;
    // 0x12e30c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E308u, 0x12E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E310u;
label_12e310:
    // 0x12e310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e314: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x12E314u;
    {
        const bool branch_taken_0x12e314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e314) {
            ctx->pc = 0x12E318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E314u;
            // 0x12e318: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e2e0;
        }
    }
    ctx->pc = 0x12E31Cu;
    // 0x12e31c: 0xc04c852  jal         func_132148
    ctx->pc = 0x12E31Cu;
    SET_GPR_U32(ctx, 31, 0x12E324u);
    ctx->pc = 0x12E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E31Cu;
    // 0x12e320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132148u, 0x12E31Cu, 0x12E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E324u;
label_12e324:
    // 0x12e324: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12e328:
    // 0x12e328: 0xae720038  sw          $s2, 0x38($s3)
    ctx->pc = 0x12e328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
label_12e32c:
    // 0x12e32c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e330: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E330u;
    SET_GPR_U32(ctx, 31, 0x12E338u);
    ctx->pc = 0x12E334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E330u;
    // 0x12e334: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E330u, 0x12E338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E338u;
label_12e338:
    // 0x12e338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e33c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E33Cu;
    {
        const bool branch_taken_0x12e33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E33Cu;
        // 0x12e340: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e33c) {
            ctx->pc = 0x12E350u;
            goto label_12e350;
        }
    }
    ctx->pc = 0x12E344u;
    // 0x12e344: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E344u;
    {
        const bool branch_taken_0x12e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E344u;
        // 0x12e348: 0xae700028  sw          $s0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e344) {
            ctx->pc = 0x12E36Cu;
            goto label_12e36c;
        }
    }
    ctx->pc = 0x12E34Cu;
    // 0x12e34c: 0x0  nop
    ctx->pc = 0x12e34cu;
    // NOP
label_12e350:
    // 0x12e350: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12E350u;
    SET_GPR_U32(ctx, 31, 0x12E358u);
    ctx->pc = 0x12E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E350u;
    // 0x12e354: 0x24845ee0  addiu       $a0, $a0, 0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12E350u, 0x12E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E358u;
label_12e358:
    // 0x12e358: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e35c: 0x24a55ef8  addiu       $a1, $a1, 0x5EF8
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24312));
    // 0x12e360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e364: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E364u;
    SET_GPR_U32(ctx, 31, 0x12E36Cu);
    ctx->pc = 0x12E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E364u;
    // 0x12e368: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E364u, 0x12E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E36Cu;
label_12e36c:
    // 0x12e36c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12e370: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E370u;
    {
        const bool branch_taken_0x12e370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E370u;
        // 0x12e374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e370) {
            ctx->pc = 0x12E388u;
            goto label_12e388;
        }
    }
    ctx->pc = 0x12E378u;
    // 0x12e378: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x12E378u;
    SET_GPR_U32(ctx, 31, 0x12E380u);
    ctx->pc = 0x12E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E378u;
    // 0x12e37c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x12E378u, 0x12E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E380u;
label_12e380:
    // 0x12e380: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12E380u;
    {
        const bool branch_taken_0x12e380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E380u;
        // 0x12e384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e380) {
            ctx->pc = 0x12E39Cu;
            goto label_12e39c;
        }
    }
    ctx->pc = 0x12E388u;
label_12e388:
    // 0x12e388: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E388u;
    {
        const bool branch_taken_0x12e388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E388u;
        // 0x12e38c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e388) {
            ctx->pc = 0x12E39Cu;
            goto label_12e39c;
        }
    }
    ctx->pc = 0x12E390u;
    // 0x12e390: 0xc04b196  jal         func_12C658
    ctx->pc = 0x12E390u;
    SET_GPR_U32(ctx, 31, 0x12E398u);
    ctx->pc = 0x12E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E390u;
    // 0x12e394: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C658u, 0x12E390u, 0x12E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E398u;
label_12e398:
    // 0x12e398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e39c:
    // 0x12e39c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e3a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e3a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e3a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e3a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e3a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12e3a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e3ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12e3acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12e3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B4u;
        // 0x12e3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E3BCu;
}
