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

// Function: caseD_a
// Address: 0x115458 - 0x115460
void caseD_a_0x115458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x115458");
#endif

    ctx->pc = 0x115458u;

    // 0x115458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115458u;
    {
        const bool branch_taken_0x115458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115458u;
        // 0x11545c: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115458) {
            ctx->pc = 0x115464u;
            return;
        }
    }
    ctx->pc = 0x115460u;
}
