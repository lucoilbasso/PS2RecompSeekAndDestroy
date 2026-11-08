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

// Function: entry_001bac60
// Address: 0x1bac60 - 0x1bac9c
void entry_001bac60_0x1bac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bac60_0x1bac60");
#endif

    ctx->pc = 0x1bac60u;

    // 0x1bac60: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x1bac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x1bac64: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1bac64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1bac68: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1bac68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1bac6c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1bac6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1bac70: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bac70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bac74: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BAC74u;
    {
        const bool branch_taken_0x1bac74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bac74) {
            ctx->pc = 0x1BAC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAC74u;
            // 0x1bac78: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAC9Cu;
            return;
        }
    }
    ctx->pc = 0x1BAC7Cu;
    // 0x1bac7c: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1bac7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bac80: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x1bac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x1bac84: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1bac84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1bac88: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1bac88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1bac8c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bac8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bac90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAC90u;
    {
        const bool branch_taken_0x1bac90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC90u;
        // 0x1bac94: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac90) {
            ctx->pc = 0x1BACA0u;
            return;
        }
    }
    ctx->pc = 0x1BAC98u;
    // 0x1bac98: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1bac98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1bac9cu;
}
