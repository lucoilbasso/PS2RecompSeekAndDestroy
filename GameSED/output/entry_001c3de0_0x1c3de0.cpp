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

// Function: entry_001c3de0
// Address: 0x1c3de0 - 0x1c3e18
void entry_001c3de0_0x1c3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3de0_0x1c3de0");
#endif

    switch (ctx->pc) {
        case 0x1c3e08u: goto label_1c3e08;
        default: break;
    }

    ctx->pc = 0x1c3de0u;

label_1c3de0:
    // 0x1c3de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3de4: 0x0  nop
    ctx->pc = 0x1c3de4u;
    // NOP
    // 0x1c3de8: 0x0  nop
    ctx->pc = 0x1c3de8u;
    // NOP
    // 0x1c3dec: 0x0  nop
    ctx->pc = 0x1c3decu;
    // NOP
    // 0x1c3df0: 0x0  nop
    ctx->pc = 0x1c3df0u;
    // NOP
    // 0x1c3df4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3DF4u;
    {
        const bool branch_taken_0x1c3df4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3df4) {
            ctx->pc = 0x1C3DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3de0;
        }
    }
    ctx->pc = 0x1C3DFCu;
    // 0x1c3dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e00: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C3E00u;
    SET_GPR_U32(ctx, 31, 0x1C3E08u);
    ctx->pc = 0x1C3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E00u;
    // 0x1c3e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C3E00u, 0x1C3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E08u;
label_1c3e08:
    // 0x1c3e08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3e0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3e10: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1c3e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1c3e14: 0x0  nop
    ctx->pc = 0x1c3e14u;
    // NOP
    ctx->pc = 0x1c3e18u;
}
