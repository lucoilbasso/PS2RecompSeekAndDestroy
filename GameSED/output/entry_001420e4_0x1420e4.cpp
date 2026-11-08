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

// Function: entry_001420e4
// Address: 0x1420e4 - 0x1420ec
void entry_001420e4_0x1420e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420e4_0x1420e4");
#endif

    ctx->pc = 0x1420e4u;

    // 0x1420e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1420e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1420e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1420e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1420ecu;
}
