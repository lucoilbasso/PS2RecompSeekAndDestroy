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

// Function: entry_001cdf80
// Address: 0x1cdf80 - 0x1cdfa0
void entry_001cdf80_0x1cdf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdf80_0x1cdf80");
#endif

    switch (ctx->pc) {
        case 0x1cdf98u: goto label_1cdf98;
        default: break;
    }

    ctx->pc = 0x1cdf80u;

    // 0x1cdf80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDF80u;
    {
        const bool branch_taken_0x1cdf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF80u;
        // 0x1cdf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf80) {
            ctx->pc = 0x1CDFA0u;
            return;
        }
    }
    ctx->pc = 0x1CDF88u;
    // 0x1cdf88: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1cdf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdf8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf90: 0xc0736e0  jal         func_1CDB80
    ctx->pc = 0x1CDF90u;
    SET_GPR_U32(ctx, 31, 0x1CDF98u);
    ctx->pc = 0x1CDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF90u;
    // 0x1cdf94: 0x27a80d80  addiu       $t0, $sp, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB80u, 0x1CDF90u, 0x1CDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF98u;
label_1cdf98:
    // 0x1cdf98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDF98u;
    {
        const bool branch_taken_0x1cdf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF98u;
        // 0x1cdf9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf98) {
            ctx->pc = 0x1CDFACu;
            return;
        }
    }
    ctx->pc = 0x1CDFA0u;
}
