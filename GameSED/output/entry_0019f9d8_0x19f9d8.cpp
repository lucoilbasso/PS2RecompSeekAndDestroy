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

// Function: entry_0019f9d8
// Address: 0x19f9d8 - 0x19f9e0
void entry_0019f9d8_0x19f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9d8_0x19f9d8");
#endif

    ctx->pc = 0x19f9d8u;

    // 0x19f9d8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x19f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x19f9dc: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x19f9dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
    ctx->pc = 0x19f9e0u;
}
