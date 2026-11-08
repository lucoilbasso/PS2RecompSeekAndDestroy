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

// Function: entry_001583f0
// Address: 0x1583f0 - 0x158404
void entry_001583f0_0x1583f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001583f0_0x1583f0");
#endif

    ctx->pc = 0x1583f0u;

    // 0x1583f0: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x1583f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1583f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583fc: 0xc056112  jal         func_158448
    ctx->pc = 0x1583FCu;
    SET_GPR_U32(ctx, 31, 0x158404u);
    ctx->pc = 0x158400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583FCu;
    // 0x158400: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x1583FCu, 0x158404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158404u;
}
