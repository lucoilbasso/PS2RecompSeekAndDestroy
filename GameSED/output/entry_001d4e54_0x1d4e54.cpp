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

// Function: entry_001d4e54
// Address: 0x1d4e54 - 0x1d4e60
void entry_001d4e54_0x1d4e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e54_0x1d4e54");
#endif

    ctx->pc = 0x1d4e54u;

    // 0x1d4e54: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4E54u;
    {
        const bool branch_taken_0x1d4e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E54u;
        // 0x1d4e58: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e54) {
            ctx->pc = 0x1D4EA0u;
            return;
        }
    }
    ctx->pc = 0x1D4E5Cu;
    // 0x1d4e5c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1d4e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1d4e60u;
}
