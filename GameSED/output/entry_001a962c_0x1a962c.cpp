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

// Function: entry_001a962c
// Address: 0x1a962c - 0x1a9660
void entry_001a962c_0x1a962c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a962c_0x1a962c");
#endif

    ctx->pc = 0x1a962cu;

    // 0x1a962c: 0x4c0001c  bltz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A962Cu;
    {
        const bool branch_taken_0x1a962c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A962Cu;
        // 0x1a9630: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a962c) {
            ctx->pc = 0x1A96A0u;
            return;
        }
    }
    ctx->pc = 0x1A9634u;
    // 0x1a9634: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a9638: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a9638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a963c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a9640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a9644: 0x1045002c  beq         $v0, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A9644u;
    {
        const bool branch_taken_0x1a9644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9644u;
        // 0x1a9648: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9644) {
            ctx->pc = 0x1A96F8u;
            return;
        }
    }
    ctx->pc = 0x1A964Cu;
    // 0x1a964c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9650: 0x10450029  beq         $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A9650u;
    {
        const bool branch_taken_0x1a9650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A9654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9650u;
        // 0x1a9654: 0x2651001c  addiu       $s1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9650) {
            ctx->pc = 0x1A96F8u;
            return;
        }
    }
    ctx->pc = 0x1A9658u;
    // 0x1a9658: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1a9658u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1a965c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1a9660u;
}
