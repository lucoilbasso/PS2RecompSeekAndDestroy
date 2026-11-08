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

// Function: entry_0013c358
// Address: 0x13c358 - 0x13c370
void entry_0013c358_0x13c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c358_0x13c358");
#endif

    ctx->pc = 0x13c358u;

    // 0x13c358: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13c35c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x13c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x13c360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c364: 0x1455ffea  bne         $v0, $s5, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13C364u;
    {
        const bool branch_taken_0x13c364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x13C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C364u;
        // 0x13c368: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c364) {
            ctx->pc = 0x13C310u;
            return;
        }
    }
    ctx->pc = 0x13C36Cu;
    // 0x13c36c: 0x24041116  addiu       $a0, $zero, 0x1116
    ctx->pc = 0x13c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    ctx->pc = 0x13c370u;
}
