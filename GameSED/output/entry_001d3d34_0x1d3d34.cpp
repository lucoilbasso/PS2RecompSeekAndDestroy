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

// Function: entry_001d3d34
// Address: 0x1d3d34 - 0x1d3d54
void entry_001d3d34_0x1d3d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d34_0x1d3d34");
#endif

    switch (ctx->pc) {
        case 0x1d3d4cu: goto label_1d3d4c;
        default: break;
    }

    ctx->pc = 0x1d3d34u;

    // 0x1d3d34: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3D34u;
    {
        const bool branch_taken_0x1d3d34 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d3d34) {
            ctx->pc = 0x1D3D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3D34u;
            // 0x1d3d38: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3D54u;
            return;
        }
    }
    ctx->pc = 0x1D3D3Cu;
    // 0x1d3d3c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3d40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d3d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d44: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3D44u;
    SET_GPR_U32(ctx, 31, 0x1D3D4Cu);
    ctx->pc = 0x1D3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D44u;
    // 0x1d3d48: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3D44u, 0x1D3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D4Cu;
label_1d3d4c:
    // 0x1d3d4c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d3d50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x1d3d54u;
}
