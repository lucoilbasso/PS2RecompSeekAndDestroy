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

// Function: entry_0019ea00
// Address: 0x19ea00 - 0x19ea04
void entry_0019ea00_0x19ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea00_0x19ea00");
#endif

    ctx->pc = 0x19ea00u;

    // 0x19ea00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x19ea04u;
}
