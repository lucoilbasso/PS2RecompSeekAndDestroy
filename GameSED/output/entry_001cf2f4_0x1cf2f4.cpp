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

// Function: entry_001cf2f4
// Address: 0x1cf2f4 - 0x1cf2f8
void entry_001cf2f4_0x1cf2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf2f4_0x1cf2f4");
#endif

    ctx->pc = 0x1cf2f4u;

    // 0x1cf2f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1cf2f8u;
}
