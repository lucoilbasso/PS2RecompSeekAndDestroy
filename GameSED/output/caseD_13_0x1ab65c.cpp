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

// Function: caseD_13
// Address: 0x1ab65c - 0x1ab690
void caseD_13_0x1ab65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1ab65c");
#endif

    ctx->pc = 0x1ab65cu;

    // 0x1ab65c: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x1ab65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1ab660: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab664: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x1ab664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x1ab668: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1ab668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1ab66c: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1ab66cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1ab670: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x1ab670u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ab674: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1AB674u;
    {
        const bool branch_taken_0x1ab674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB674u;
        // 0x1ab678: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab674) {
            ctx->pc = 0x1AB6B4u;
            return;
        }
    }
    ctx->pc = 0x1AB67Cu;
    // 0x1ab67c: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1ab67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1ab680: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1ab680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ab684: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1ab684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab688: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB688u;
    {
        const bool branch_taken_0x1ab688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB688u;
        // 0x1ab68c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab688) {
            ctx->pc = 0x1AB6D0u;
            return;
        }
    }
    ctx->pc = 0x1AB690u;
}
