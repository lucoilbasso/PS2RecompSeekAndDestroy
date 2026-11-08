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

// Function: entry_001990c4
// Address: 0x1990c4 - 0x1990e0
void entry_001990c4_0x1990c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990c4_0x1990c4");
#endif

    ctx->pc = 0x1990c4u;

    // 0x1990c4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1990c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1990c8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1990c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1990cc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1990ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1990d0: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x1990d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x1990d4: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x1990d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1990d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1990dc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1990dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1990e0u;
}
