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

// Function: entry_0013aea0
// Address: 0x13aea0 - 0x13aea8
void entry_0013aea0_0x13aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aea0_0x13aea0");
#endif

    ctx->pc = 0x13aea0u;

    // 0x13aea0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13aea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13aea4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13aea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13aea8u;
}
