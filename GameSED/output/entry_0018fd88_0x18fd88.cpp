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

// Function: entry_0018fd88
// Address: 0x18fd88 - 0x18fdb8
void entry_0018fd88_0x18fd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fd88_0x18fd88");
#endif

    ctx->pc = 0x18fd88u;

    // 0x18fd88: 0x25050030  addiu       $a1, $t0, 0x30
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x18fd8c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x18fd90: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18fd94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18fd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18fd98: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x18fd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x18fd9c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x18fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18fda0: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18fda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18fda4: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18fda8: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x18fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x18fdac: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x18fdacu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x18fdb0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x18fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x18fdb4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18fdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x18fdb8u;
}
