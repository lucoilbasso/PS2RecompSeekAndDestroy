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

// Function: entry_001c93bc
// Address: 0x1c93bc - 0x1c9408
void entry_001c93bc_0x1c93bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c93bc_0x1c93bc");
#endif

    ctx->pc = 0x1c93bcu;

    // 0x1c93bc: 0x1012  mflo        $v0
    ctx->pc = 0x1c93bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c93c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c93c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c93c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c93c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c93cc: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x1c93ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c93d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c93d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c93d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c93d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c93d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C93D8u;
    {
        const bool branch_taken_0x1c93d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93d8) {
            ctx->pc = 0x1C93DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93D8u;
            // 0x1c93dc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C940Cu;
            return;
        }
    }
    ctx->pc = 0x1C93E0u;
    // 0x1c93e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c93e4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c93e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c93e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C93E8u;
    {
        const bool branch_taken_0x1c93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93E8u;
        // 0x1c93ec: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93e8) {
            ctx->pc = 0x1C9408u;
            return;
        }
    }
    ctx->pc = 0x1C93F0u;
    // 0x1c93f0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c93f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c93f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C93F4u;
    {
        const bool branch_taken_0x1c93f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93f4) {
            ctx->pc = 0x1C93F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93F4u;
            // 0x1c93f8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C940Cu;
            return;
        }
    }
    ctx->pc = 0x1C93FCu;
    // 0x1c93fc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c93fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9400: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c9404: 0x0  nop
    ctx->pc = 0x1c9404u;
    // NOP
    ctx->pc = 0x1c9408u;
}
