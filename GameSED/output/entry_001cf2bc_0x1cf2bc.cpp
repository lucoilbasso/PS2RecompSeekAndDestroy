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

// Function: entry_001cf2bc
// Address: 0x1cf2bc - 0x1cf2c0
void entry_001cf2bc_0x1cf2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf2bc_0x1cf2bc");
#endif

    ctx->pc = 0x1cf2bcu;

    // 0x1cf2bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf2c0u;
}
