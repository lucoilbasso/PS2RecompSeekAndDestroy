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

// Function: entry_001cf654
// Address: 0x1cf654 - 0x1cf658
void entry_001cf654_0x1cf654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf654_0x1cf654");
#endif

    ctx->pc = 0x1cf654u;

    // 0x1cf654: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x1cf658u;
}
