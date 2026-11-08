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

// Function: entry_001bb6f4
// Address: 0x1bb6f4 - 0x1bb704
void entry_001bb6f4_0x1bb6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb6f4_0x1bb6f4");
#endif

    ctx->pc = 0x1bb6f4u;

    // 0x1bb6f4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6F4u;
    {
        const bool branch_taken_0x1bb6f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6f4) {
            ctx->pc = 0x1BB704u;
            return;
        }
    }
    ctx->pc = 0x1BB6FCu;
    // 0x1bb6fc: 0xc06e728  jal         func_1B9CA0
    ctx->pc = 0x1BB6FCu;
    SET_GPR_U32(ctx, 31, 0x1BB704u);
    ctx->pc = 0x1BB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6FCu;
    // 0x1bb700: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CA0u, 0x1BB6FCu, 0x1BB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB704u;
}
