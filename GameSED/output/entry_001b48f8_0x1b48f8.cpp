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

// Function: entry_001b48f8
// Address: 0x1b48f8 - 0x1b4980
void entry_001b48f8_0x1b48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48f8_0x1b48f8");
#endif

    switch (ctx->pc) {
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4978u: goto label_1b4978;
        default: break;
    }

    ctx->pc = 0x1b48f8u;

    // 0x1b48f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b48fc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4900: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4904: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4908: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b4908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b490c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B490Cu;
    SET_GPR_U32(ctx, 31, 0x1B4914u);
    ctx->pc = 0x1B4910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B490Cu;
    // 0x1b4910: 0x26d09a80  addiu       $s0, $s6, -0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B490Cu, 0x1B4914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4914u;
label_1b4914:
    // 0x1b4914: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b4918: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b491c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4920: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4924: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b4928: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b4928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b492c: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b4930: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B4930u;
    SET_GPR_U32(ctx, 31, 0x1B4938u);
    ctx->pc = 0x1B4934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4930u;
    // 0x1b4934: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B4930u, 0x1B4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4938u;
label_1b4938:
    // 0x1b4938: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b493c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b493cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4940: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4944: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b4948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b494c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1b494cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1b4950: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b4950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4954: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4958: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4958u;
    SET_GPR_U32(ctx, 31, 0x1B4960u);
    ctx->pc = 0x1B495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4958u;
    // 0x1b495c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4958u, 0x1B4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4960u;
label_1b4960:
    // 0x1b4960: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4960u;
    {
        const bool branch_taken_0x1b4960 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4960u;
        // 0x1b4964: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4960) {
            ctx->pc = 0x1B4980u;
            return;
        }
    }
    ctx->pc = 0x1B4968u;
    // 0x1b4968: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4968u;
    SET_GPR_U32(ctx, 31, 0x1B4970u);
    ctx->pc = 0x1B496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4968u;
    // 0x1b496c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4968u, 0x1B4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4970u;
label_1b4970:
    // 0x1b4970: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4970u;
    SET_GPR_U32(ctx, 31, 0x1B4978u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4970u, 0x1B4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4978u;
label_1b4978:
    // 0x1b4978: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4978u;
    {
        const bool branch_taken_0x1b4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4978u;
        // 0x1b497c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4978) {
            ctx->pc = 0x1B49B8u;
            return;
        }
    }
    ctx->pc = 0x1B4980u;
}
