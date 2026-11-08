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

// Function: entry_001caab8
// Address: 0x1caab8 - 0x1caabc
void entry_001caab8_0x1caab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caab8_0x1caab8");
#endif

    ctx->pc = 0x1caab8u;

    // 0x1caab8: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x1caab8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1caabcu;
}
