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

// Function: caseD_2
// Address: 0x1ab624 - 0x1ab65c
void caseD_2_0x1ab624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ab624");
#endif

    ctx->pc = 0x1ab624u;

    // 0x1ab624: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x1ab624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab628: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1ab628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab62c: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x1ab62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x1ab630: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ab634: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1ab634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1ab638: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1ab638u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1ab63c: 0x459024  and         $s2, $v0, $a1
    ctx->pc = 0x1ab63cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ab640: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AB640u;
    {
        const bool branch_taken_0x1ab640 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB640u;
        // 0x1ab644: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab640) {
            ctx->pc = 0x1AB6B4u;
            return;
        }
    }
    ctx->pc = 0x1AB648u;
    // 0x1ab648: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1ab64c: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ab650: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1ab650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab654: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AB654u;
    {
        const bool branch_taken_0x1ab654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB654u;
        // 0x1ab658: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab654) {
            ctx->pc = 0x1AB6D0u;
            return;
        }
    }
    ctx->pc = 0x1AB65Cu;
}
