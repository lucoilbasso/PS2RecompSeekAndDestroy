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

// Function: entry_00150350
// Address: 0x150350 - 0x150368
void entry_00150350_0x150350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150350_0x150350");
#endif

    ctx->pc = 0x150350u;

    // 0x150350: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150354: 0x264505b0  addiu       $a1, $s2, 0x5B0
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x150358: 0x26440290  addiu       $a0, $s2, 0x290
    ctx->pc = 0x150358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
    // 0x15035c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15035cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x150360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150364: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x150364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->pc = 0x150368u;
}
