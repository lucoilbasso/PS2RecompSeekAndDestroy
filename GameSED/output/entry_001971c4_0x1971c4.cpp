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

// Function: entry_001971c4
// Address: 0x1971c4 - 0x1971f0
void entry_001971c4_0x1971c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001971c4_0x1971c4");
#endif

    ctx->pc = 0x1971c4u;

    // 0x1971c4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1971c8: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1971cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1971d0: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x1971d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x1971d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1971d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1971d8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1971d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1971dc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1971dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1971e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1971e4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1971e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1971e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1971e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1971ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1971ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1971f0u;
}
