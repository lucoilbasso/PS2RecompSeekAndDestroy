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

// Function: entry_00146cf8
// Address: 0x146cf8 - 0x146d04
void entry_00146cf8_0x146cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146cf8_0x146cf8");
#endif

    ctx->pc = 0x146cf8u;

    // 0x146cf8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x146cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cfc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x146cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x146d00: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x146d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->pc = 0x146d04u;
}
