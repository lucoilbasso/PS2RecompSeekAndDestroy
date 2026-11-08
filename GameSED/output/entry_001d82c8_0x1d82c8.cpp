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

// Function: entry_001d82c8
// Address: 0x1d82c8 - 0x1d82cc
void entry_001d82c8_0x1d82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d82c8_0x1d82c8");
#endif

    ctx->pc = 0x1d82c8u;

    // 0x1d82c8: 0xacc500c0  sw          $a1, 0xC0($a2)
    ctx->pc = 0x1d82c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 5));
    ctx->pc = 0x1d82ccu;
}
