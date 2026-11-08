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

// Function: caseD_0
// Address: 0x1ab59c - 0x1ab5d4
void caseD_0_0x1ab59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ab59c");
#endif

    ctx->pc = 0x1ab59cu;

    // 0x1ab59c: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x1ab59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ab5a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab5a4: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x1ab5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x1ab5a8: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ab5ac: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x1ab5acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1ab5b0: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1ab5b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1ab5b4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1ab5b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ab5b8: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x1AB5B8u;
    {
        const bool branch_taken_0x1ab5b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5B8u;
        // 0x1ab5bc: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5b8) {
            ctx->pc = 0x1AB6B4u;
            return;
        }
    }
    ctx->pc = 0x1AB5C0u;
    // 0x1ab5c0: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x1ab5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1ab5c4: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x1ab5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
    // 0x1ab5c8: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1ab5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab5cc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1AB5CCu;
    {
        const bool branch_taken_0x1ab5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5CCu;
        // 0x1ab5d0: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5cc) {
            ctx->pc = 0x1AB6D0u;
            return;
        }
    }
    ctx->pc = 0x1AB5D4u;
}
