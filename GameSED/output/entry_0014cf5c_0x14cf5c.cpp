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

// Function: entry_0014cf5c
// Address: 0x14cf5c - 0x14cf68
void entry_0014cf5c_0x14cf5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cf5c_0x14cf5c");
#endif

    ctx->pc = 0x14cf5cu;

    // 0x14cf5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cf60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CF60u;
    {
        const bool branch_taken_0x14cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF60u;
        // 0x14cf64: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf60) {
            ctx->pc = 0x14CF80u;
            return;
        }
    }
    ctx->pc = 0x14CF68u;
}
