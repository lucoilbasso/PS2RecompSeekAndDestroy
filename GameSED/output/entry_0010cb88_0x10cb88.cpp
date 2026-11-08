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

// Function: entry_0010cb88
// Address: 0x10cb88 - 0x10cb94
void entry_0010cb88_0x10cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb88_0x10cb88");
#endif

    ctx->pc = 0x10cb88u;

    // 0x10cb88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10cb8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10cb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x10cb94u;
}
