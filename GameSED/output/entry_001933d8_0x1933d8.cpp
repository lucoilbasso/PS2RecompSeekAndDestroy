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

// Function: entry_001933d8
// Address: 0x1933d8 - 0x193400
void entry_001933d8_0x1933d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001933d8_0x1933d8");
#endif

    ctx->pc = 0x1933d8u;

    // 0x1933d8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1933d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1933dc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1933dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1933e4: 0x12c1823  subu        $v1, $t1, $t4
    ctx->pc = 0x1933e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1933e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1933ec: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x1933ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x1933f0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1933f4: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1933f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x1933f8: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x1933f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x1933fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1933fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x193400u;
}
