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

// Function: entry_0011e834
// Address: 0x11e834 - 0x11e848
void entry_0011e834_0x11e834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e834_0x11e834");
#endif

    ctx->pc = 0x11e834u;

    // 0x11e834: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E834u;
    {
        const bool branch_taken_0x11e834 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E834u;
        // 0x11e838: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e834) {
            ctx->pc = 0x11E848u;
            return;
        }
    }
    ctx->pc = 0x11E83Cu;
    // 0x11e83c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11e840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E840u;
    {
        const bool branch_taken_0x11e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E840u;
        // 0x11e844: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e840) {
            ctx->pc = 0x11E84Cu;
            return;
        }
    }
    ctx->pc = 0x11E848u;
}
