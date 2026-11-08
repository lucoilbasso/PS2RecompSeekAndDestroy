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

// Function: entry_001a1a88
// Address: 0x1a1a88 - 0x1a1ac0
void entry_001a1a88_0x1a1a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a88_0x1a1a88");
#endif

    ctx->pc = 0x1a1a88u;

    // 0x1a1a88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a1a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a1a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a1a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a1a94: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a1a98: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a1a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a1a9c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a1aa0: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x1a1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x1a1aa4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1a1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1a1aa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1aac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a1ab0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1ab4: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1a1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x1a1ab8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1a1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1a1abc: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1a1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    ctx->pc = 0x1a1ac0u;
}
