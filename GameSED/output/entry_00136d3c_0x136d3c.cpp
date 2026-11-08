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

// Function: entry_00136d3c
// Address: 0x136d3c - 0x136d40
void entry_00136d3c_0x136d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d3c_0x136d3c");
#endif

    ctx->pc = 0x136d3cu;

    // 0x136d3c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x136d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x136d40u;
}
