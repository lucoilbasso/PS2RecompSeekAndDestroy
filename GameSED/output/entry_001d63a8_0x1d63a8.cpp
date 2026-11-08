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

// Function: entry_001d63a8
// Address: 0x1d63a8 - 0x1d63b0
void entry_001d63a8_0x1d63a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d63a8_0x1d63a8");
#endif

    ctx->pc = 0x1d63a8u;

    // 0x1d63a8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1d63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1d63ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d63acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->pc = 0x1d63b0u;
}
