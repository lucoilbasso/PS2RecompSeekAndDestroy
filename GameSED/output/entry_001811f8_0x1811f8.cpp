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

// Function: entry_001811f8
// Address: 0x1811f8 - 0x1811fc
void entry_001811f8_0x1811f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001811f8_0x1811f8");
#endif

    ctx->pc = 0x1811f8u;

    // 0x1811f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1811f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1811fcu;
}
