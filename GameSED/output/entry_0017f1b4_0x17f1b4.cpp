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

// Function: entry_0017f1b4
// Address: 0x17f1b4 - 0x17f1c4
void entry_0017f1b4_0x17f1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1b4_0x17f1b4");
#endif

    ctx->pc = 0x17f1b4u;

    // 0x17f1b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17f1b8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F1B8u;
    {
        const bool branch_taken_0x17f1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1B8u;
        // 0x17f1bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1b8) {
            ctx->pc = 0x17F1C4u;
            return;
        }
    }
    ctx->pc = 0x17F1C0u;
    // 0x17f1c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x17f1c4u;
}
