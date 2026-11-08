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

// Function: entry_001420bc
// Address: 0x1420bc - 0x1420c4
void entry_001420bc_0x1420bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420bc_0x1420bc");
#endif

    ctx->pc = 0x1420bcu;

    // 0x1420bc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1420BCu;
    {
        const bool branch_taken_0x1420bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1420bc) {
            ctx->pc = 0x1420C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1420BCu;
            // 0x1420c0: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1420C4u;
            return;
        }
    }
    ctx->pc = 0x1420C4u;
}
