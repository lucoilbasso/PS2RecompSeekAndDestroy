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

// Function: entry_001ad018
// Address: 0x1ad018 - 0x1ad02c
void entry_001ad018_0x1ad018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad018_0x1ad018");
#endif

    ctx->pc = 0x1ad018u;

    // 0x1ad018: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ad01c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ad01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ad020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ad024: 0x1468fff6  bne         $v1, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AD024u;
    {
        const bool branch_taken_0x1ad024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x1AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD024u;
        // 0x1ad028: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad024) {
            ctx->pc = 0x1AD000u;
            return;
        }
    }
    ctx->pc = 0x1AD02Cu;
}
