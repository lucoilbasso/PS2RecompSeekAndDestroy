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

// Function: entry_00177f38
// Address: 0x177f38 - 0x177f3c
void entry_00177f38_0x177f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177f38_0x177f38");
#endif

    ctx->pc = 0x177f38u;

    // 0x177f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->pc = 0x177f3cu;
}
