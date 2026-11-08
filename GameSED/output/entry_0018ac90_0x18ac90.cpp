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

// Function: entry_0018ac90
// Address: 0x18ac90 - 0x18acc0
void entry_0018ac90_0x18ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac90_0x18ac90");
#endif

    ctx->pc = 0x18ac90u;

    // 0x18ac90: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x18ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18ac94: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x18ac94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x18ac98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x18ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18ac9c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18ac9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18aca0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x18aca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x18aca4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18aca8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x18acac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18acb0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x18acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x18acb4: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x18acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x18acb8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x18acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x18acbc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x18acc0u;
}
