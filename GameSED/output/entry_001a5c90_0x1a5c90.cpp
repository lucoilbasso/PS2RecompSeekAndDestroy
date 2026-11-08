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

// Function: entry_001a5c90
// Address: 0x1a5c90 - 0x1a5cc8
void entry_001a5c90_0x1a5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5c90_0x1a5c90");
#endif

    ctx->pc = 0x1a5c90u;

    // 0x1a5c90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5C90u;
    {
        const bool branch_taken_0x1a5c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C90u;
        // 0x1a5c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c90) {
            ctx->pc = 0x1A5CC8u;
            return;
        }
    }
    ctx->pc = 0x1A5C98u;
    // 0x1a5c98: 0x24a2f400  addiu       $v0, $a1, -0xC00
    ctx->pc = 0x1a5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1a5c9c: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a5ca0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a5ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a5ca4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5ca8: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a5cac: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a5cb0: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1a5cb4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1a5cb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5cbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a5cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a5cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5CC0u;
    {
        const bool branch_taken_0x1a5cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CC0u;
        // 0x1a5cc4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cc0) {
            ctx->pc = 0x1A5CD4u;
            return;
        }
    }
    ctx->pc = 0x1A5CC8u;
}
