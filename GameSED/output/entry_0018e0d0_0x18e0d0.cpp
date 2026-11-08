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

// Function: entry_0018e0d0
// Address: 0x18e0d0 - 0x18e0e0
void entry_0018e0d0_0x18e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e0d0_0x18e0d0");
#endif

    ctx->pc = 0x18e0d0u;

    // 0x18e0d0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e0d4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E0D4u;
    {
        const bool branch_taken_0x18e0d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D4u;
        // 0x18e0d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d4) {
            ctx->pc = 0x18E104u;
            return;
        }
    }
    ctx->pc = 0x18E0DCu;
    // 0x18e0dc: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x18e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    ctx->pc = 0x18e0e0u;
}
