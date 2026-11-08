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

// Function: entry_001d40b4
// Address: 0x1d40b4 - 0x1d40dc
void entry_001d40b4_0x1d40b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d40b4_0x1d40b4");
#endif

    switch (ctx->pc) {
        case 0x1d40c0u: goto label_1d40c0;
        default: break;
    }

    ctx->pc = 0x1d40b4u;

    // 0x1d40b4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d40b8: 0xc074b66  jal         func_1D2D98
    ctx->pc = 0x1D40B8u;
    SET_GPR_U32(ctx, 31, 0x1D40C0u);
    ctx->pc = 0x1D40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40B8u;
    // 0x1d40bc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2D98u, 0x1D40B8u, 0x1D40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40C0u;
label_1d40c0:
    // 0x1d40c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d40c4: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d40c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d40c8: 0xa2b40000  sb          $s4, 0x0($s5)
    ctx->pc = 0x1d40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1d40cc: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x1d40ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d40d0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D40D0u;
    {
        const bool branch_taken_0x1d40d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40D0u;
        // 0x1d40d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40d0) {
            ctx->pc = 0x1D4098u;
            return;
        }
    }
    ctx->pc = 0x1D40D8u;
    // 0x1d40d8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->pc = 0x1d40dcu;
}
