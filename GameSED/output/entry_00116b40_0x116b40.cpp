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

// Function: entry_00116b40
// Address: 0x116b40 - 0x116b60
void entry_00116b40_0x116b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b40_0x116b40");
#endif

    ctx->pc = 0x116b40u;

    // 0x116b40: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116b44: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x116b48: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x116b4c: 0x2474fcb0  addiu       $s4, $v1, -0x350
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x116b50: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x116b54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x116b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116b58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EC198u));
    // 0x116b5c: 0x0  nop
    ctx->pc = 0x116b5cu;
    // NOP
    ctx->pc = 0x116b60u;
}
