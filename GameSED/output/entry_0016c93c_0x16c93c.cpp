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

// Function: entry_0016c93c
// Address: 0x16c93c - 0x16c94c
void entry_0016c93c_0x16c93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c93c_0x16c93c");
#endif

    switch (ctx->pc) {
        case 0x16c944u: goto label_16c944;
        default: break;
    }

    ctx->pc = 0x16c93cu;

    // 0x16c93c: 0xc061422  jal         func_185088
    ctx->pc = 0x16C93Cu;
    SET_GPR_U32(ctx, 31, 0x16C944u);
    ctx->pc = 0x16C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C93Cu;
    // 0x16c940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16C93Cu, 0x16C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C944u;
label_16c944:
    // 0x16c944: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x16c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x16c948: 0x268200a0  addiu       $v0, $s4, 0xA0
    ctx->pc = 0x16c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->pc = 0x16c94cu;
}
