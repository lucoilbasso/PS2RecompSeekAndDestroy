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

// Function: entry_00176180
// Address: 0x176180 - 0x17618c
void entry_00176180_0x176180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176180_0x176180");
#endif

    ctx->pc = 0x176180u;

    // 0x176180: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x176180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x176184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176188: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x176188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->pc = 0x17618cu;
}
