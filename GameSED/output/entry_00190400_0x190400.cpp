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

// Function: entry_00190400
// Address: 0x190400 - 0x190404
void entry_00190400_0x190400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190400_0x190400");
#endif

    ctx->pc = 0x190400u;

    // 0x190400: 0xa0860157  sb          $a2, 0x157($a0)
    ctx->pc = 0x190400u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 343), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x190404u;
}
