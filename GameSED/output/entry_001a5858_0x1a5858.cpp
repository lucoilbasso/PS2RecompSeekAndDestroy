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

// Function: entry_001a5858
// Address: 0x1a5858 - 0x1a5870
void entry_001a5858_0x1a5858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5858_0x1a5858");
#endif

    switch (ctx->pc) {
        case 0x1a5864u: goto label_1a5864;
        default: break;
    }

    ctx->pc = 0x1a5858u;

    // 0x1a5858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a585c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1A585Cu;
    SET_GPR_U32(ctx, 31, 0x1A5864u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1A585Cu, 0x1A5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5864u;
label_1a5864:
    // 0x1a5864: 0x8f83917c  lw          $v1, -0x6E84($gp)
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939004)));
    // 0x1a5868: 0x8f829184  lw          $v0, -0x6E7C($gp)
    ctx->pc = 0x1a5868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939012)));
    // 0x1a586c: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->pc = 0x1a5870u;
}
