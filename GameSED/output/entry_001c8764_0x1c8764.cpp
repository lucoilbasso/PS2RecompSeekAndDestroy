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

// Function: entry_001c8764
// Address: 0x1c8764 - 0x1c87b0
void entry_001c8764_0x1c8764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8764_0x1c8764");
#endif

    ctx->pc = 0x1c8764u;

    // 0x1c8764: 0x1012  mflo        $v0
    ctx->pc = 0x1c8764u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8768: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8768u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c876c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c876cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8770: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8774: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x1c8774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c8778: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c877c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c8780: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8780u;
    {
        const bool branch_taken_0x1c8780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8780) {
            ctx->pc = 0x1C8784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8780u;
            // 0x1c8784: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C87B4u;
            return;
        }
    }
    ctx->pc = 0x1C8788u;
    // 0x1c8788: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c878c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c878cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8790: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8790u;
    {
        const bool branch_taken_0x1c8790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8790u;
        // 0x1c8794: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8790) {
            ctx->pc = 0x1C87B0u;
            return;
        }
    }
    ctx->pc = 0x1C8798u;
    // 0x1c8798: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c8798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c879c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C879Cu;
    {
        const bool branch_taken_0x1c879c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c879c) {
            ctx->pc = 0x1C87A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C879Cu;
            // 0x1c87a0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C87B4u;
            return;
        }
    }
    ctx->pc = 0x1C87A4u;
    // 0x1c87a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c87a8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c87ac: 0x0  nop
    ctx->pc = 0x1c87acu;
    // NOP
    ctx->pc = 0x1c87b0u;
}
