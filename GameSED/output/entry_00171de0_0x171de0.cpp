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

// Function: entry_00171de0
// Address: 0x171de0 - 0x171e20
void entry_00171de0_0x171de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171de0_0x171de0");
#endif

    switch (ctx->pc) {
        case 0x171df4u: goto label_171df4;
        case 0x171e04u: goto label_171e04;
        case 0x171e18u: goto label_171e18;
        default: break;
    }

    ctx->pc = 0x171de0u;

    // 0x171de0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x171de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x171de4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x171DE4u;
    {
        const bool branch_taken_0x171de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DE4u;
        // 0x171de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171de4) {
            ctx->pc = 0x171E20u;
            return;
        }
    }
    ctx->pc = 0x171DECu;
    // 0x171dec: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DECu;
    SET_GPR_U32(ctx, 31, 0x171DF4u);
    ctx->pc = 0x171DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DECu;
    // 0x171df0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DECu, 0x171DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DF4u;
label_171df4:
    // 0x171df4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x171df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171df8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dfc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DFCu;
    SET_GPR_U32(ctx, 31, 0x171E04u);
    ctx->pc = 0x171E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DFCu;
    // 0x171e00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DFCu, 0x171E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E04u;
label_171e04:
    // 0x171e04: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x171e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x171e08: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171e0c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x171e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x171e10: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171E10u;
    SET_GPR_U32(ctx, 31, 0x171E18u);
    ctx->pc = 0x171E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E10u;
    // 0x171e14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171E10u, 0x171E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E18u;
label_171e18:
    // 0x171e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171E18u;
    {
        const bool branch_taken_0x171e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E18u;
        // 0x171e1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e18) {
            ctx->pc = 0x171E3Cu;
            return;
        }
    }
    ctx->pc = 0x171E20u;
}
