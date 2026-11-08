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

// Function: entry_00114020
// Address: 0x114020 - 0x114028
void entry_00114020_0x114020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114020_0x114020");
#endif

    ctx->pc = 0x114020u;

    // 0x114020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114020u;
    {
        const bool branch_taken_0x114020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114020u;
        // 0x114024: 0x90660010  lbu         $a2, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114020) {
            ctx->pc = 0x11403Cu;
            return;
        }
    }
    ctx->pc = 0x114028u;
}
