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

// Function: entry_001cada0
// Address: 0x1cada0 - 0x1cadb8
void entry_001cada0_0x1cada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cada0_0x1cada0");
#endif

    ctx->pc = 0x1cada0u;

    // 0x1cada0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cada4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1cada4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cada8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1cada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cadac: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1cadacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cadb0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1CADB0u;
    {
        const bool branch_taken_0x1cadb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADB0u;
        // 0x1cadb4: 0x252b0002  addiu       $t3, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadb0) {
            ctx->pc = 0x1CAD08u;
            return;
        }
    }
    ctx->pc = 0x1CADB8u;
}
