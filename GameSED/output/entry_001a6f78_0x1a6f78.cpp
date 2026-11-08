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

// Function: entry_001a6f78
// Address: 0x1a6f78 - 0x1a6fa8
void entry_001a6f78_0x1a6f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6f78_0x1a6f78");
#endif

    ctx->pc = 0x1a6f78u;

    // 0x1a6f78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6F78u;
    {
        const bool branch_taken_0x1a6f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F78u;
        // 0x1a6f7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f78) {
            ctx->pc = 0x1A6FA8u;
            return;
        }
    }
    ctx->pc = 0x1A6F80u;
    // 0x1a6f80: 0x24a2f400  addiu       $v0, $a1, -0xC00
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1a6f84: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a6f88: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a6f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a6f8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6f90: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a6f94: 0x9c1821  addu        $v1, $a0, $gp
    ctx->pc = 0x1a6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a6f98: 0x8c6390e0  lw          $v1, -0x6F20($v1)
    ctx->pc = 0x1a6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938848)));
    // 0x1a6f9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a6f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6fa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6FA0u;
    {
        const bool branch_taken_0x1a6fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA0u;
        // 0x1a6fa4: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fa0) {
            ctx->pc = 0x1A6FB8u;
            return;
        }
    }
    ctx->pc = 0x1A6FA8u;
}
