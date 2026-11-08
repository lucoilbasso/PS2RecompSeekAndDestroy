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

// Function: caseD_2
// Address: 0x111e10 - 0x111e20
void caseD_2_0x111e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x111e10");
#endif

    ctx->pc = 0x111e10u;

    // 0x111e10: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x111e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e14: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x111E14u;
    {
        const bool branch_taken_0x111e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E14u;
        // 0x111e18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e14) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111E1Cu;
    // 0x111e1c: 0x0  nop
    ctx->pc = 0x111e1cu;
    // NOP
    ctx->pc = 0x111e20u;
}
