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

// Function: entry_0014d3a8
// Address: 0x14d3a8 - 0x14d3b4
void entry_0014d3a8_0x14d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d3a8_0x14d3a8");
#endif

    switch (ctx->pc) {
        case 0x14d3b0u: goto label_14d3b0;
        default: break;
    }

    ctx->pc = 0x14d3a8u;

    // 0x14d3a8: 0xc055a18  jal         func_156860
    ctx->pc = 0x14D3A8u;
    SET_GPR_U32(ctx, 31, 0x14D3B0u);
    ctx->pc = 0x14D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3A8u;
    // 0x14d3ac: 0x8c4401ac  lw          $a0, 0x1AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156860u, 0x14D3A8u, 0x14D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3B0u;
label_14d3b0:
    // 0x14d3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14d3b4u;
}
