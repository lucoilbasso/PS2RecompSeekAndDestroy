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

// Function: entry_00157324
// Address: 0x157324 - 0x157328
void entry_00157324_0x157324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157324_0x157324");
#endif

    ctx->pc = 0x157324u;

    // 0x157324: 0x24052118  addiu       $a1, $zero, 0x2118
    ctx->pc = 0x157324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->pc = 0x157328u;
}
