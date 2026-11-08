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

// Function: entry_00198c7c
// Address: 0x198c7c - 0x198c8c
void entry_00198c7c_0x198c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c7c_0x198c7c");
#endif

    ctx->pc = 0x198c7cu;

    // 0x198c7c: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x198c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x198c80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x198c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x198c84: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x198c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x198c88: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x198c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x198c8cu;
}
