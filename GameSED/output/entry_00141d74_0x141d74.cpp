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

// Function: entry_00141d74
// Address: 0x141d74 - 0x141d7c
void entry_00141d74_0x141d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d74_0x141d74");
#endif

    ctx->pc = 0x141d74u;

    // 0x141d74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x141d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141d78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x141d7cu;
}
