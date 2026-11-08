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

// Function: entry_001c8af4
// Address: 0x1c8af4 - 0x1c8b38
void entry_001c8af4_0x1c8af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8af4_0x1c8af4");
#endif

    ctx->pc = 0x1c8af4u;

    // 0x1c8af4: 0x1012  mflo        $v0
    ctx->pc = 0x1c8af4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8af8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8af8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8afc: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1c8afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8b00: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8b04: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1c8b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8b08: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c8b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8B0Cu;
    {
        const bool branch_taken_0x1c8b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B0Cu;
        // 0x1c8b10: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b0c) {
            ctx->pc = 0x1C8B38u;
            return;
        }
    }
    ctx->pc = 0x1C8B14u;
    // 0x1c8b14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c8b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c8b18: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1c8b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8b1c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8B1Cu;
    {
        const bool branch_taken_0x1c8b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b1c) {
            ctx->pc = 0x1C8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8B1Cu;
            // 0x1c8b20: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8B3Cu;
            return;
        }
    }
    ctx->pc = 0x1C8B24u;
    // 0x1c8b24: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c8b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8b28: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c8b2c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c8b30: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c8b30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c8b34: 0x0  nop
    ctx->pc = 0x1c8b34u;
    // NOP
    ctx->pc = 0x1c8b38u;
}
