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

// Function: entry_00195038
// Address: 0x195038 - 0x195044
void entry_00195038_0x195038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195038_0x195038");
#endif

    ctx->pc = 0x195038u;

    // 0x195038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19503c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x19503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x195040: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x195040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x195044u;
}
