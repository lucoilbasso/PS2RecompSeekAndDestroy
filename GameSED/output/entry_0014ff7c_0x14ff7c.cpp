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

// Function: entry_0014ff7c
// Address: 0x14ff7c - 0x14ff84
void entry_0014ff7c_0x14ff7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ff7c_0x14ff7c");
#endif

    ctx->pc = 0x14ff7cu;

    // 0x14ff7c: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x14ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
    // 0x14ff80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ff80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14ff84u;
}
