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

// Function: entry_00177890
// Address: 0x177890 - 0x1778a4
void entry_00177890_0x177890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177890_0x177890");
#endif

    ctx->pc = 0x177890u;

    // 0x177890: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x177894: 0xa1020010  sb          $v0, 0x10($t0)
    ctx->pc = 0x177894u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x177898: 0xa1020013  sb          $v0, 0x13($t0)
    ctx->pc = 0x177898u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x17789c: 0xa1020012  sb          $v0, 0x12($t0)
    ctx->pc = 0x17789cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1778a0: 0xa1020011  sb          $v0, 0x11($t0)
    ctx->pc = 0x1778a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 17), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1778a4u;
}
