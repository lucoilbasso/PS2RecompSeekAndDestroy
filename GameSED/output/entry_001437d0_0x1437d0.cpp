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

// Function: entry_001437d0
// Address: 0x1437d0 - 0x143808
void entry_001437d0_0x1437d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001437d0_0x1437d0");
#endif

    ctx->pc = 0x1437d0u;

    // 0x1437d0: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1437d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1437d4: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1437D4u;
    {
        const bool branch_taken_0x1437d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1437D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437D4u;
        // 0x1437d8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437d4) {
            ctx->pc = 0x143AA0u;
            return;
        }
    }
    ctx->pc = 0x1437DCu;
    // 0x1437dc: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1437e0: 0x26e40008  addiu       $a0, $s7, 0x8
    ctx->pc = 0x1437e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1437e4: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x1437e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x1437e8: 0x26730300  addiu       $s3, $s3, 0x300
    ctx->pc = 0x1437e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x1437ec: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1437ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1437f0: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1437f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1437f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1437f8: 0x26f60010  addiu       $s6, $s7, 0x10
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1437fc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1437fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x143800: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143804: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x143804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->pc = 0x143808u;
}
