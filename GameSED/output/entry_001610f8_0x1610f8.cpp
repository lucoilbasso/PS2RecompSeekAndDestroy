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

// Function: entry_001610f8
// Address: 0x1610f8 - 0x161118
void entry_001610f8_0x1610f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001610f8_0x1610f8");
#endif

    ctx->pc = 0x1610f8u;

    // 0x1610f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1610f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1610fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1610fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x161100: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161104: 0x8e1301b0  lw          $s3, 0x1B0($s0)
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x161108: 0x1a6000db  blez        $s3, . + 4 + (0xDB << 2)
    ctx->pc = 0x161108u;
    {
        const bool branch_taken_0x161108 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161108u;
        // 0x16110c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161108) {
            ctx->pc = 0x161478u;
            return;
        }
    }
    ctx->pc = 0x161110u;
    // 0x161110: 0x8e0401b4  lw          $a0, 0x1B4($s0)
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x161114: 0x0  nop
    ctx->pc = 0x161114u;
    // NOP
    ctx->pc = 0x161118u;
}
