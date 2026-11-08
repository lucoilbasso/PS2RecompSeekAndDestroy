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

// Function: entry_001d3d54
// Address: 0x1d3d54 - 0x1d3d74
void entry_001d3d54_0x1d3d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d54_0x1d3d54");
#endif

    switch (ctx->pc) {
        case 0x1d3d6cu: goto label_1d3d6c;
        default: break;
    }

    ctx->pc = 0x1d3d54u;

    // 0x1d3d54: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3D54u;
    {
        const bool branch_taken_0x1d3d54 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D54u;
        // 0x1d3d58: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d54) {
            ctx->pc = 0x1D3D74u;
            return;
        }
    }
    ctx->pc = 0x1D3D5Cu;
    // 0x1d3d5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d3d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3d60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d3d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d64: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3D64u;
    SET_GPR_U32(ctx, 31, 0x1D3D6Cu);
    ctx->pc = 0x1D3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D64u;
    // 0x1d3d68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3D64u, 0x1D3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D6Cu;
label_1d3d6c:
    // 0x1d3d6c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1d3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1d3d70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1d3d74u;
}
