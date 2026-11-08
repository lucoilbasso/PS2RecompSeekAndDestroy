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

// Function: entry_0013c24c
// Address: 0x13c24c - 0x13c254
void entry_0013c24c_0x13c24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c24c_0x13c24c");
#endif

    ctx->pc = 0x13c24cu;

    // 0x13c24c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x13c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13c250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x13c254u;
}
