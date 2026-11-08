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

// Function: entry_00121194
// Address: 0x121194 - 0x12119c
void entry_00121194_0x121194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121194_0x121194");
#endif

    ctx->pc = 0x121194u;

    // 0x121194: 0x54e00006  bnel        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x121194u;
    {
        const bool branch_taken_0x121194 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x121194) {
            ctx->pc = 0x121198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121194u;
            // 0x121198: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211B0u;
            return;
        }
    }
    ctx->pc = 0x12119Cu;
}
