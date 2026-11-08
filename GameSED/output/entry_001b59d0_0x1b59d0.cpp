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

// Function: entry_001b59d0
// Address: 0x1b59d0 - 0x1b5a10
void entry_001b59d0_0x1b59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b59d0_0x1b59d0");
#endif

    switch (ctx->pc) {
        case 0x1b5a00u: goto label_1b5a00;
        default: break;
    }

    ctx->pc = 0x1b59d0u;

    // 0x1b59d0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b59d4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b59d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b59d8: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b59dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b59dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b59e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b59e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b59e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b59e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b59ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b59f0: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b59f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b59f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b59f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b59f8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B59F8u;
    SET_GPR_U32(ctx, 31, 0x1B5A00u);
    ctx->pc = 0x1B59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B59F8u;
    // 0x1b59fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B59F8u, 0x1B5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A00u;
label_1b5a00:
    // 0x1b5a00: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5A00u;
    {
        const bool branch_taken_0x1b5a00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5a00) {
            ctx->pc = 0x1B5A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A00u;
            // 0x1b5a04: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A10u;
            return;
        }
    }
    ctx->pc = 0x1B5A08u;
    // 0x1b5a08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b5a0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1b5a10u;
}
