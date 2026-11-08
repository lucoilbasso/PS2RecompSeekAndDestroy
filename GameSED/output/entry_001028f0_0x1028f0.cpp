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

// Function: entry_001028f0
// Address: 0x1028f0 - 0x102900
void entry_001028f0_0x1028f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001028f0_0x1028f0");
#endif

    ctx->pc = 0x1028f0u;

    // 0x1028f0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1028f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1028f4: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1028F4u;
    {
        const bool branch_taken_0x1028f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028F4u;
        // 0x1028f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f4) {
            ctx->pc = 0x1029C4u;
            return;
        }
    }
    ctx->pc = 0x1028FCu;
    // 0x1028fc: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1028fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x102900u;
}
