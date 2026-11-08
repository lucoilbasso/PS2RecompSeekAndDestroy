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

// Function: caseD_a
// Address: 0x134408 - 0x134494
void caseD_a_0x134408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x134408");
#endif

    switch (ctx->pc) {
        case 0x134414u: goto label_134414;
        case 0x13443cu: goto label_13443c;
        case 0x134454u: goto label_134454;
        case 0x134490u: goto label_134490;
        default: break;
    }

    ctx->pc = 0x134408u;

    // 0x134408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13440c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13440Cu;
    SET_GPR_U32(ctx, 31, 0x134414u);
    ctx->pc = 0x134410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13440Cu;
    // 0x134410: 0x3c118000  lui         $s1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13440Cu, 0x134414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134414u;
label_134414:
    // 0x134414: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134418: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134418u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13441c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134420: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134424: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x134424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13442c: 0x10710019  beq         $v1, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13442Cu;
    {
        const bool branch_taken_0x13442c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x134430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13442Cu;
        // 0x134430: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13442c) {
            ctx->pc = 0x134494u;
            return;
        }
    }
    ctx->pc = 0x134434u;
    // 0x134434: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134434u;
    SET_GPR_U32(ctx, 31, 0x13443Cu);
    ctx->pc = 0x134438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134434u;
    // 0x134438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134434u, 0x13443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13443Cu;
label_13443c:
    // 0x13443c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134440: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134444: 0x10710013  beq         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x134444u;
    {
        const bool branch_taken_0x134444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x134448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134444u;
        // 0x134448: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134444) {
            ctx->pc = 0x134494u;
            return;
        }
    }
    ctx->pc = 0x13444Cu;
    // 0x13444c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13444Cu;
    SET_GPR_U32(ctx, 31, 0x134454u);
    ctx->pc = 0x134450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13444Cu;
    // 0x134450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13444Cu, 0x134454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134454u;
label_134454:
    // 0x134454: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134458: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13445c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134460: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x134460u;
    {
        const bool branch_taken_0x134460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x134464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134460u;
        // 0x134464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134460) {
            ctx->pc = 0x134498u;
            return;
        }
    }
    ctx->pc = 0x134468u;
    // 0x134468: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x134468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x13446c: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x13446cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134470: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x134470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134474: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x134478: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x134478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13447c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134480: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134480u;
    {
        const bool branch_taken_0x134480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x134484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134480u;
        // 0x134484: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134480) {
            ctx->pc = 0x134494u;
            return;
        }
    }
    ctx->pc = 0x134488u;
    // 0x134488: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134488u;
    SET_GPR_U32(ctx, 31, 0x134490u);
    ctx->pc = 0x13448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134488u;
    // 0x13448c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134488u, 0x134490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134490u;
label_134490:
    // 0x134490: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134494u;
}
