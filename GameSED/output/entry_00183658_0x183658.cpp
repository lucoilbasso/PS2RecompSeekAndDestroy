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

// Function: entry_00183658
// Address: 0x183658 - 0x183668
void entry_00183658_0x183658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183658_0x183658");
#endif

    ctx->pc = 0x183658u;

    // 0x183658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18365c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18365Cu;
    {
        const bool branch_taken_0x18365c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18365Cu;
        // 0x183660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18365c) {
            ctx->pc = 0x183690u;
            return;
        }
    }
    ctx->pc = 0x183664u;
    // 0x183664: 0x0  nop
    ctx->pc = 0x183664u;
    // NOP
    ctx->pc = 0x183668u;
}
