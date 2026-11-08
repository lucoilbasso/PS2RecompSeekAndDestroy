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

// Function: entry_001254c4
// Address: 0x1254c4 - 0x1254e0
void entry_001254c4_0x1254c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001254c4_0x1254c4");
#endif

    ctx->pc = 0x1254c4u;

    // 0x1254c4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1254c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1254c8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1254c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1254cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1254ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d0: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x1254d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1254d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1254d8: 0x43282b  sltu        $a1, $v0, $v1
    ctx->pc = 0x1254d8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1254dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1254dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1254e0u;
}
