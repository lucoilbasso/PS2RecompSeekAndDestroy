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

// Function: entry_0017ea70
// Address: 0x17ea70 - 0x17ea88
void entry_0017ea70_0x17ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ea70_0x17ea70");
#endif

    ctx->pc = 0x17ea70u;

    // 0x17ea70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ea74: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17ea78: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17EA78u;
    {
        const bool branch_taken_0x17ea78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA78u;
        // 0x17ea7c: 0x8e700024  lw          $s0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea78) {
            ctx->pc = 0x17EAB0u;
            return;
        }
    }
    ctx->pc = 0x17EA80u;
    // 0x17ea80: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17ea84: 0x0  nop
    ctx->pc = 0x17ea84u;
    // NOP
    ctx->pc = 0x17ea88u;
}
