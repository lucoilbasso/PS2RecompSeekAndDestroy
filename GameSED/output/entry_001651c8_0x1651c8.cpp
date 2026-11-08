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

// Function: entry_001651c8
// Address: 0x1651c8 - 0x1651cc
void entry_001651c8_0x1651c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001651c8_0x1651c8");
#endif

    ctx->pc = 0x1651c8u;

    // 0x1651c8: 0xae22125c  sw          $v0, 0x125C($s1)
    ctx->pc = 0x1651c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4700), GPR_U32(ctx, 2));
    ctx->pc = 0x1651ccu;
}
