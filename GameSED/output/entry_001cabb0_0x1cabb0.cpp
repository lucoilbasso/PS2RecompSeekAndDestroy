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

// Function: entry_001cabb0
// Address: 0x1cabb0 - 0x1cabc8
void entry_001cabb0_0x1cabb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cabb0_0x1cabb0");
#endif

    ctx->pc = 0x1cabb0u;

    // 0x1cabb0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cabb4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1cabb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabb8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cabbc: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1cabbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cabc0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1CABC0u;
    {
        const bool branch_taken_0x1cabc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABC0u;
        // 0x1cabc4: 0x252b0002  addiu       $t3, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabc0) {
            ctx->pc = 0x1CAB18u;
            return;
        }
    }
    ctx->pc = 0x1CABC8u;
}
