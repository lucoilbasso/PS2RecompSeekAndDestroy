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

// Function: entry_00196178
// Address: 0x196178 - 0x196198
void entry_00196178_0x196178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196178_0x196178");
#endif

    ctx->pc = 0x196178u;

    // 0x196178: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19617c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x196180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x196180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x196184: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x196184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x196188: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x196188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x19618c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x19618cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x196190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196190u;
    {
        const bool branch_taken_0x196190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196190u;
        // 0x196194: 0xace60008  sw          $a2, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196190) {
            ctx->pc = 0x1961A4u;
            return;
        }
    }
    ctx->pc = 0x196198u;
}
