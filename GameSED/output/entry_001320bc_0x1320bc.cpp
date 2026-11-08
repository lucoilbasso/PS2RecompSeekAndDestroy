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

// Function: entry_001320bc
// Address: 0x1320bc - 0x1320c0
void entry_001320bc_0x1320bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001320bc_0x1320bc");
#endif

    ctx->pc = 0x1320bcu;

    // 0x1320bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1320bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x1320c0u;
}
