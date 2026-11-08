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

// Function: entry_0019b698
// Address: 0x19b698 - 0x19b6a8
void entry_0019b698_0x19b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b698_0x19b698");
#endif

    ctx->pc = 0x19b698u;

    // 0x19b698: 0x10c90003  beq         $a2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B698u;
    {
        const bool branch_taken_0x19b698 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B698u;
        // 0x19b69c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b698) {
            ctx->pc = 0x19B6A8u;
            return;
        }
    }
    ctx->pc = 0x19B6A0u;
    // 0x19b6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B6A0u;
    {
        const bool branch_taken_0x19b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6A0u;
        // 0x19b6a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6a0) {
            ctx->pc = 0x19B6B0u;
            return;
        }
    }
    ctx->pc = 0x19B6A8u;
}
