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

// Function: entry_001412d0
// Address: 0x1412d0 - 0x1412f8
void entry_001412d0_0x1412d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001412d0_0x1412d0");
#endif

    ctx->pc = 0x1412d0u;

    // 0x1412d0: 0x14e2001d  bne         $a3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1412D0u;
    {
        const bool branch_taken_0x1412d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1412D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412D0u;
        // 0x1412d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412d0) {
            ctx->pc = 0x141348u;
            return;
        }
    }
    ctx->pc = 0x1412D8u;
    // 0x1412d8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1412dc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1412e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1412e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1412e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1412E4u;
    {
        const bool branch_taken_0x1412e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1412E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412E4u;
        // 0x1412e8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412e4) {
            ctx->pc = 0x1412F8u;
            return;
        }
    }
    ctx->pc = 0x1412ECu;
    // 0x1412ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1412ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1412f0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1412F0u;
    {
        const bool branch_taken_0x1412f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1412F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412F0u;
        // 0x1412f4: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412f0) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x1412F8u;
}
