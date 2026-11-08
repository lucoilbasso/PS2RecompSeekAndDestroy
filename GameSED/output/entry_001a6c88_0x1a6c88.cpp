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

// Function: entry_001a6c88
// Address: 0x1a6c88 - 0x1a6cc0
void entry_001a6c88_0x1a6c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6c88_0x1a6c88");
#endif

    ctx->pc = 0x1a6c88u;

    // 0x1a6c88: 0x2a020c40  slti        $v0, $s0, 0xC40
    ctx->pc = 0x1a6c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3136) ? 1 : 0);
    // 0x1a6c8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6C8Cu;
    {
        const bool branch_taken_0x1a6c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C8Cu;
        // 0x1a6c90: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c8c) {
            ctx->pc = 0x1A6CC0u;
            return;
        }
    }
    ctx->pc = 0x1A6C94u;
    // 0x1a6c94: 0x2603f400  addiu       $v1, $s0, -0xC00
    ctx->pc = 0x1a6c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964224));
    // 0x1a6c98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6c9c: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1a6ca0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a6ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a6ca4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6ca8: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a6cac: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a6cb0: 0x8c4290e0  lw          $v0, -0x6F20($v0)
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938848)));
    // 0x1a6cb4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a6cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a6cb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6CB8u;
    {
        const bool branch_taken_0x1a6cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CB8u;
        // 0x1a6cbc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cb8) {
            ctx->pc = 0x1A6CD4u;
            return;
        }
    }
    ctx->pc = 0x1A6CC0u;
}
