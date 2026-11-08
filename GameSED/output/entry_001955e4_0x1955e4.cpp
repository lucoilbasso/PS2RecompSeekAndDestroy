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

// Function: entry_001955e4
// Address: 0x1955e4 - 0x1955ec
void entry_001955e4_0x1955e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955e4_0x1955e4");
#endif

    ctx->pc = 0x1955e4u;

    // 0x1955e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1955e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1955e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x1955ecu;
}
