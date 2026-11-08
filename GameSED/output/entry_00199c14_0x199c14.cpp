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

// Function: entry_00199c14
// Address: 0x199c14 - 0x199c24
void entry_00199c14_0x199c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c14_0x199c14");
#endif

    ctx->pc = 0x199c14u;

    // 0x199c14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199C14u;
    {
        const bool branch_taken_0x199c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C14u;
        // 0x199c18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c14) {
            ctx->pc = 0x199C24u;
            return;
        }
    }
    ctx->pc = 0x199C1Cu;
    // 0x199c1c: 0x16c0001a  bnez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x199C1Cu;
    {
        const bool branch_taken_0x199c1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c1c) {
            ctx->pc = 0x199C88u;
            return;
        }
    }
    ctx->pc = 0x199C24u;
}
