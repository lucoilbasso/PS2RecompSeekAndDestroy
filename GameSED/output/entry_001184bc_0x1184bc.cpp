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

// Function: entry_001184bc
// Address: 0x1184bc - 0x1184c0
void entry_001184bc_0x1184bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184bc_0x1184bc");
#endif

    ctx->pc = 0x1184bcu;

    // 0x1184bc: 0xae000c48  sw          $zero, 0xC48($s0)
    ctx->pc = 0x1184bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3144), GPR_U32(ctx, 0));
    ctx->pc = 0x1184c0u;
}
