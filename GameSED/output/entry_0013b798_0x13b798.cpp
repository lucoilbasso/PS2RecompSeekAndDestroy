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

// Function: entry_0013b798
// Address: 0x13b798 - 0x13b7d0
void entry_0013b798_0x13b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b798_0x13b798");
#endif

    ctx->pc = 0x13b798u;

    // 0x13b798: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x13b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x13b79c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13b79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13b7a0: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x13B7A0u;
    {
        const bool branch_taken_0x13b7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7A0u;
        // 0x13b7a4: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7a0) {
            ctx->pc = 0x13B8B8u;
            return;
        }
    }
    ctx->pc = 0x13B7A8u;
    // 0x13b7a8: 0x8e3201b0  lw          $s2, 0x1B0($s1)
    ctx->pc = 0x13b7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x13b7ac: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13b7acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7b0: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x13B7B0u;
    {
        const bool branch_taken_0x13b7b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7B0u;
        // 0x13b7b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7b0) {
            ctx->pc = 0x13B888u;
            return;
        }
    }
    ctx->pc = 0x13B7B8u;
    // 0x13b7b8: 0x3c17ffef  lui         $s7, 0xFFEF
    ctx->pc = 0x13b7b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65519 << 16));
    // 0x13b7bc: 0x3c150020  lui         $s5, 0x20
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32 << 16));
    // 0x13b7c0: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x13b7c4: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x13b7c8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x13b7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b7cc: 0x0  nop
    ctx->pc = 0x13b7ccu;
    // NOP
    ctx->pc = 0x13b7d0u;
}
