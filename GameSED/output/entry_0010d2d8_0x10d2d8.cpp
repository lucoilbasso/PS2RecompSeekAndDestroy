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

// Function: entry_0010d2d8
// Address: 0x10d2d8 - 0x10d2e8
void entry_0010d2d8_0x10d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d2d8_0x10d2d8");
#endif

    ctx->pc = 0x10d2d8u;

    // 0x10d2d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10d2dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x10d2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10d2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d2e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x10d2e8u;
}
