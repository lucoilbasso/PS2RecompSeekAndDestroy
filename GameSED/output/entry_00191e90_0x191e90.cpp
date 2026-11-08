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

// Function: entry_00191e90
// Address: 0x191e90 - 0x191ec0
void entry_00191e90_0x191e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191e90_0x191e90");
#endif

    ctx->pc = 0x191e90u;

    // 0x191e90: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x191e94: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x191e98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191e9c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x191e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x191ea0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x191ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x191ea4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x191ea8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x191ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x191eac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x191eb0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x191eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x191eb4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x191eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x191eb8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x191eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x191ebc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x191ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x191ec0u;
}
