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

// Function: entry_0017c8e4
// Address: 0x17c8e4 - 0x17c8e8
void entry_0017c8e4_0x17c8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c8e4_0x17c8e4");
#endif

    ctx->pc = 0x17c8e4u;

    // 0x17c8e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x17c8e8u;
}
