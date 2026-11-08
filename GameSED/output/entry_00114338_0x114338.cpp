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

// Function: entry_00114338
// Address: 0x114338 - 0x114350
void entry_00114338_0x114338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114338_0x114338");
#endif

    ctx->pc = 0x114338u;

    // 0x114338: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114338u;
    {
        const bool branch_taken_0x114338 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x114338) {
            ctx->pc = 0x11433Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114338u;
            // 0x11433c: 0xaf918928  sw          $s1, -0x76D8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114350u;
            return;
        }
    }
    ctx->pc = 0x114340u;
    // 0x114340: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x114344: 0x8f838924  lw          $v1, -0x76DC($gp)
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x114348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11434c: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x11434cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
    ctx->pc = 0x114350u;
}
