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

// Function: entry_00146ef4
// Address: 0x146ef4 - 0x146f08
void entry_00146ef4_0x146ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146ef4_0x146ef4");
#endif

    ctx->pc = 0x146ef4u;

    // 0x146ef4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x146ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x146ef8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x146ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146efc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x146efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x146f00: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x146f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x146f04: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x146f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    ctx->pc = 0x146f08u;
}
