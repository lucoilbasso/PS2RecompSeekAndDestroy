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

// Function: entry_0017b9c0
// Address: 0x17b9c0 - 0x17b9c4
void entry_0017b9c0_0x17b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9c0_0x17b9c0");
#endif

    ctx->pc = 0x17b9c0u;

    // 0x17b9c0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17b9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    ctx->pc = 0x17b9c4u;
}
