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

// Function: entry_00175f9c
// Address: 0x175f9c - 0x175fac
void entry_00175f9c_0x175f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f9c_0x175f9c");
#endif

    ctx->pc = 0x175f9cu;

    // 0x175f9c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x175F9Cu;
    {
        const bool branch_taken_0x175f9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f9c) {
            ctx->pc = 0x175FACu;
            return;
        }
    }
    ctx->pc = 0x175FA4u;
    // 0x175fa4: 0x52a0ffd6  beql        $s5, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x175FA4u;
    {
        const bool branch_taken_0x175fa4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fa4) {
            ctx->pc = 0x175FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175FA4u;
            // 0x175fa8: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175F00u;
            return;
        }
    }
    ctx->pc = 0x175FACu;
}
