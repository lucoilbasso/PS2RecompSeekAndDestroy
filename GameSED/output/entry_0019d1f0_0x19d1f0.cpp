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

// Function: entry_0019d1f0
// Address: 0x19d1f0 - 0x19d1f4
void entry_0019d1f0_0x19d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d1f0_0x19d1f0");
#endif

    ctx->pc = 0x19d1f0u;

    // 0x19d1f0: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x19d1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19d1f4u;
}
