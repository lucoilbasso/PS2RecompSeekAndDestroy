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

// Function: caseD_13
// Address: 0x164328 - 0x164330
void caseD_13_0x164328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x164328");
#endif

    ctx->pc = 0x164328u;

    // 0x164328: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164328u;
    {
        const bool branch_taken_0x164328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164328u;
        // 0x16432c: 0x249119f0  addiu       $s1, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164328) {
            ctx->pc = 0x16434Cu;
            return;
        }
    }
    ctx->pc = 0x164330u;
}
