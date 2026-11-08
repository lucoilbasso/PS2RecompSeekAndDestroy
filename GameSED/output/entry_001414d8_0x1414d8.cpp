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

// Function: entry_001414d8
// Address: 0x1414d8 - 0x1414e0
void entry_001414d8_0x1414d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001414d8_0x1414d8");
#endif

    ctx->pc = 0x1414d8u;

    // 0x1414d8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1414d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1414dc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1414dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x1414e0u;
}
