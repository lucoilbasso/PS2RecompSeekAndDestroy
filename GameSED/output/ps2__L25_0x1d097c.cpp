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

// Function: $L25
// Address: 0x1d097c - 0x1d0988
void ps2__L25_0x1d097c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L25_0x1d097c");
#endif

    ctx->pc = 0x1d097cu;

    // 0x1d097c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D097Cu;
    {
        const bool branch_taken_0x1d097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d097c) {
            ctx->pc = 0x1D096Cu;
            return;
        }
    }
    ctx->pc = 0x1D0984u;
    // 0x1d0984: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d0984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1d0988u;
}
