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

// Function: entry_001c8da4
// Address: 0x1c8da4 - 0x1c8df0
void entry_001c8da4_0x1c8da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8da4_0x1c8da4");
#endif

    ctx->pc = 0x1c8da4u;

    // 0x1c8da4: 0x1012  mflo        $v0
    ctx->pc = 0x1c8da4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8da8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8da8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8dac: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1c8dacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8db4: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1c8db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c8db8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8dbc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c8dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8dc0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8DC0u;
    {
        const bool branch_taken_0x1c8dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8dc0) {
            ctx->pc = 0x1C8DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DC0u;
            // 0x1c8dc4: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DF4u;
            return;
        }
    }
    ctx->pc = 0x1C8DC8u;
    // 0x1c8dc8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c8dcc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c8dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8dd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8DD0u;
    {
        const bool branch_taken_0x1c8dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD0u;
        // 0x1c8dd4: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd0) {
            ctx->pc = 0x1C8DF0u;
            return;
        }
    }
    ctx->pc = 0x1C8DD8u;
    // 0x1c8dd8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c8dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c8ddc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8DDCu;
    {
        const bool branch_taken_0x1c8ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ddc) {
            ctx->pc = 0x1C8DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DDCu;
            // 0x1c8de0: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DF4u;
            return;
        }
    }
    ctx->pc = 0x1C8DE4u;
    // 0x1c8de4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1c8de8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c8dec: 0x0  nop
    ctx->pc = 0x1c8decu;
    // NOP
    ctx->pc = 0x1c8df0u;
}
