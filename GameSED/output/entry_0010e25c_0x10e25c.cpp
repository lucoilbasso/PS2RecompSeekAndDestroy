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

// Function: entry_0010e25c
// Address: 0x10e25c - 0x10e268
void entry_0010e25c_0x10e25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e25c_0x10e25c");
#endif

    ctx->pc = 0x10e25cu;

    // 0x10e25c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10e260: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10e260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e264: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x10e268u;
}
