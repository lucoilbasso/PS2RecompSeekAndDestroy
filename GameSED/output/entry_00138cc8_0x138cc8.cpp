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

// Function: entry_00138cc8
// Address: 0x138cc8 - 0x138cf4
void entry_00138cc8_0x138cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cc8_0x138cc8");
#endif

    ctx->pc = 0x138cc8u;

    // 0x138cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138ccc: 0x2408fffd  addiu       $t0, $zero, -0x3
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x138cd0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x138cd4: 0x3c06ff7f  lui         $a2, 0xFF7F
    ctx->pc = 0x138cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65407 << 16));
    // 0x138cd8: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x138cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x138cdc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x138cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x138ce0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x138ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x138ce4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x138ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x138ce8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x138ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cec: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x138cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x138cf0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x138cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    ctx->pc = 0x138cf4u;
}
