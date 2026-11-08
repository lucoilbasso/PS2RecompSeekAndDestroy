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

// Function: entry_00168e28
// Address: 0x168e28 - 0x168e4c
void entry_00168e28_0x168e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e28_0x168e28");
#endif

    ctx->pc = 0x168e28u;

    // 0x168e28: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x168e28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x168e2c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x168e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168e30: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x168e34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x168e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168e38: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x168e38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x168e40: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x168e44: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x168E44u;
    {
        const bool branch_taken_0x168e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E44u;
        // 0x168e48: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e44) {
            ctx->pc = 0x168C68u;
            return;
        }
    }
    ctx->pc = 0x168E4Cu;
}
