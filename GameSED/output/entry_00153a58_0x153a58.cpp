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

// Function: entry_00153a58
// Address: 0x153a58 - 0x153a64
void entry_00153a58_0x153a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153a58_0x153a58");
#endif

    switch (ctx->pc) {
        case 0x153a60u: goto label_153a60;
        default: break;
    }

    ctx->pc = 0x153a58u;

    // 0x153a58: 0xc054962  jal         func_152588
    ctx->pc = 0x153A58u;
    SET_GPR_U32(ctx, 31, 0x153A60u);
    ctx->pc = 0x153A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A58u;
    // 0x153a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152588u, 0x153A58u, 0x153A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A60u;
label_153a60:
    // 0x153a60: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    ctx->pc = 0x153a64u;
}
