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

// Function: entry_001c7484
// Address: 0x1c7484 - 0x1c74d0
void entry_001c7484_0x1c7484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7484_0x1c7484");
#endif

    ctx->pc = 0x1c7484u;

    // 0x1c7484: 0x2d5f021  addu        $fp, $s6, $s5
    ctx->pc = 0x1c7484u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1c7488: 0x26d20001  addiu       $s2, $s6, 0x1
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c748c: 0x3d2102a  slt         $v0, $fp, $s2
    ctx->pc = 0x1c748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c7490: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x1C7490u;
    {
        const bool branch_taken_0x1c7490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7490u;
        // 0x1c7494: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7490) {
            ctx->pc = 0x1C7138u;
            return;
        }
    }
    ctx->pc = 0x1C7498u;
    // 0x1c7498: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c749c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c74a0: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x1c74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1c74a4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c74a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c74a8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c74ac: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1c74acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c74b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c74b4: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1c74b8: 0x48b021  addu        $s6, $v0, $t0
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c74bc: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x1c74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x1c74c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c74c4: 0x66b821  addu        $s7, $v1, $a2
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c74c8: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c74cc: 0x0  nop
    ctx->pc = 0x1c74ccu;
    // NOP
    ctx->pc = 0x1c74d0u;
}
