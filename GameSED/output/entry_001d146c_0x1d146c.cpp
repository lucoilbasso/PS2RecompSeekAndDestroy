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

// Function: entry_001d146c
// Address: 0x1d146c - 0x1d1470
void entry_001d146c_0x1d146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d146c_0x1d146c");
#endif

    ctx->pc = 0x1d146cu;

    // 0x1d146c: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x1d146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    ctx->pc = 0x1d1470u;
}
