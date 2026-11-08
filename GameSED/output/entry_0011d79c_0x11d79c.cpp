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

// Function: entry_0011d79c
// Address: 0x11d79c - 0x11d7b0
void entry_0011d79c_0x11d79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d79c_0x11d79c");
#endif

    ctx->pc = 0x11d79cu;

    // 0x11d79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d7a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d7a8: 0x48800  sll         $s1, $a0, 0
    ctx->pc = 0x11d7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x11d7ac: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x11d7acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x11d7b0u;
}
