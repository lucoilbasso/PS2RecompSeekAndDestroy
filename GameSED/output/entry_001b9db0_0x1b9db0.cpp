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

// Function: entry_001b9db0
// Address: 0x1b9db0 - 0x1b9dec
void entry_001b9db0_0x1b9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9db0_0x1b9db0");
#endif

    switch (ctx->pc) {
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9de4u: goto label_1b9de4;
        default: break;
    }

    ctx->pc = 0x1b9db0u;

    // 0x1b9db0: 0x8c44c0a8  lw          $a0, -0x3F58($v0)
    ctx->pc = 0x1b9db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x1b9db4: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B9DB4u;
    SET_GPR_U32(ctx, 31, 0x1B9DBCu);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B9DB4u, 0x1B9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DBCu;
label_1b9dbc:
    // 0x1b9dbc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b9dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b9dc0: 0x8c62c094  lw          $v0, -0x3F6C($v1)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24C094u));
    // 0x1b9dc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9DC4u;
    {
        const bool branch_taken_0x1b9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DC4u;
        // 0x1b9dc8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dc4) {
            ctx->pc = 0x1B9DECu;
            return;
        }
    }
    ctx->pc = 0x1B9DCCu;
    // 0x1b9dcc: 0x8c43d680  lw          $v1, -0x2980($v0)
    ctx->pc = 0x1b9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956672)));
    // 0x1b9dd0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9DD0u;
    {
        const bool branch_taken_0x1b9dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DD0u;
        // 0x1b9dd4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dd0) {
            ctx->pc = 0x1B9DECu;
            return;
        }
    }
    ctx->pc = 0x1B9DD8u;
    // 0x1b9dd8: 0x8c44c0a0  lw          $a0, -0x3F60($v0)
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951072)));
    // 0x1b9ddc: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B9DDCu;
    SET_GPR_U32(ctx, 31, 0x1B9DE4u);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B9DDCu, 0x1B9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DE4u;
label_1b9de4:
    // 0x1b9de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9DE4u;
    {
        const bool branch_taken_0x1b9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9de4) {
            ctx->pc = 0x1B9DF4u;
            return;
        }
    }
    ctx->pc = 0x1B9DECu;
}
