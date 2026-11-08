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

// Function: entry_001cb194
// Address: 0x1cb194 - 0x1cb198
void entry_001cb194_0x1cb194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb194_0x1cb194");
#endif

    ctx->pc = 0x1cb194u;

    // 0x1cb194: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1cb194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    ctx->pc = 0x1cb198u;
}
