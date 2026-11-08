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

// Function: entry_0016146c
// Address: 0x16146c - 0x161478
void entry_0016146c_0x16146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016146c_0x16146c");
#endif

    ctx->pc = 0x16146cu;

    // 0x16146c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x16146cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x161470: 0x5440ff29  bnel        $v0, $zero, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x161470u;
    {
        const bool branch_taken_0x161470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161470) {
            ctx->pc = 0x161474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161470u;
            // 0x161474: 0x8e0401b4  lw          $a0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161118u;
            return;
        }
    }
    ctx->pc = 0x161478u;
}
