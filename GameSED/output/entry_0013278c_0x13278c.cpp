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

// Function: entry_0013278c
// Address: 0x13278c - 0x132798
void entry_0013278c_0x13278c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013278c_0x13278c");
#endif

    ctx->pc = 0x13278cu;

    // 0x13278c: 0xfc820170  sd          $v0, 0x170($a0)
    ctx->pc = 0x13278cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 2));
    // 0x132790: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x132790u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132794: 0xfc830178  sd          $v1, 0x178($a0)
    ctx->pc = 0x132794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 376), GPR_U64(ctx, 3));
    ctx->pc = 0x132798u;
}
