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

// Function: entry_0015fc68
// Address: 0x15fc68 - 0x15fc7c
void entry_0015fc68_0x15fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fc68_0x15fc68");
#endif

    ctx->pc = 0x15fc68u;

    // 0x15fc68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15fc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc6c: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x15fc70: 0x8e650f28  lw          $a1, 0xF28($s3)
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3880)));
    // 0x15fc74: 0xc061344  jal         func_184D10
    ctx->pc = 0x15FC74u;
    SET_GPR_U32(ctx, 31, 0x15FC7Cu);
    ctx->pc = 0x15FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC74u;
    // 0x15fc78: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x15FC74u, 0x15FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC7Cu;
}
