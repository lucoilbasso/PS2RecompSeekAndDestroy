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

// Function: entry_001098d0
// Address: 0x1098d0 - 0x1098d8
void entry_001098d0_0x1098d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098d0_0x1098d0");
#endif

    ctx->pc = 0x1098d0u;

    // 0x1098d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1098d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1098d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1098d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1098d8u;
}
