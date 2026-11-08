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

// Function: entry_00157288
// Address: 0x157288 - 0x157294
void entry_00157288_0x157288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157288_0x157288");
#endif

    ctx->pc = 0x157288u;

    // 0x157288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15728c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x157294u;
}
