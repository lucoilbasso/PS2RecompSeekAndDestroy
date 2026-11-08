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

// Function: entry_001dfcd0
// Address: 0x1dfcd0 - 0x1dfcd8
void entry_001dfcd0_0x1dfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfcd0_0x1dfcd0");
#endif

    ctx->pc = 0x1dfcd0u;

    // 0x1dfcd0: 0x1012  mflo        $v0
    ctx->pc = 0x1dfcd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1dfcd4: 0xa482017a  sh          $v0, 0x17A($a0)
    ctx->pc = 0x1dfcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 378), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1dfcd8u;
}
