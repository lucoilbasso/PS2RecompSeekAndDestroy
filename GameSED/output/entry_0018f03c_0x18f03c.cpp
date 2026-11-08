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

// Function: entry_0018f03c
// Address: 0x18f03c - 0x18f040
void entry_0018f03c_0x18f03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f03c_0x18f03c");
#endif

    ctx->pc = 0x18f03cu;

    // 0x18f03c: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    ctx->pc = 0x18f040u;
}
