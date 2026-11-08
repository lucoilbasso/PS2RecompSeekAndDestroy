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

// Function: entry_001b1de0
// Address: 0x1b1de0 - 0x1b1e0c
void entry_001b1de0_0x1b1de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1de0_0x1b1de0");
#endif

    switch (ctx->pc) {
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1e04u: goto label_1b1e04;
        default: break;
    }

    ctx->pc = 0x1b1de0u;

    // 0x1b1de0: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1B1DE0u;
    SET_GPR_U32(ctx, 31, 0x1B1DE8u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1B1DE0u, 0x1B1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1b1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1b1dec: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1b1decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1b1df0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1DF0u;
    {
        const bool branch_taken_0x1b1df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF0u;
        // 0x1b1df4: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1df0) {
            ctx->pc = 0x1B1E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B1DF8u;
    // 0x1b1df8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b1dfc: 0xc06c4b8  jal         func_1B12E0
    ctx->pc = 0x1B1DFCu;
    SET_GPR_U32(ctx, 31, 0x1B1E04u);
    ctx->pc = 0x1B1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DFCu;
    // 0x1b1e00: 0x24849a00  addiu       $a0, $a0, -0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12E0u, 0x1B1DFCu, 0x1B1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E04u;
label_1b1e04:
    // 0x1b1e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1E04u;
    {
        const bool branch_taken_0x1b1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E04u;
        // 0x1b1e08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e04) {
            ctx->pc = 0x1B1E1Cu;
            return;
        }
    }
    ctx->pc = 0x1B1E0Cu;
}
