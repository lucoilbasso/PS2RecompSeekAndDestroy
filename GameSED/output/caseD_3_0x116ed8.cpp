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

// Function: caseD_3
// Address: 0x116ed8 - 0x116ee0
void caseD_3_0x116ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x116ed8");
#endif

    ctx->pc = 0x116ed8u;

    // 0x116ed8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116ED8u;
    {
        const bool branch_taken_0x116ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED8u;
        // 0x116edc: 0x2624007c  addiu       $a0, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed8) {
            ctx->pc = 0x116F1Cu;
            return;
        }
    }
    ctx->pc = 0x116EE0u;
}
