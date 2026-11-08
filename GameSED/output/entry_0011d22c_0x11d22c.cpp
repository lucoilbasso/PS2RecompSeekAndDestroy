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

// Function: entry_0011d22c
// Address: 0x11d22c - 0x11d238
void entry_0011d22c_0x11d22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d22c_0x11d22c");
#endif

    ctx->pc = 0x11d22cu;

    // 0x11d22c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d230: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D230u;
    {
        const bool branch_taken_0x11d230 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d230) {
            ctx->pc = 0x11D234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D230u;
            // 0x11d234: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D238u;
            return;
        }
    }
    ctx->pc = 0x11D238u;
}
