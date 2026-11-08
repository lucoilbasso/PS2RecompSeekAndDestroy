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

// Function: entry_00194c58
// Address: 0x194c58 - 0x194c88
void entry_00194c58_0x194c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194c58_0x194c58");
#endif

    ctx->pc = 0x194c58u;

    // 0x194c58: 0x26450260  addiu       $a1, $s2, 0x260
    ctx->pc = 0x194c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x194c5c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x194c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x194c60: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x194c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x194c64: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x194c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x194c68: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x194c6c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x194c70: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x194c74: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x194c74u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x194c78: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x194c78u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x194c7c: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x194c80: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x194c80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x194c84: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x194c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x194c88u;
}
