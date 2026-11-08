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

// Function: entry_0013c294
// Address: 0x13c294 - 0x13c29c
void entry_0013c294_0x13c294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c294_0x13c294");
#endif

    ctx->pc = 0x13c294u;

    // 0x13c294: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13c298: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13c298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->pc = 0x13c29cu;
}
