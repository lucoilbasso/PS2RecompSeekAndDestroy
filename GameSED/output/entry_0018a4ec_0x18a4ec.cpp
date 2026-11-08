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

// Function: entry_0018a4ec
// Address: 0x18a4ec - 0x18a4f8
void entry_0018a4ec_0x18a4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a4ec_0x18a4ec");
#endif

    ctx->pc = 0x18a4ecu;

    // 0x18a4ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18a4f0: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18A4F0u;
    {
        const bool branch_taken_0x18a4f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a4f0) {
            ctx->pc = 0x18A4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A4F0u;
            // 0x18a4f4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A4D0u;
            return;
        }
    }
    ctx->pc = 0x18A4F8u;
}
