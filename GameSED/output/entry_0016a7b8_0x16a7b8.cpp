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

// Function: entry_0016a7b8
// Address: 0x16a7b8 - 0x16a7bc
void entry_0016a7b8_0x16a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a7b8_0x16a7b8");
#endif

    ctx->pc = 0x16a7b8u;

    // 0x16a7b8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    ctx->pc = 0x16a7bcu;
}
