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

// Function: entry_00175824
// Address: 0x175824 - 0x175838
void entry_00175824_0x175824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175824_0x175824");
#endif

    ctx->pc = 0x175824u;

    // 0x175824: 0x1010  mfhi        $v0
    ctx->pc = 0x175824u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175828: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x175828u;
    {
        const bool branch_taken_0x175828 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175828u;
        // 0x17582c: 0x34730100  ori         $s3, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175828) {
            ctx->pc = 0x175850u;
            return;
        }
    }
    ctx->pc = 0x175830u;
    // 0x175830: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175830u;
    {
        const bool branch_taken_0x175830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x175830) {
            ctx->pc = 0x175834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175830u;
            // 0x175834: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175838u;
            return;
        }
    }
    ctx->pc = 0x175838u;
}
