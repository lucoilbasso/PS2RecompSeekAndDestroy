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

// Function: entry_001973c8
// Address: 0x1973c8 - 0x1973f8
void entry_001973c8_0x1973c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001973c8_0x1973c8");
#endif

    ctx->pc = 0x1973c8u;

    // 0x1973c8: 0x26450260  addiu       $a1, $s2, 0x260
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x1973cc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1973ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1973d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1973d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1973d4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1973d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1973d8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1973dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1973dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1973e0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1973e4: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x1973e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x1973e8: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x1973e8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x1973ec: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x1973ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x1973f0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1973f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1973f4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1973f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1973f8u;
}
