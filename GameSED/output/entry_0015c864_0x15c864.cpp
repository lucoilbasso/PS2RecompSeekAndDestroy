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

// Function: entry_0015c864
// Address: 0x15c864 - 0x15c8a8
void entry_0015c864_0x15c864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c864_0x15c864");
#endif

    ctx->pc = 0x15c864u;

    // 0x15c864: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x15c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x15c868: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15C868u;
    {
        const bool branch_taken_0x15c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C868u;
        // 0x15c86c: 0x263200e0  addiu       $s2, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c868) {
            ctx->pc = 0x15C8DCu;
            return;
        }
    }
    ctx->pc = 0x15C870u;
    // 0x15c870: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x15c874: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x15c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15c878: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15C878u;
    {
        const bool branch_taken_0x15c878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c878) {
            ctx->pc = 0x15C87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C878u;
            // 0x15c87c: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C8A8u;
            return;
        }
    }
    ctx->pc = 0x15C880u;
    // 0x15c880: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15c884: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15c884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c888: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x15c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x15c88c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c890: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15c890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15c894: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15c894u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15c898: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15c898u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15c89c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c8a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C8A0u;
    {
        const bool branch_taken_0x15c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A0u;
        // 0x15c8a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8a0) {
            ctx->pc = 0x15C8C4u;
            return;
        }
    }
    ctx->pc = 0x15C8A8u;
}
