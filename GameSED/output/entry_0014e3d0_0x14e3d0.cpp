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

// Function: entry_0014e3d0
// Address: 0x14e3d0 - 0x14e3e4
void entry_0014e3d0_0x14e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e3d0_0x14e3d0");
#endif

    ctx->pc = 0x14e3d0u;

    // 0x14e3d0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x14e3d4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14e3d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14e3dc: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x14e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x14e3e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14e3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14e3e4u;
}
