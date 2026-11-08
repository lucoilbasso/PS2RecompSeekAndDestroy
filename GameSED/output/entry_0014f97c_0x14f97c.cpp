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

// Function: entry_0014f97c
// Address: 0x14f97c - 0x14f98c
void entry_0014f97c_0x14f97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f97c_0x14f97c");
#endif

    ctx->pc = 0x14f97cu;

    // 0x14f97c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14f980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14f984: 0xae620184  sw          $v0, 0x184($s3)
    ctx->pc = 0x14f984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 2));
    // 0x14f988: 0x26620800  addiu       $v0, $s3, 0x800
    ctx->pc = 0x14f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
    ctx->pc = 0x14f98cu;
}
