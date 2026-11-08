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

// Function: entry_001c7370
// Address: 0x1c7370 - 0x1c7380
void entry_001c7370_0x1c7370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7370_0x1c7370");
#endif

    ctx->pc = 0x1c7370u;

    // 0x1c7370: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7374u;
    {
        const bool branch_taken_0x1c7374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7374u;
        // 0x1c7378: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7374) {
            ctx->pc = 0x1C7384u;
            return;
        }
    }
    ctx->pc = 0x1C737Cu;
    // 0x1c737c: 0x0  nop
    ctx->pc = 0x1c737cu;
    // NOP
    ctx->pc = 0x1c7380u;
}
