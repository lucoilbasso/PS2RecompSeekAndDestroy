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

// Function: entry_00177b2c
// Address: 0x177b2c - 0x177b34
void entry_00177b2c_0x177b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b2c_0x177b2c");
#endif

    ctx->pc = 0x177b2cu;

    // 0x177b2c: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177B2Cu;
    {
        const bool branch_taken_0x177b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x177B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B2Cu;
        // 0x177b30: 0x24847918  addiu       $a0, $a0, 0x7918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b2c) {
            ctx->pc = 0x177B3Cu;
            return;
        }
    }
    ctx->pc = 0x177B34u;
}
