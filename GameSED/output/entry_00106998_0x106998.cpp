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

// Function: entry_00106998
// Address: 0x106998 - 0x1069b8
void entry_00106998_0x106998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106998_0x106998");
#endif

    ctx->pc = 0x106998u;

    // 0x106998: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10699c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1069a0: 0x24500610  addiu       $s0, $v0, 0x610
    ctx->pc = 0x1069a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x1069a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1069a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1069a8: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1069a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1069ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1069acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1069b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1069b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069b4: 0x0  nop
    ctx->pc = 0x1069b4u;
    // NOP
    ctx->pc = 0x1069b8u;
}
