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

// Function: entry_001279f4
// Address: 0x1279f4 - 0x1279f8
void entry_001279f4_0x1279f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001279f4_0x1279f4");
#endif

    ctx->pc = 0x1279f4u;

    // 0x1279f4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1279f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x1279f8u;
}
