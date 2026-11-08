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

// Function: entry_00195544
// Address: 0x195544 - 0x195554
void entry_00195544_0x195544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195544_0x195544");
#endif

    ctx->pc = 0x195544u;

    // 0x195544: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x195548: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19554c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x195550: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x195550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x195554u;
}
