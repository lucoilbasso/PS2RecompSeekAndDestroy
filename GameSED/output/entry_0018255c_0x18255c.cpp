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

// Function: entry_0018255c
// Address: 0x18255c - 0x18256c
void entry_0018255c_0x18255c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018255c_0x18255c");
#endif

    ctx->pc = 0x18255cu;

    // 0x18255c: 0x1072002f  beq         $v1, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x18255Cu;
    {
        const bool branch_taken_0x18255c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x182560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18255Cu;
        // 0x182560: 0x7e1021  addu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18255c) {
            ctx->pc = 0x18261Cu;
            return;
        }
    }
    ctx->pc = 0x182564u;
    // 0x182564: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x182564u;
    {
        const bool branch_taken_0x182564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182564u;
        // 0x182568: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182564) {
            ctx->pc = 0x18261Cu;
            return;
        }
    }
    ctx->pc = 0x18256Cu;
}
