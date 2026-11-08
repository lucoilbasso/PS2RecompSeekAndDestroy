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

// Function: entry_0016aad8
// Address: 0x16aad8 - 0x16aadc
void entry_0016aad8_0x16aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aad8_0x16aad8");
#endif

    ctx->pc = 0x16aad8u;

    // 0x16aad8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x16aadcu;
}
