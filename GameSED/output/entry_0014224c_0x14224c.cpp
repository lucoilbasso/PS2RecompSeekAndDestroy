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

// Function: entry_0014224c
// Address: 0x14224c - 0x142260
void entry_0014224c_0x14224c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014224c_0x14224c");
#endif

    ctx->pc = 0x14224cu;

    // 0x14224c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x142250: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x142250u;
    {
        const bool branch_taken_0x142250 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x142254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142250u;
        // 0x142254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142250) {
            ctx->pc = 0x142260u;
            return;
        }
    }
    ctx->pc = 0x142258u;
    // 0x142258: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x142258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x14225c: 0x24462650  addiu       $a2, $v0, 0x2650
    ctx->pc = 0x14225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
    ctx->pc = 0x142260u;
}
