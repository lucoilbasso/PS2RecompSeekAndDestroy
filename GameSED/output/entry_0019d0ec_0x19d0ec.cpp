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

// Function: entry_0019d0ec
// Address: 0x19d0ec - 0x19d0f0
void entry_0019d0ec_0x19d0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0ec_0x19d0ec");
#endif

    ctx->pc = 0x19d0ecu;

    // 0x19d0ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x19d0f0u;
}
