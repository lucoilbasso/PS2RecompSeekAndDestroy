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

// Function: entry_0018e104
// Address: 0x18e104 - 0x18e130
void entry_0018e104_0x18e104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e104_0x18e104");
#endif

    ctx->pc = 0x18e104u;

    // 0x18e104: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18e108: 0x8d630208  lw          $v1, 0x208($t3)
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 520)));
    // 0x18e10c: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e110: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e114: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e118: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x18e118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e11c: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E11Cu;
    {
        const bool branch_taken_0x18e11c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E11Cu;
        // 0x18e120: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e11c) {
            ctx->pc = 0x18E0D0u;
            return;
        }
    }
    ctx->pc = 0x18E124u;
    // 0x18e124: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18E124u;
    {
        const bool branch_taken_0x18e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E124u;
        // 0x18e128: 0x2502023c  addiu       $v0, $t0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e124) {
            ctx->pc = 0x18E238u;
            return;
        }
    }
    ctx->pc = 0x18E12Cu;
    // 0x18e12c: 0x0  nop
    ctx->pc = 0x18e12cu;
    // NOP
    ctx->pc = 0x18e130u;
}
