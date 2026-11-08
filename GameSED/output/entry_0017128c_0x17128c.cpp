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

// Function: entry_0017128c
// Address: 0x17128c - 0x171290
void entry_0017128c_0x17128c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017128c_0x17128c");
#endif

    ctx->pc = 0x17128cu;

    // 0x17128c: 0x8e0c0038  lw          $t4, 0x38($s0)
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x171290u;
}
