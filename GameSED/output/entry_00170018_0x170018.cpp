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

// Function: entry_00170018
// Address: 0x170018 - 0x170024
void entry_00170018_0x170018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170018_0x170018");
#endif

    ctx->pc = 0x170018u;

    // 0x170018: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x170018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17001c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17001Cu;
    {
        const bool branch_taken_0x17001c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x170020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17001Cu;
        // 0x170020: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17001c) {
            ctx->pc = 0x16FFE8u;
            return;
        }
    }
    ctx->pc = 0x170024u;
}
