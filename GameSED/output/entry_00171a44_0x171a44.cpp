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

// Function: entry_00171a44
// Address: 0x171a44 - 0x171a58
void entry_00171a44_0x171a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a44_0x171a44");
#endif

    ctx->pc = 0x171a44u;

    // 0x171a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171a48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171a4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x171a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171a50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x171a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171a54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x171a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    ctx->pc = 0x171a58u;
}
