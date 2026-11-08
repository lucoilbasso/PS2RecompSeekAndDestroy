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

// Function: entry_0017dfa8
// Address: 0x17dfa8 - 0x17dfc8
void entry_0017dfa8_0x17dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dfa8_0x17dfa8");
#endif

    ctx->pc = 0x17dfa8u;

    // 0x17dfa8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17dfac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DFACu;
    {
        const bool branch_taken_0x17dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfac) {
            ctx->pc = 0x17DFC8u;
            return;
        }
    }
    ctx->pc = 0x17DFB4u;
    // 0x17dfb4: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17dfb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17dfb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DFB8u;
    {
        const bool branch_taken_0x17dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfb8) {
            ctx->pc = 0x17DFC8u;
            return;
        }
    }
    ctx->pc = 0x17DFC0u;
    // 0x17dfc0: 0xc05f6f6  jal         func_17DBD8
    ctx->pc = 0x17DFC0u;
    SET_GPR_U32(ctx, 31, 0x17DFC8u);
    ctx->pc = 0x17DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFC0u;
    // 0x17dfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBD8u, 0x17DFC0u, 0x17DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFC8u;
}
