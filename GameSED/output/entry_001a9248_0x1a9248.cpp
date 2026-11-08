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

// Function: entry_001a9248
// Address: 0x1a9248 - 0x1a9260
void entry_001a9248_0x1a9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9248_0x1a9248");
#endif

    ctx->pc = 0x1a9248u;

    // 0x1a9248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a924c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9250: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a9254: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a9258: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A9258u;
    SET_GPR_U32(ctx, 31, 0x1A9260u);
    ctx->pc = 0x1A925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9258u;
    // 0x1a925c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A9258u, 0x1A9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9260u;
}
