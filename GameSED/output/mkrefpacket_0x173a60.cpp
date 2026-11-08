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

// Function: mkrefpacket
// Address: 0x173a60 - 0x173ab4
void mkrefpacket_0x173a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mkrefpacket_0x173a60");
#endif

    ctx->pc = 0x173a60u;

    // 0x173a60: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x173a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a68: 0x103001b  divu        $zero, $t0, $v1
    ctx->pc = 0x173a68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x173a6c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x173a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x173a70: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x173a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x173a74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173a78: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x173a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x173a7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a80: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x173a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173a88: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x173a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x173a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x173a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173a90: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173A90u;
    {
        const bool branch_taken_0x173a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a90) {
            ctx->pc = 0x173A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173A90u;
            // 0x173a94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A98u;
            goto label_173a98;
        }
    }
    ctx->pc = 0x173A98u;
label_173a98:
    // 0x173a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a9c: 0x34c84000  ori         $t0, $a2, 0x4000
    ctx->pc = 0x173a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x173aa0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x173aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x173aa4: 0x5012  mflo        $t2
    ctx->pc = 0x173aa4u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x173aa8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x173aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173aac: 0x806bb06  j           func_1AEC18
    ctx->pc = 0x173AACu;
    ctx->pc = 0x173AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AACu;
    // 0x173ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    sceVif1PkRef_0x1aec18(rdram, ctx, runtime); return;
    ctx->pc = 0x173AB4u;
}
