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

// Function: entry_001c0f94
// Address: 0x1c0f94 - 0x1c0fe8
void entry_001c0f94_0x1c0f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0f94_0x1c0f94");
#endif

    ctx->pc = 0x1c0f94u;

    // 0x1c0f94: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1c0f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1c0f98: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1c0f9c: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1c0fa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0fa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c0fa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0fac: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1c0facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c0fb0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1c0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c0fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fbc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1c0fc0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x1c0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x1c0fc4: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x1c0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
    // 0x1c0fc8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c0fcc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c0fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c0fd0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1c0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1c0fd4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c0fd8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c0fdc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1c0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1c0fe0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1c0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1c0fe4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c0fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1c0fe8u;
}
