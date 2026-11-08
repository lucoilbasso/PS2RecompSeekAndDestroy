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

// Function: entry_001a630c
// Address: 0x1a630c - 0x1a631c
void entry_001a630c_0x1a630c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a630c_0x1a630c");
#endif

    switch (ctx->pc) {
        case 0x1a6314u: goto label_1a6314;
        default: break;
    }

    ctx->pc = 0x1a630cu;

    // 0x1a630c: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x1A630Cu;
    SET_GPR_U32(ctx, 31, 0x1A6314u);
    ctx->pc = 0x1A6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A630Cu;
    // 0x1a6310: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1A630Cu, 0x1A6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6314u;
label_1a6314:
    // 0x1a6314: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6318: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a6318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a631cu;
}
