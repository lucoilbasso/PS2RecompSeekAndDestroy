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

// Function: entry_00141c74
// Address: 0x141c74 - 0x141c7c
void entry_00141c74_0x141c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c74_0x141c74");
#endif

    ctx->pc = 0x141c74u;

    // 0x141c74: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x141c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x141c78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x141c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x141c7cu;
}
