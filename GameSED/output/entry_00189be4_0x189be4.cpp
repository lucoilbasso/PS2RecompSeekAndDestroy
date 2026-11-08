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

// Function: entry_00189be4
// Address: 0x189be4 - 0x189c08
void entry_00189be4_0x189be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189be4_0x189be4");
#endif

    switch (ctx->pc) {
        case 0x189c00u: goto label_189c00;
        default: break;
    }

    ctx->pc = 0x189be4u;

    // 0x189be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189be8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x189bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189BECu;
    {
        const bool branch_taken_0x189bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BECu;
        // 0x189bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bec) {
            ctx->pc = 0x189C08u;
            return;
        }
    }
    ctx->pc = 0x189BF4u;
    // 0x189bf4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x189bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bf8: 0xc062808  jal         func_18A020
    ctx->pc = 0x189BF8u;
    SET_GPR_U32(ctx, 31, 0x189C00u);
    ctx->pc = 0x189BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BF8u;
    // 0x189bfc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A020u, 0x189BF8u, 0x189C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C00u;
label_189c00:
    // 0x189c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189C00u;
    {
        const bool branch_taken_0x189c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C00u;
        // 0x189c04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c00) {
            ctx->pc = 0x189C18u;
            return;
        }
    }
    ctx->pc = 0x189C08u;
}
