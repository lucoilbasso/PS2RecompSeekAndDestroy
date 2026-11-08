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

// Function: entry_001724d8
// Address: 0x1724d8 - 0x1724f0
void entry_001724d8_0x1724d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001724d8_0x1724d8");
#endif

    ctx->pc = 0x1724d8u;

    // 0x1724d8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1724d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1724dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1724dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1724e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1724e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1724e4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1724e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1724e8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1724ec: 0x24510170  addiu       $s1, $v0, 0x170
    ctx->pc = 0x1724ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->pc = 0x1724f0u;
}
