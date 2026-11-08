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

// Function: entry_001601dc
// Address: 0x1601dc - 0x1601e0
void entry_001601dc_0x1601dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001601dc_0x1601dc");
#endif

    ctx->pc = 0x1601dcu;

    // 0x1601dc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->pc = 0x1601e0u;
}
