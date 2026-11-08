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

// Function: entry_001414d0
// Address: 0x1414d0 - 0x1414d8
void entry_001414d0_0x1414d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001414d0_0x1414d0");
#endif

    ctx->pc = 0x1414d0u;

    // 0x1414d0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1414d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1414d4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1414d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1414d8u;
}
