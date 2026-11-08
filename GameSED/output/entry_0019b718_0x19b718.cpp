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

// Function: entry_0019b718
// Address: 0x19b718 - 0x19b728
void entry_0019b718_0x19b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b718_0x19b718");
#endif

    ctx->pc = 0x19b718u;

    // 0x19b718: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19b71c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B720u;
    {
        const bool branch_taken_0x19b720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B720u;
        // 0x19b724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b720) {
            ctx->pc = 0x19B744u;
            return;
        }
    }
    ctx->pc = 0x19B728u;
}
