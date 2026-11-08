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

// Function: entry_0015aa74
// Address: 0x15aa74 - 0x15aa98
void entry_0015aa74_0x15aa74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa74_0x15aa74");
#endif

    ctx->pc = 0x15aa74u;

    // 0x15aa74: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15aa78: 0x1244006b  beq         $s2, $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x15AA78u;
    {
        const bool branch_taken_0x15aa78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x15AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA78u;
        // 0x15aa7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa78) {
            ctx->pc = 0x15AC28u;
            return;
        }
    }
    ctx->pc = 0x15AA80u;
    // 0x15aa80: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AA80u;
    {
        const bool branch_taken_0x15aa80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA80u;
        // 0x15aa84: 0x2441023  subu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa80) {
            ctx->pc = 0x15AA98u;
            return;
        }
    }
    ctx->pc = 0x15AA88u;
    // 0x15aa88: 0x28820ccd  slti        $v0, $a0, 0xCCD
    ctx->pc = 0x15aa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3277) ? 1 : 0);
    // 0x15aa8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15AA8Cu;
    {
        const bool branch_taken_0x15aa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15aa8c) {
            ctx->pc = 0x15AA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AA8Cu;
            // 0x15aa90: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AAB0u;
            return;
        }
    }
    ctx->pc = 0x15AA94u;
    // 0x15aa94: 0x2441023  subu        $v0, $s2, $a0
    ctx->pc = 0x15aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->pc = 0x15aa98u;
}
