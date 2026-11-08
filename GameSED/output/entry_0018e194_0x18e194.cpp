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

// Function: entry_0018e194
// Address: 0x18e194 - 0x18e1c0
void entry_0018e194_0x18e194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e194_0x18e194");
#endif

    ctx->pc = 0x18e194u;

    // 0x18e194: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18e194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18e198: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    // 0x18e19c: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x18e19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e1a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e1a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e1a8: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x18e1a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e1ac: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E1ACu;
    {
        const bool branch_taken_0x18e1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1ACu;
        // 0x18e1b0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1ac) {
            ctx->pc = 0x18E160u;
            return;
        }
    }
    ctx->pc = 0x18E1B4u;
    // 0x18e1b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18E1B4u;
    {
        const bool branch_taken_0x18e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1B4u;
        // 0x18e1b8: 0x2502023c  addiu       $v0, $t0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1b4) {
            ctx->pc = 0x18E238u;
            return;
        }
    }
    ctx->pc = 0x18E1BCu;
    // 0x18e1bc: 0x0  nop
    ctx->pc = 0x18e1bcu;
    // NOP
    ctx->pc = 0x18e1c0u;
}
