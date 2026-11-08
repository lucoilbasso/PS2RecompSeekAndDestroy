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

// Function: entry_0016ee00
// Address: 0x16ee00 - 0x16ee0c
void entry_0016ee00_0x16ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee00_0x16ee00");
#endif

    ctx->pc = 0x16ee00u;

    // 0x16ee00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ee04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x16ee0cu;
}
