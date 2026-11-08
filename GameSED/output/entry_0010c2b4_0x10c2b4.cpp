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

// Function: entry_0010c2b4
// Address: 0x10c2b4 - 0x10c2bc
void entry_0010c2b4_0x10c2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c2b4_0x10c2b4");
#endif

    ctx->pc = 0x10c2b4u;

    // 0x10c2b4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C2B4u;
    {
        const bool branch_taken_0x10c2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2B4u;
        // 0x10c2b8: 0x24030086  addiu       $v1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2b4) {
            ctx->pc = 0x10C2D0u;
            return;
        }
    }
    ctx->pc = 0x10C2BCu;
}
