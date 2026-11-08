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

// Function: entry_0018f8ec
// Address: 0x18f8ec - 0x18f904
void entry_0018f8ec_0x18f8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f8ec_0x18f8ec");
#endif

    ctx->pc = 0x18f8ecu;

    // 0x18f8ec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x18f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x18f8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18f8f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18f8f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18f8fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f900: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x18f900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x18f904u;
}
