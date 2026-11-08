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

// Function: entry_0010d998
// Address: 0x10d998 - 0x10d9a4
void entry_0010d998_0x10d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d998_0x10d998");
#endif

    ctx->pc = 0x10d998u;

    // 0x10d998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d99c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x10d9a4u;
}
