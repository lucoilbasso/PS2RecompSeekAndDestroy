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

// Function: entry_0019b560
// Address: 0x19b560 - 0x19b570
void entry_0019b560_0x19b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b560_0x19b560");
#endif

    ctx->pc = 0x19b560u;

    // 0x19b560: 0x10e90003  beq         $a3, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B560u;
    {
        const bool branch_taken_0x19b560 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B560u;
        // 0x19b564: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b560) {
            ctx->pc = 0x19B570u;
            return;
        }
    }
    ctx->pc = 0x19B568u;
    // 0x19b568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B568u;
    {
        const bool branch_taken_0x19b568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B568u;
        // 0x19b56c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b568) {
            ctx->pc = 0x19B578u;
            return;
        }
    }
    ctx->pc = 0x19B570u;
}
