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

// Function: entry_001988a8
// Address: 0x1988a8 - 0x1988d8
void entry_001988a8_0x1988a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001988a8_0x1988a8");
#endif

    ctx->pc = 0x1988a8u;

    // 0x1988a8: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x1988a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1988ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1988b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1988b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1988b4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1988b8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1988bc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1988bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1988c0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1988c4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1988c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1988c8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x1988c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x1988cc: 0x26070270  addiu       $a3, $s0, 0x270
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x1988d0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1988d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1988d4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1988d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1988d8u;
}
