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

// Function: entry_0012440c
// Address: 0x12440c - 0x124420
void entry_0012440c_0x12440c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012440c_0x12440c");
#endif

    ctx->pc = 0x12440cu;

    // 0x12440c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x124410: 0x1053000e  beq         $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x124410u;
    {
        const bool branch_taken_0x124410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x124410) {
            ctx->pc = 0x12444Cu;
            return;
        }
    }
    ctx->pc = 0x124418u;
    // 0x124418: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x124418u;
    {
        const bool branch_taken_0x124418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124418u;
        // 0x12441c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124418) {
            ctx->pc = 0x12444Cu;
            return;
        }
    }
    ctx->pc = 0x124420u;
}
