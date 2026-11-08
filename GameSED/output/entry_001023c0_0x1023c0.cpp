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

// Function: entry_001023c0
// Address: 0x1023c0 - 0x1023d8
void entry_001023c0_0x1023c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001023c0_0x1023c0");
#endif

    ctx->pc = 0x1023c0u;

    // 0x1023c0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1023C0u;
    {
        const bool branch_taken_0x1023c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C0u;
        // 0x1023c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023c0) {
            ctx->pc = 0x1023D8u;
            return;
        }
    }
    ctx->pc = 0x1023C8u;
    // 0x1023c8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1023c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1023cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1023ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1023d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1023D0u;
    {
        const bool branch_taken_0x1023d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1023d0) {
            ctx->pc = 0x1023DCu;
            return;
        }
    }
    ctx->pc = 0x1023D8u;
}
