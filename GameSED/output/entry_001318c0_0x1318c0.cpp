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

// Function: entry_001318c0
// Address: 0x1318c0 - 0x1318cc
void entry_001318c0_0x1318c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318c0_0x1318c0");
#endif

    ctx->pc = 0x1318c0u;

    // 0x1318c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1318c4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1318C4u;
    {
        const bool branch_taken_0x1318c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1318c4) {
            ctx->pc = 0x1318C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318C4u;
            // 0x1318c8: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1318CCu;
            return;
        }
    }
    ctx->pc = 0x1318CCu;
}
