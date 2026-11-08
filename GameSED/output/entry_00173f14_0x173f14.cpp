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

// Function: entry_00173f14
// Address: 0x173f14 - 0x173f24
void entry_00173f14_0x173f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173f14_0x173f14");
#endif

    ctx->pc = 0x173f14u;

    // 0x173f14: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173f18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x173f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x173f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x173f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x173f24u;
}
