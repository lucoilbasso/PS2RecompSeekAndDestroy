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

// Function: entry_001469b4
// Address: 0x1469b4 - 0x1469c0
void entry_001469b4_0x1469b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001469b4_0x1469b4");
#endif

    ctx->pc = 0x1469b4u;

    // 0x1469b4: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1469b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x1469b8: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1469b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x1469bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1469bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1469c0u;
}
