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

// Function: entry_00141230
// Address: 0x141230 - 0x141238
void entry_00141230_0x141230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141230_0x141230");
#endif

    ctx->pc = 0x141230u;

    // 0x141230: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141234: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x141234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x141238u;
}
