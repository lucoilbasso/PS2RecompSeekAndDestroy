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

// Function: entry_001838b8
// Address: 0x1838b8 - 0x1838bc
void entry_001838b8_0x1838b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001838b8_0x1838b8");
#endif

    ctx->pc = 0x1838b8u;

    // 0x1838b8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x1838bcu;
}
