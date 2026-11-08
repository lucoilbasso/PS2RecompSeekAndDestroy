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

// Function: entry_00177e78
// Address: 0x177e78 - 0x177e80
void entry_00177e78_0x177e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e78_0x177e78");
#endif

    ctx->pc = 0x177e78u;

    // 0x177e78: 0xc05dfa6  jal         func_177E98
    ctx->pc = 0x177E78u;
    SET_GPR_U32(ctx, 31, 0x177E80u);
    ctx->pc = 0x177E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E78u;
    // 0x177e7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E98u, 0x177E78u, 0x177E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E80u;
}
