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

// Function: entry_001315c4
// Address: 0x1315c4 - 0x1315d0
void entry_001315c4_0x1315c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001315c4_0x1315c4");
#endif

    ctx->pc = 0x1315c4u;

    // 0x1315c4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1315c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1315c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1315cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1315ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1315d0u;
}
