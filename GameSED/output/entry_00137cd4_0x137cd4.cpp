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

// Function: entry_00137cd4
// Address: 0x137cd4 - 0x137ce8
void entry_00137cd4_0x137cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137cd4_0x137cd4");
#endif

    ctx->pc = 0x137cd4u;

    // 0x137cd4: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x137cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x137cd8: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x137cdc: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x137cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x137ce0: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x137ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x137ce4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x137ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x137ce8u;
}
