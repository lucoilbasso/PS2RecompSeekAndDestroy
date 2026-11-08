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

// Function: entry_0017dfc8
// Address: 0x17dfc8 - 0x17dfec
void entry_0017dfc8_0x17dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dfc8_0x17dfc8");
#endif

    ctx->pc = 0x17dfc8u;

    // 0x17dfc8: 0x5a600009  blezl       $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DFC8u;
    {
        const bool branch_taken_0x17dfc8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x17dfc8) {
            ctx->pc = 0x17DFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DFC8u;
            // 0x17dfcc: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DFF0u;
            return;
        }
    }
    ctx->pc = 0x17DFD0u;
    // 0x17dfd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dfd4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17dfd8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17dfdc: 0x10760003  beq         $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DFDCu;
    {
        const bool branch_taken_0x17dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x17DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFDCu;
        // 0x17dfe0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfdc) {
            ctx->pc = 0x17DFECu;
            return;
        }
    }
    ctx->pc = 0x17DFE4u;
    // 0x17dfe4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17DFE4u;
    SET_GPR_U32(ctx, 31, 0x17DFECu);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17DFE4u, 0x17DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFECu;
}
