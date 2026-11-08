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

// Function: entry_0018f1c8
// Address: 0x18f1c8 - 0x18f1cc
void entry_0018f1c8_0x18f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f1c8_0x18f1c8");
#endif

    ctx->pc = 0x18f1c8u;

    // 0x18f1c8: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x18f1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->pc = 0x18f1ccu;
}
