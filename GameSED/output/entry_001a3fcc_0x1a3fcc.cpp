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

// Function: entry_001a3fcc
// Address: 0x1a3fcc - 0x1a3fd4
void entry_001a3fcc_0x1a3fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3fcc_0x1a3fcc");
#endif

    ctx->pc = 0x1a3fccu;

    // 0x1a3fcc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a3fd0: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    ctx->pc = 0x1a3fd4u;
}
