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

// Function: entry_001cdc84
// Address: 0x1cdc84 - 0x1cdc90
void entry_001cdc84_0x1cdc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdc84_0x1cdc84");
#endif

    ctx->pc = 0x1cdc84u;

    // 0x1cdc84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdc88: 0x1455ffe7  bne         $v0, $s5, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CDC88u;
    {
        const bool branch_taken_0x1cdc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC88u;
        // 0x1cdc8c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc88) {
            ctx->pc = 0x1CDC28u;
            return;
        }
    }
    ctx->pc = 0x1CDC90u;
}
