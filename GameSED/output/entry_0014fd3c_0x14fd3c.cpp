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

// Function: entry_0014fd3c
// Address: 0x14fd3c - 0x14fd40
void entry_0014fd3c_0x14fd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fd3c_0x14fd3c");
#endif

    ctx->pc = 0x14fd3cu;

    // 0x14fd3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14fd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14fd40u;
}
