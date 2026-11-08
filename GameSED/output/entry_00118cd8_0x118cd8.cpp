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

// Function: entry_00118cd8
// Address: 0x118cd8 - 0x118cdc
void entry_00118cd8_0x118cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118cd8_0x118cd8");
#endif

    ctx->pc = 0x118cd8u;

    // 0x118cd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x118cdcu;
}
