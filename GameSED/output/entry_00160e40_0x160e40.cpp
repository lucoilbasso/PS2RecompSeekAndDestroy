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

// Function: entry_00160e40
// Address: 0x160e40 - 0x160e5c
void entry_00160e40_0x160e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e40_0x160e40");
#endif

    ctx->pc = 0x160e40u;

    // 0x160e40: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x160e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x160e44: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x160e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x160e48: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x160e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x160e4c: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x160e4cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x160e50: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x160e54: 0x2a122aaa  slti        $s2, $s0, 0x2AAA
    ctx->pc = 0x160e54u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x160e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160e5cu;
}
