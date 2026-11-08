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

// Function: entry_00190700
// Address: 0x190700 - 0x190730
void entry_00190700_0x190700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190700_0x190700");
#endif

    ctx->pc = 0x190700u;

    // 0x190700: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190704: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190708: 0x26270240  addiu       $a3, $s1, 0x240
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x19070c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190714: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x190714u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x190718: 0x1810  mfhi        $v1
    ctx->pc = 0x190718u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19071c: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x190720: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x190720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x190724: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x190728: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19072c: 0x0  nop
    ctx->pc = 0x19072cu;
    // NOP
    ctx->pc = 0x190730u;
}
