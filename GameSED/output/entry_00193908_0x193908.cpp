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

// Function: entry_00193908
// Address: 0x193908 - 0x193914
void entry_00193908_0x193908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193908_0x193908");
#endif

    ctx->pc = 0x193908u;

    // 0x193908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19390c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19390cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x193914u;
}
