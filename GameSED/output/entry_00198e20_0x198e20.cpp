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

// Function: entry_00198e20
// Address: 0x198e20 - 0x198e30
void entry_00198e20_0x198e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198e20_0x198e20");
#endif

    ctx->pc = 0x198e20u;

    // 0x198e20: 0x8e3303f0  lw          $s3, 0x3F0($s1)
    ctx->pc = 0x198e20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x198e24: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x198e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e28: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x198E28u;
    SET_GPR_U32(ctx, 31, 0x198E30u);
    ctx->pc = 0x198E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E28u;
    // 0x198e2c: 0x2412003e  addiu       $s2, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x198E28u, 0x198E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E30u;
}
