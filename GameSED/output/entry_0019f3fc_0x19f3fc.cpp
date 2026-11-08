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

// Function: entry_0019f3fc
// Address: 0x19f3fc - 0x19f414
void entry_0019f3fc_0x19f3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3fc_0x19f3fc");
#endif

    ctx->pc = 0x19f3fcu;

    // 0x19f3fc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x19f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19f400: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x19f400u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
    // 0x19f404: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f408: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19f408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19f40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f410: 0x8d840010  lw          $a0, 0x10($t4)
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    ctx->pc = 0x19f414u;
}
