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

// Function: entry_001a9a40
// Address: 0x1a9a40 - 0x1a9a54
void entry_001a9a40_0x1a9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9a40_0x1a9a40");
#endif

    switch (ctx->pc) {
        case 0x1a9a48u: goto label_1a9a48;
        default: break;
    }

    ctx->pc = 0x1a9a40u;

    // 0x1a9a40: 0xc06a798  jal         func_1A9E60
    ctx->pc = 0x1A9A40u;
    SET_GPR_U32(ctx, 31, 0x1A9A48u);
    ctx->pc = 0x1A9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9E60u, 0x1A9A40u, 0x1A9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A48u;
label_1a9a48:
    // 0x1a9a48: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1a9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1a9a4c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1a9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a9a50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1a9a54u;
}
