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

// Function: entry_001a01c0
// Address: 0x1a01c0 - 0x1a01f0
void entry_001a01c0_0x1a01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a01c0_0x1a01c0");
#endif

    ctx->pc = 0x1a01c0u;

    // 0x1a01c0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1a01c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1a01c4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a01c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a01cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a01d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a01d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a01d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a01d8: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1a01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1a01dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a01dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a01e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a01e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a01e8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1a01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1a01ec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1a01f0u;
}
