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

// Function: entry_0010d688
// Address: 0x10d688 - 0x10d694
void entry_0010d688_0x10d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d688_0x10d688");
#endif

    ctx->pc = 0x10d688u;

    // 0x10d688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x10d694u;
}
