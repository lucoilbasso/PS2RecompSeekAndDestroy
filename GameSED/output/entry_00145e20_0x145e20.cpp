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

// Function: entry_00145e20
// Address: 0x145e20 - 0x145e30
void entry_00145e20_0x145e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e20_0x145e20");
#endif

    ctx->pc = 0x145e20u;

    // 0x145e20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x145e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x145e24: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x145e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x145e28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145E28u;
    {
        const bool branch_taken_0x145e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145e28) {
            ctx->pc = 0x145E40u;
            return;
        }
    }
    ctx->pc = 0x145E30u;
}
