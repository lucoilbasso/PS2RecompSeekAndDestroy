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

// Function: entry_001952d8
// Address: 0x1952d8 - 0x1952dc
void entry_001952d8_0x1952d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001952d8_0x1952d8");
#endif

    ctx->pc = 0x1952d8u;

    // 0x1952d8: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x1952d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x1952dcu;
}
