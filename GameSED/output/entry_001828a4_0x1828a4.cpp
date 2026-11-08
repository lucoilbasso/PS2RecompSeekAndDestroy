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

// Function: entry_001828a4
// Address: 0x1828a4 - 0x1828a8
void entry_001828a4_0x1828a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001828a4_0x1828a4");
#endif

    ctx->pc = 0x1828a4u;

    // 0x1828a4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1828a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1828a8u;
}
