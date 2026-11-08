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

// Function: entry_001903a0
// Address: 0x1903a0 - 0x1903a4
void entry_001903a0_0x1903a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001903a0_0x1903a0");
#endif

    ctx->pc = 0x1903a0u;

    // 0x1903a0: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x1903a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    ctx->pc = 0x1903a4u;
}
