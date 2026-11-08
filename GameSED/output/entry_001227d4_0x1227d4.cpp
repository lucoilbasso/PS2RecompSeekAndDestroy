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

// Function: entry_001227d4
// Address: 0x1227d4 - 0x1227e8
void entry_001227d4_0x1227d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001227d4_0x1227d4");
#endif

    ctx->pc = 0x1227d4u;

    // 0x1227d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1227d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1227d8: 0x1053000c  beq         $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1227D8u;
    {
        const bool branch_taken_0x1227d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1227d8) {
            ctx->pc = 0x12280Cu;
            return;
        }
    }
    ctx->pc = 0x1227E0u;
    // 0x1227e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1227E0u;
    {
        const bool branch_taken_0x1227e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227E0u;
        // 0x1227e4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227e0) {
            ctx->pc = 0x12280Cu;
            return;
        }
    }
    ctx->pc = 0x1227E8u;
}
