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

// Function: entry_001d07e4
// Address: 0x1d07e4 - 0x1d07e8
void entry_001d07e4_0x1d07e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d07e4_0x1d07e4");
#endif

    ctx->pc = 0x1d07e4u;

    // 0x1d07e4: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1d07e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    ctx->pc = 0x1d07e8u;
}
