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

// Function: entry_001956b8
// Address: 0x1956b8 - 0x1956bc
void entry_001956b8_0x1956b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001956b8_0x1956b8");
#endif

    ctx->pc = 0x1956b8u;

    // 0x1956b8: 0x26120150  addiu       $s2, $s0, 0x150
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->pc = 0x1956bcu;
}
