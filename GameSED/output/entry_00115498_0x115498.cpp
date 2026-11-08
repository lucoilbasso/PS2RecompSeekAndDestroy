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

// Function: entry_00115498
// Address: 0x115498 - 0x1154b8
void entry_00115498_0x115498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115498_0x115498");
#endif

    ctx->pc = 0x115498u;

    // 0x115498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x115498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11549c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11549Cu;
    {
        const bool branch_taken_0x11549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11549Cu;
        // 0x1154a0: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11549c) {
            ctx->pc = 0x1154B8u;
            return;
        }
    }
    ctx->pc = 0x1154A4u;
    // 0x1154a4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1154a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1154a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1154ac: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x1154acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1024)));
    // 0x1154b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1154b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1154b4: 0xac620400  sw          $v0, 0x400($v1)
    ctx->pc = 0x1154b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 2));
    ctx->pc = 0x1154b8u;
}
