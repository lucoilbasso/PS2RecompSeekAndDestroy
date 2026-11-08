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

// Function: entry_001784bc
// Address: 0x1784bc - 0x1784c0
void entry_001784bc_0x1784bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001784bc_0x1784bc");
#endif

    ctx->pc = 0x1784bcu;

    // 0x1784bc: 0xac401040  sw          $zero, 0x1040($v0)
    ctx->pc = 0x1784bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4160), GPR_U32(ctx, 0));
    ctx->pc = 0x1784c0u;
}
