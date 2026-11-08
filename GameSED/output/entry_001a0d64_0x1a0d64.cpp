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

// Function: entry_001a0d64
// Address: 0x1a0d64 - 0x1a0d70
void entry_001a0d64_0x1a0d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d64_0x1a0d64");
#endif

    ctx->pc = 0x1a0d64u;

    // 0x1a0d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0d68: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x1A0D68u;
    SET_GPR_U32(ctx, 31, 0x1A0D70u);
    ctx->pc = 0x1A0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D68u;
    // 0x1a0d6c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1A0D68u, 0x1A0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D70u;
}
