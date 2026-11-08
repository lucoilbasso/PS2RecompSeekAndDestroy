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

// Function: entry_00145568
// Address: 0x145568 - 0x145574
void entry_00145568_0x145568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145568_0x145568");
#endif

    ctx->pc = 0x145568u;

    // 0x145568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14556c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x145574u;
}
