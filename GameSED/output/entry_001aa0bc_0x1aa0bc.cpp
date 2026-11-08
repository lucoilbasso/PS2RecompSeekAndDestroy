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

// Function: entry_001aa0bc
// Address: 0x1aa0bc - 0x1aa0c0
void entry_001aa0bc_0x1aa0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0bc_0x1aa0bc");
#endif

    ctx->pc = 0x1aa0bcu;

    // 0x1aa0bc: 0xac8600e4  sw          $a2, 0xE4($a0)
    ctx->pc = 0x1aa0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
    ctx->pc = 0x1aa0c0u;
}
