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

// Function: entry_0012c6e8
// Address: 0x12c6e8 - 0x12c6fc
void entry_0012c6e8_0x12c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6e8_0x12c6e8");
#endif

    ctx->pc = 0x12c6e8u;

    // 0x12c6e8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12c6ec: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x12c6ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12c6f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12c6f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12c6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12c6f8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x12c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x12c6fcu;
}
