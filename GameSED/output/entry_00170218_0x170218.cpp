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

// Function: entry_00170218
// Address: 0x170218 - 0x170228
void entry_00170218_0x170218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170218_0x170218");
#endif

    ctx->pc = 0x170218u;

    // 0x170218: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x170218u;
    {
        const bool branch_taken_0x170218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170218) {
            ctx->pc = 0x17021Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170218u;
            // 0x17021c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170248u;
            return;
        }
    }
    ctx->pc = 0x170220u;
    // 0x170220: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170220u;
    {
        const bool branch_taken_0x170220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170220u;
        // 0x170224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170220) {
            ctx->pc = 0x17024Cu;
            return;
        }
    }
    ctx->pc = 0x170228u;
}
