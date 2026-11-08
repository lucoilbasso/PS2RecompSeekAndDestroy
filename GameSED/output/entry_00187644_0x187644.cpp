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

// Function: entry_00187644
// Address: 0x187644 - 0x187654
void entry_00187644_0x187644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187644_0x187644");
#endif

    switch (ctx->pc) {
        case 0x18764cu: goto label_18764c;
        default: break;
    }

    ctx->pc = 0x187644u;

    // 0x187644: 0xc068584  jal         func_1A1610
    ctx->pc = 0x187644u;
    SET_GPR_U32(ctx, 31, 0x18764Cu);
    ctx->pc = 0x187648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187644u;
    // 0x187648: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x187644u, 0x18764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18764Cu;
label_18764c:
    // 0x18764c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18764cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187650: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x187654u;
}
