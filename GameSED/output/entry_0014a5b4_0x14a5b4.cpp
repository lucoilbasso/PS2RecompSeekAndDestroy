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

// Function: entry_0014a5b4
// Address: 0x14a5b4 - 0x14a5b8
void entry_0014a5b4_0x14a5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a5b4_0x14a5b4");
#endif

    ctx->pc = 0x14a5b4u;

    // 0x14a5b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x14a5b8u;
}
