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

// Function: entry_0015cfb0
// Address: 0x15cfb0 - 0x15cfb4
void entry_0015cfb0_0x15cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfb0_0x15cfb0");
#endif

    ctx->pc = 0x15cfb0u;

    // 0x15cfb0: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15cfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->pc = 0x15cfb4u;
}
