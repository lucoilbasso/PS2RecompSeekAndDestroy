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

// Function: entry_001c8dfc
// Address: 0x1c8dfc - 0x1c8e4c
void entry_001c8dfc_0x1c8dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8dfc_0x1c8dfc");
#endif

    ctx->pc = 0x1c8dfcu;

    // 0x1c8dfc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c8dfcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c8e00: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c8e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c8e04: 0x1012  mflo        $v0
    ctx->pc = 0x1c8e04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8e08: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8e08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8e0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c8e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e10: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8e14: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1c8e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8e18: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1c8e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8e1c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c8e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8e20: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8E20u;
    {
        const bool branch_taken_0x1c8e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e20) {
            ctx->pc = 0x1C8E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E20u;
            // 0x1c8e24: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E50u;
            return;
        }
    }
    ctx->pc = 0x1C8E28u;
    // 0x1c8e28: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1c8e2c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1c8e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8e30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E30u;
    {
        const bool branch_taken_0x1c8e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E30u;
        // 0x1c8e34: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e30) {
            ctx->pc = 0x1C8E4Cu;
            return;
        }
    }
    ctx->pc = 0x1C8E38u;
    // 0x1c8e38: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c8e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8e3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8E3Cu;
    {
        const bool branch_taken_0x1c8e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e3c) {
            ctx->pc = 0x1C8E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E3Cu;
            // 0x1c8e40: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E50u;
            return;
        }
    }
    ctx->pc = 0x1C8E44u;
    // 0x1c8e44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c8e48: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c8e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x1c8e4cu;
}
