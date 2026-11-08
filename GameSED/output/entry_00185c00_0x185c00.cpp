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

// Function: entry_00185c00
// Address: 0x185c00 - 0x185c08
void entry_00185c00_0x185c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185c00_0x185c00");
#endif

    ctx->pc = 0x185c00u;

    // 0x185c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x185C00u;
    {
        const bool branch_taken_0x185c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C00u;
        // 0x185c04: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c00) {
            ctx->pc = 0x185C18u;
            return;
        }
    }
    ctx->pc = 0x185C08u;
}
