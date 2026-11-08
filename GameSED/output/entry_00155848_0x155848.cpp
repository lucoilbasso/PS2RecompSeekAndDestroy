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

// Function: entry_00155848
// Address: 0x155848 - 0x155858
void entry_00155848_0x155848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155848_0x155848");
#endif

    switch (ctx->pc) {
        case 0x155854u: goto label_155854;
        default: break;
    }

    ctx->pc = 0x155848u;

    // 0x155848: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15584c: 0xc058562  jal         func_161588
    ctx->pc = 0x15584Cu;
    SET_GPR_U32(ctx, 31, 0x155854u);
    ctx->pc = 0x155850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15584Cu;
    // 0x155850: 0x8e060310  lw          $a2, 0x310($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x15584Cu, 0x155854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155854u;
label_155854:
    // 0x155854: 0x8e04076c  lw          $a0, 0x76C($s0)
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    ctx->pc = 0x155858u;
}
