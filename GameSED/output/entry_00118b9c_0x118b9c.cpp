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

// Function: entry_00118b9c
// Address: 0x118b9c - 0x118ba0
void entry_00118b9c_0x118b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118b9c_0x118b9c");
#endif

    ctx->pc = 0x118b9cu;

    // 0x118b9c: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x118b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x118ba0u;
}
