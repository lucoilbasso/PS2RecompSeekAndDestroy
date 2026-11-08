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

// Function: entry_0015620c
// Address: 0x15620c - 0x15621c
void entry_0015620c_0x15620c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015620c_0x15620c");
#endif

    ctx->pc = 0x15620cu;

    // 0x15620c: 0x8e040898  lw          $a0, 0x898($s0)
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x156210: 0x113140  sll         $a2, $s1, 5
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x156214: 0xc067294  jal         func_19CA50
    ctx->pc = 0x156214u;
    SET_GPR_U32(ctx, 31, 0x15621Cu);
    ctx->pc = 0x156218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156214u;
    // 0x156218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x156214u, 0x15621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15621Cu;
}
