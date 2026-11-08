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

// Function: entry_001099d8
// Address: 0x1099d8 - 0x1099e4
void entry_001099d8_0x1099d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001099d8_0x1099d8");
#endif

    ctx->pc = 0x1099d8u;

    // 0x1099d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1099d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1099dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1099dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1099e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x1099e4u;
}
