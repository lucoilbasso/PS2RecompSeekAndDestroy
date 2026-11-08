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

// Function: caseD_7
// Address: 0x116680 - 0x116688
void caseD_7_0x116680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x116680");
#endif

    ctx->pc = 0x116680u;

    // 0x116680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116680u;
    {
        const bool branch_taken_0x116680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0x2623014c  addiu       $v1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116680) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x116688u;
}
