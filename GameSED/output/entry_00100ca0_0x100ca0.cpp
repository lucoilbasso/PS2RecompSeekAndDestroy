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

// Function: entry_00100ca0
// Address: 0x100ca0 - 0x100cb4
void entry_00100ca0_0x100ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ca0_0x100ca0");
#endif

    ctx->pc = 0x100ca0u;

    // 0x100ca0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ca8: 0x24a51968  addiu       $a1, $a1, 0x1968
    ctx->pc = 0x100ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6504));
    // 0x100cac: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x100CACu;
    SET_GPR_U32(ctx, 31, 0x100CB4u);
    ctx->pc = 0x100CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CACu;
    // 0x100cb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100CACu, 0x100CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CB4u;
}
