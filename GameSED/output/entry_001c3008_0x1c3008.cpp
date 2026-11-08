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

// Function: entry_001c3008
// Address: 0x1c3008 - 0x1c3014
void entry_001c3008_0x1c3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3008_0x1c3008");
#endif

    ctx->pc = 0x1c3008u;

    // 0x1c3008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c300c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C300Cu;
    {
        const bool branch_taken_0x1c300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C300Cu;
        // 0x1c3010: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c300c) {
            ctx->pc = 0x1C303Cu;
            return;
        }
    }
    ctx->pc = 0x1C3014u;
}
