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

// Function: entry_0019ce90
// Address: 0x19ce90 - 0x19cea0
void entry_0019ce90_0x19ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce90_0x19ce90");
#endif

    ctx->pc = 0x19ce90u;

    // 0x19ce90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19CE90u;
    {
        const bool branch_taken_0x19ce90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ce90) {
            ctx->pc = 0x19CEC0u;
            return;
        }
    }
    ctx->pc = 0x19CE98u;
    // 0x19ce98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CE98u;
    {
        const bool branch_taken_0x19ce98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE98u;
        // 0x19ce9c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce98) {
            ctx->pc = 0x19CEB0u;
            return;
        }
    }
    ctx->pc = 0x19CEA0u;
}
