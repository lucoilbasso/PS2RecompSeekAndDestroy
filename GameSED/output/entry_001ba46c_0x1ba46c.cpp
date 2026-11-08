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

// Function: entry_001ba46c
// Address: 0x1ba46c - 0x1ba4b8
void entry_001ba46c_0x1ba46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba46c_0x1ba46c");
#endif

    switch (ctx->pc) {
        case 0x1ba488u: goto label_1ba488;
        case 0x1ba4b0u: goto label_1ba4b0;
        default: break;
    }

    ctx->pc = 0x1ba46cu;

    // 0x1ba46c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba470: 0x26b0d700  addiu       $s0, $s5, -0x2900
    ctx->pc = 0x1ba470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956800));
    // 0x1ba474: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ba478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba47c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1ba47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1ba480: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BA480u;
    SET_GPR_U32(ctx, 31, 0x1BA488u);
    ctx->pc = 0x1BA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA480u;
    // 0x1ba484: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BA480u, 0x1BA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA488u;
label_1ba488:
    // 0x1ba488: 0x26e4d880  addiu       $a0, $s7, -0x2780
    ctx->pc = 0x1ba488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957184));
    // 0x1ba48c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ba48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ba490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ba498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba49c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1ba49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ba4a0: 0x27c9d840  addiu       $t1, $fp, -0x27C0
    ctx->pc = 0x1ba4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957120));
    // 0x1ba4a4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ba4a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ba4a8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BA4A8u;
    SET_GPR_U32(ctx, 31, 0x1BA4B0u);
    ctx->pc = 0x1BA4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4A8u;
    // 0x1ba4ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BA4A8u, 0x1BA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4B0u;
label_1ba4b0:
    // 0x1ba4b0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA4B0u;
    {
        const bool branch_taken_0x1ba4b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4B0u;
        // 0x1ba4b4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4b0) {
            ctx->pc = 0x1BA4CCu;
            return;
        }
    }
    ctx->pc = 0x1BA4B8u;
}
