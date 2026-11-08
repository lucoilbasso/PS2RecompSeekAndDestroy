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

// Function: entry_00195b98
// Address: 0x195b98 - 0x195bc8
void entry_00195b98_0x195b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195b98_0x195b98");
#endif

    ctx->pc = 0x195b98u;

    // 0x195b98: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x195b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x195b9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x195ba0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x195ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x195ba4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x195ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x195ba8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x195ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x195bac: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x195bb0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x195bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x195bb4: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x195bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x195bb8: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x195bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x195bbc: 0x26090270  addiu       $t1, $s0, 0x270
    ctx->pc = 0x195bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x195bc0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x195bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x195bc4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x195bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x195bc8u;
}
