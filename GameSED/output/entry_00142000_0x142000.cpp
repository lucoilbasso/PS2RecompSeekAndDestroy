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

// Function: entry_00142000
// Address: 0x142000 - 0x142004
void entry_00142000_0x142000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142000_0x142000");
#endif

    ctx->pc = 0x142000u;

    // 0x142000: 0xacb00130  sw          $s0, 0x130($a1)
    ctx->pc = 0x142000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 16));
    ctx->pc = 0x142004u;
}
