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

// Function: entry_001856e0
// Address: 0x1856e0 - 0x185714
void entry_001856e0_0x1856e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001856e0_0x1856e0");
#endif

    ctx->pc = 0x1856e0u;

    // 0x1856e0: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x1856E0u;
    {
        const bool branch_taken_0x1856e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856e0) {
            ctx->pc = 0x185714u;
            return;
        }
    }
    ctx->pc = 0x1856E8u;
    // 0x1856e8: 0x8e430124  lw          $v1, 0x124($s2)
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x1856ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1856ECu;
    {
        const bool branch_taken_0x1856ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856ec) {
            ctx->pc = 0x185714u;
            return;
        }
    }
    ctx->pc = 0x1856F4u;
    // 0x1856f4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1856f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1856f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1856fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1856FCu;
    {
        const bool branch_taken_0x1856fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1856fc) {
            ctx->pc = 0x185700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1856FCu;
            // 0x185700: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185730u;
            return;
        }
    }
    ctx->pc = 0x185704u;
    // 0x185704: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x185704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185708: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x18570c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18570Cu;
    {
        const bool branch_taken_0x18570c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18570c) {
            ctx->pc = 0x185710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18570Cu;
            // 0x185710: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185730u;
            return;
        }
    }
    ctx->pc = 0x185714u;
}
