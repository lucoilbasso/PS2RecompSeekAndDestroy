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

// Function: entry_00141ed4
// Address: 0x141ed4 - 0x141edc
void entry_00141ed4_0x141ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ed4_0x141ed4");
#endif

    ctx->pc = 0x141ed4u;

    // 0x141ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141ed8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x141ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141edcu;
}
