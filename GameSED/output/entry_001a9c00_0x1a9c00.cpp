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

// Function: entry_001a9c00
// Address: 0x1a9c00 - 0x1a9c20
void entry_001a9c00_0x1a9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9c00_0x1a9c00");
#endif

    switch (ctx->pc) {
        case 0x1a9c08u: goto label_1a9c08;
        default: break;
    }

    ctx->pc = 0x1a9c00u;

    // 0x1a9c00: 0xc06a798  jal         func_1A9E60
    ctx->pc = 0x1A9C00u;
    SET_GPR_U32(ctx, 31, 0x1A9C08u);
    ctx->pc = 0x1A9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9E60u, 0x1A9C00u, 0x1A9C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C08u;
label_1a9c08:
    // 0x1a9c08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a9c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a9c0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9c10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9c14: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a9c18: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a9c1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a9c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1a9c20u;
}
