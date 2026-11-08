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

// Function: entry_0019ec2c
// Address: 0x19ec2c - 0x19ec30
void entry_0019ec2c_0x19ec2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec2c_0x19ec2c");
#endif

    ctx->pc = 0x19ec2cu;

    // 0x19ec2c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x19ec2cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x19ec30u;
}
