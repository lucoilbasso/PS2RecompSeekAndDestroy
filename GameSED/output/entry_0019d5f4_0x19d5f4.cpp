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

// Function: entry_0019d5f4
// Address: 0x19d5f4 - 0x19d5f8
void entry_0019d5f4_0x19d5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d5f4_0x19d5f4");
#endif

    ctx->pc = 0x19d5f4u;

    // 0x19d5f4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    ctx->pc = 0x19d5f8u;
}
