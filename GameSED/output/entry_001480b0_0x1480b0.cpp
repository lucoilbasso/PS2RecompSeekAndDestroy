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

// Function: entry_001480b0
// Address: 0x1480b0 - 0x1480bc
void entry_001480b0_0x1480b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001480b0_0x1480b0");
#endif

    ctx->pc = 0x1480b0u;

    // 0x1480b0: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1480b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1480b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1480B4u;
    {
        const bool branch_taken_0x1480b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1480B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480B4u;
        // 0x1480b8: 0x71300  sll         $v0, $a3, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480b4) {
            ctx->pc = 0x1480C8u;
            return;
        }
    }
    ctx->pc = 0x1480BCu;
}
