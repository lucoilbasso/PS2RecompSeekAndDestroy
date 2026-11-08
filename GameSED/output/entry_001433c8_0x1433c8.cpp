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

// Function: entry_001433c8
// Address: 0x1433c8 - 0x1433e4
void entry_001433c8_0x1433c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433c8_0x1433c8");
#endif

    ctx->pc = 0x1433c8u;

    // 0x1433c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1433cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1433CCu;
    {
        const bool branch_taken_0x1433cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433CCu;
        // 0x1433d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433cc) {
            ctx->pc = 0x1433E4u;
            return;
        }
    }
    ctx->pc = 0x1433D4u;
    // 0x1433d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1433d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433dc: 0xc05f820  jal         func_17E080
    ctx->pc = 0x1433DCu;
    SET_GPR_U32(ctx, 31, 0x1433E4u);
    ctx->pc = 0x1433E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433DCu;
    // 0x1433e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E080u, 0x1433DCu, 0x1433E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433E4u;
}
