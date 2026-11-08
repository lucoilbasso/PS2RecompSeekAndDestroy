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

// Function: entry_0015e53c
// Address: 0x15e53c - 0x15e540
void entry_0015e53c_0x15e53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e53c_0x15e53c");
#endif

    ctx->pc = 0x15e53cu;

    // 0x15e53c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x15e540u;
}
