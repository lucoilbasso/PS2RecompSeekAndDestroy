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

// Function: entry_0015a2f8
// Address: 0x15a2f8 - 0x15a2fc
void entry_0015a2f8_0x15a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a2f8_0x15a2f8");
#endif

    ctx->pc = 0x15a2f8u;

    // 0x15a2f8: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x15a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x15a2fcu;
}
