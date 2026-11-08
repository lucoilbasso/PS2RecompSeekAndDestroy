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

// Function: entry_0018e560
// Address: 0x18e560 - 0x18e570
void entry_0018e560_0x18e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e560_0x18e560");
#endif

    ctx->pc = 0x18e560u;

    // 0x18e560: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e564: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E564u;
    {
        const bool branch_taken_0x18e564 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E564u;
        // 0x18e568: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e564) {
            ctx->pc = 0x18E590u;
            return;
        }
    }
    ctx->pc = 0x18E56Cu;
    // 0x18e56c: 0x0  nop
    ctx->pc = 0x18e56cu;
    // NOP
    ctx->pc = 0x18e570u;
}
