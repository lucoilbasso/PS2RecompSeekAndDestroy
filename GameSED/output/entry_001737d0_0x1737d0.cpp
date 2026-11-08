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

// Function: entry_001737d0
// Address: 0x1737d0 - 0x17380c
void entry_001737d0_0x1737d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001737d0_0x1737d0");
#endif

    ctx->pc = 0x1737d0u;

    // 0x1737d0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1737d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1737d4: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1737d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1737dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1737dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1737e0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1737e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1737e4: 0x24620103  addiu       $v0, $v1, 0x103
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 259));
    // 0x1737e8: 0x246300d3  addiu       $v1, $v1, 0xD3
    ctx->pc = 0x1737e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 211));
    // 0x1737ec: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1737ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1737f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1737f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1737f4: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x1737f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x1737f8: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1737F8u;
    {
        const bool branch_taken_0x1737f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x1737FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F8u;
        // 0x1737fc: 0xafa60050  sw          $a2, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737f8) {
            ctx->pc = 0x173810u;
            return;
        }
    }
    ctx->pc = 0x173800u;
    // 0x173800: 0x24820170  addiu       $v0, $a0, 0x170
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x173804: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x173808: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x173808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x17380cu;
}
