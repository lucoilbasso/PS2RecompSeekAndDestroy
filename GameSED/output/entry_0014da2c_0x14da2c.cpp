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

// Function: entry_0014da2c
// Address: 0x14da2c - 0x14da48
void entry_0014da2c_0x14da2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da2c_0x14da2c");
#endif

    ctx->pc = 0x14da2cu;

    // 0x14da2c: 0x2402050c  addiu       $v0, $zero, 0x50C
    ctx->pc = 0x14da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x14da30: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA30u;
    {
        const bool branch_taken_0x14da30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA30u;
        // 0x14da34: 0x2402050b  addiu       $v0, $zero, 0x50B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da30) {
            ctx->pc = 0x14DA48u;
            return;
        }
    }
    ctx->pc = 0x14DA38u;
    // 0x14da38: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da3c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x14da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x14da40: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14da40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14da44: 0x2402050b  addiu       $v0, $zero, 0x50B
    ctx->pc = 0x14da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    ctx->pc = 0x14da48u;
}
