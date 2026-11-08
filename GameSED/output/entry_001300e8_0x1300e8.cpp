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

// Function: entry_001300e8
// Address: 0x1300e8 - 0x13010c
void entry_001300e8_0x1300e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001300e8_0x1300e8");
#endif

    ctx->pc = 0x1300e8u;

    // 0x1300e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1300e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1300ec: 0x1262ffbe  beq         $s3, $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1300ECu;
    {
        const bool branch_taken_0x1300ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1300F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300ECu;
        // 0x1300f0: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300ec) {
            ctx->pc = 0x12FFE8u;
            return;
        }
    }
    ctx->pc = 0x1300F4u;
    // 0x1300f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1300f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1300f8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x1300f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x1300fc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1300fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x130100: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x130100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x130104: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x130104u;
    {
        const bool branch_taken_0x130104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130104u;
        // 0x130108: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130104) {
            ctx->pc = 0x130028u;
            return;
        }
    }
    ctx->pc = 0x13010Cu;
}
