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

// Function: entry_001cbcf4
// Address: 0x1cbcf4 - 0x1cbcfc
void entry_001cbcf4_0x1cbcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbcf4_0x1cbcf4");
#endif

    ctx->pc = 0x1cbcf4u;

    // 0x1cbcf4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cbcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1cbcf8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1cbcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x1cbcfcu;
}
