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

// Function: entry_0017b94c
// Address: 0x17b94c - 0x17b954
void entry_0017b94c_0x17b94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b94c_0x17b94c");
#endif

    ctx->pc = 0x17b94cu;

    // 0x17b94c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b950: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17b950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x17b954u;
}
