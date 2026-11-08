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

// Function: entry_001364f8
// Address: 0x1364f8 - 0x136500
void entry_001364f8_0x1364f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001364f8_0x1364f8");
#endif

    ctx->pc = 0x1364f8u;

    // 0x1364f8: 0x131827  nor         $v1, $zero, $s3
    ctx->pc = 0x1364f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x1364fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1364fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x136500u;
}
