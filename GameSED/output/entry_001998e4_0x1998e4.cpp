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

// Function: entry_001998e4
// Address: 0x1998e4 - 0x1998e8
void entry_001998e4_0x1998e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001998e4_0x1998e4");
#endif

    ctx->pc = 0x1998e4u;

    // 0x1998e4: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1998e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x1998e8u;
}
