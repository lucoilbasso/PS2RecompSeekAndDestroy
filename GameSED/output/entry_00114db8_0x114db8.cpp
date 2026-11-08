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

// Function: entry_00114db8
// Address: 0x114db8 - 0x114ddc
void entry_00114db8_0x114db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114db8_0x114db8");
#endif

    switch (ctx->pc) {
        case 0x114dc4u: goto label_114dc4;
        default: break;
    }

    ctx->pc = 0x114db8u;

    // 0x114db8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114dbc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114DBCu;
    SET_GPR_U32(ctx, 31, 0x114DC4u);
    ctx->pc = 0x114DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DBCu;
    // 0x114dc0: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114DBCu, 0x114DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DC4u;
label_114dc4:
    // 0x114dc4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114dc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114dcc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114dd0: 0x24a54360  addiu       $a1, $a1, 0x4360
    ctx->pc = 0x114dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17248));
    // 0x114dd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114DD4u;
    SET_GPR_U32(ctx, 31, 0x114DDCu);
    ctx->pc = 0x114DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DD4u;
    // 0x114dd8: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114DD4u, 0x114DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DDCu;
}
