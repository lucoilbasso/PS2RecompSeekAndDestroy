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

// Function: entry_0014c8c4
// Address: 0x14c8c4 - 0x14c8d0
void entry_0014c8c4_0x14c8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c8c4_0x14c8c4");
#endif

    ctx->pc = 0x14c8c4u;

    // 0x14c8c4: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x14c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x14c8c8: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C8C8u;
    {
        const bool branch_taken_0x14c8c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c8c8) {
            ctx->pc = 0x14C8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8C8u;
            // 0x14c8cc: 0xae0001c8  sw          $zero, 0x1C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C8D0u;
            return;
        }
    }
    ctx->pc = 0x14C8D0u;
}
