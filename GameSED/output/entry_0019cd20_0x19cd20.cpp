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

// Function: entry_0019cd20
// Address: 0x19cd20 - 0x19cd2c
void entry_0019cd20_0x19cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd20_0x19cd20");
#endif

    ctx->pc = 0x19cd20u;

    // 0x19cd20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19cd24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CD24u;
    {
        const bool branch_taken_0x19cd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cd24) {
            ctx->pc = 0x19CD34u;
            return;
        }
    }
    ctx->pc = 0x19CD2Cu;
}
