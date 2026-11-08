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

// Function: entry_001734e0
// Address: 0x1734e0 - 0x17351c
void entry_001734e0_0x1734e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001734e0_0x1734e0");
#endif

    ctx->pc = 0x1734e0u;

    // 0x1734e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1734e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1734e4: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1734e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1734e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1734ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1734ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1734f0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1734f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1734f4: 0x24620103  addiu       $v0, $v1, 0x103
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 259));
    // 0x1734f8: 0x246300d3  addiu       $v1, $v1, 0xD3
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 211));
    // 0x1734fc: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1734fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x173500: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x173500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x173504: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x173504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x173508: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x173508u;
    {
        const bool branch_taken_0x173508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x17350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173508u;
        // 0x17350c: 0xafa60050  sw          $a2, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173508) {
            ctx->pc = 0x173520u;
            return;
        }
    }
    ctx->pc = 0x173510u;
    // 0x173510: 0x24820130  addiu       $v0, $a0, 0x130
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x173514: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x173518: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x173518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x17351cu;
}
