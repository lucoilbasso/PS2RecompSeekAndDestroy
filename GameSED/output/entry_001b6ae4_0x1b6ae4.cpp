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

// Function: entry_001b6ae4
// Address: 0x1b6ae4 - 0x1b6b04
void entry_001b6ae4_0x1b6ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6ae4_0x1b6ae4");
#endif

    switch (ctx->pc) {
        case 0x1b6afcu: goto label_1b6afc;
        default: break;
    }

    ctx->pc = 0x1b6ae4u;

    // 0x1b6ae4: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1b6ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x1b6ae8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6AE8u;
    {
        const bool branch_taken_0x1b6ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AE8u;
        // 0x1b6aec: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ae8) {
            ctx->pc = 0x1B6B04u;
            return;
        }
    }
    ctx->pc = 0x1B6AF0u;
    // 0x1b6af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6af4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B6AF4u;
    SET_GPR_U32(ctx, 31, 0x1B6AFCu);
    ctx->pc = 0x1B6AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6AF4u;
    // 0x1b6af8: 0x2484acb0  addiu       $a0, $a0, -0x5350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B6AF4u, 0x1B6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AFCu;
label_1b6afc:
    // 0x1b6afc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B6AFCu;
    {
        const bool branch_taken_0x1b6afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AFCu;
        // 0x1b6b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6afc) {
            ctx->pc = 0x1B6B8Cu;
            return;
        }
    }
    ctx->pc = 0x1B6B04u;
}
