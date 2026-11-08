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

// Function: entry_0019b888
// Address: 0x19b888 - 0x19b898
void entry_0019b888_0x19b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b888_0x19b888");
#endif

    ctx->pc = 0x19b888u;

    // 0x19b888: 0x10c90003  beq         $a2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B888u;
    {
        const bool branch_taken_0x19b888 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B888u;
        // 0x19b88c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b888) {
            ctx->pc = 0x19B898u;
            return;
        }
    }
    ctx->pc = 0x19B890u;
    // 0x19b890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B890u;
    {
        const bool branch_taken_0x19b890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B890u;
        // 0x19b894: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b890) {
            ctx->pc = 0x19B8A0u;
            return;
        }
    }
    ctx->pc = 0x19B898u;
}
