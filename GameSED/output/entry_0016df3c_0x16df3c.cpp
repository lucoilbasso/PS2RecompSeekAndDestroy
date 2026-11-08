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

// Function: entry_0016df3c
// Address: 0x16df3c - 0x16df40
void entry_0016df3c_0x16df3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016df3c_0x16df3c");
#endif

    ctx->pc = 0x16df3cu;

    // 0x16df3c: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x16df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    ctx->pc = 0x16df40u;
}
