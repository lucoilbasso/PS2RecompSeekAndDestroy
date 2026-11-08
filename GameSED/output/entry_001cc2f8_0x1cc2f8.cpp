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

// Function: entry_001cc2f8
// Address: 0x1cc2f8 - 0x1cc310
void entry_001cc2f8_0x1cc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc2f8_0x1cc2f8");
#endif

    ctx->pc = 0x1cc2f8u;

    // 0x1cc2f8: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1cc2fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc300: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1cc304: 0x12420061  beq         $s2, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1CC304u;
    {
        const bool branch_taken_0x1cc304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC304u;
        // 0x1cc308: 0x36970001  ori         $s7, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc304) {
            ctx->pc = 0x1CC48Cu;
            return;
        }
    }
    ctx->pc = 0x1CC30Cu;
    // 0x1cc30c: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x1cc310u;
}
