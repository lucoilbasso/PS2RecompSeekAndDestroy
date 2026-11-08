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

// Function: entry_00137a54
// Address: 0x137a54 - 0x137a5c
void entry_00137a54_0x137a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137a54_0x137a54");
#endif

    ctx->pc = 0x137a54u;

    // 0x137a54: 0x5660ffa2  bnel        $s3, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x137A54u;
    {
        const bool branch_taken_0x137a54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x137a54) {
            ctx->pc = 0x137A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137A54u;
            // 0x137a58: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1378E0u;
            return;
        }
    }
    ctx->pc = 0x137A5Cu;
}
