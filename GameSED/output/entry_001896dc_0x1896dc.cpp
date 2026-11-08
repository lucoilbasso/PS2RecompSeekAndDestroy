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

// Function: entry_001896dc
// Address: 0x1896dc - 0x1896e0
void entry_001896dc_0x1896dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001896dc_0x1896dc");
#endif

    ctx->pc = 0x1896dcu;

    // 0x1896dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1896dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x1896e0u;
}
