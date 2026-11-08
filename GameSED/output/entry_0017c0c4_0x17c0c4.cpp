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

// Function: entry_0017c0c4
// Address: 0x17c0c4 - 0x17c0d4
void entry_0017c0c4_0x17c0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c0c4_0x17c0c4");
#endif

    ctx->pc = 0x17c0c4u;

    // 0x17c0c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17c0c8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17C0C8u;
    {
        const bool branch_taken_0x17c0c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0C8u;
        // 0x17c0cc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0c8) {
            ctx->pc = 0x17C080u;
            return;
        }
    }
    ctx->pc = 0x17C0D0u;
    // 0x17c0d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17c0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x17c0d4u;
}
