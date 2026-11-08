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

// Function: entry_00130e70
// Address: 0x130e70 - 0x130ec0
void entry_00130e70_0x130e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130e70_0x130e70");
#endif

    ctx->pc = 0x130e70u;

    // 0x130e70: 0x504c0036  beql        $v0, $t4, . + 4 + (0x36 << 2)
    ctx->pc = 0x130E70u;
    {
        const bool branch_taken_0x130e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x130e70) {
            ctx->pc = 0x130E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E70u;
            // 0x130e74: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F4Cu;
            return;
        }
    }
    ctx->pc = 0x130E78u;
    // 0x130e78: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x130e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x130e7c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130e80: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x130e80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x130e84: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130e88: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130e88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130e8c: 0x8cc30114  lw          $v1, 0x114($a2)
    ctx->pc = 0x130e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
    // 0x130e90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x130e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e94: 0x146b001c  bne         $v1, $t3, . + 4 + (0x1C << 2)
    ctx->pc = 0x130E94u;
    {
        const bool branch_taken_0x130e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x130E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E94u;
        // 0x130e98: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e94) {
            ctx->pc = 0x130F08u;
            return;
        }
    }
    ctx->pc = 0x130E9Cu;
    // 0x130e9c: 0x8cc501c0  lw          $a1, 0x1C0($a2)
    ctx->pc = 0x130e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 448)));
    // 0x130ea0: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x130EA0u;
    {
        const bool branch_taken_0x130ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ea0) {
            ctx->pc = 0x130EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130EA0u;
            // 0x130ea4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F4Cu;
            return;
        }
    }
    ctx->pc = 0x130EA8u;
    // 0x130ea8: 0x8ca20480  lw          $v0, 0x480($a1)
    ctx->pc = 0x130ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1152)));
    // 0x130eac: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x130EACu;
    {
        const bool branch_taken_0x130eac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x130EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EACu;
        // 0x130eb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130eac) {
            ctx->pc = 0x130F48u;
            return;
        }
    }
    ctx->pc = 0x130EB4u;
    // 0x130eb4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x130eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x130eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x130ebc: 0x0  nop
    ctx->pc = 0x130ebcu;
    // NOP
    ctx->pc = 0x130ec0u;
}
