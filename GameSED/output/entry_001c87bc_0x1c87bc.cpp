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

// Function: entry_001c87bc
// Address: 0x1c87bc - 0x1c880c
void entry_001c87bc_0x1c87bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c87bc_0x1c87bc");
#endif

    ctx->pc = 0x1c87bcu;

    // 0x1c87bc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1c87bcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c87c0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c87c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c87c4: 0x1012  mflo        $v0
    ctx->pc = 0x1c87c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c87c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c87c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c87cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c87ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c87d4: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x1c87d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c87d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c87d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c87dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c87dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c87e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C87E0u;
    {
        const bool branch_taken_0x1c87e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87E0u;
        // 0x1c87e4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87e0) {
            ctx->pc = 0x1C8810u;
            return;
        }
    }
    ctx->pc = 0x1C87E8u;
    // 0x1c87e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c87ec: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c87ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c87f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C87F0u;
    {
        const bool branch_taken_0x1c87f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87F0u;
        // 0x1c87f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87f0) {
            ctx->pc = 0x1C880Cu;
            return;
        }
    }
    ctx->pc = 0x1C87F8u;
    // 0x1c87f8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c87f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c87fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C87FCu;
    {
        const bool branch_taken_0x1c87fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87FCu;
        // 0x1c8800: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87fc) {
            ctx->pc = 0x1C8810u;
            return;
        }
    }
    ctx->pc = 0x1C8804u;
    // 0x1c8804: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c8808: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c8808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x1c880cu;
}
