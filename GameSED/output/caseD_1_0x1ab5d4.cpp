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

// Function: caseD_1
// Address: 0x1ab5d4 - 0x1ab624
void caseD_1_0x1ab5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ab5d4");
#endif

    ctx->pc = 0x1ab5d4u;

    // 0x1ab5d4: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x1ab5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ab5d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab5dc: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x1ab5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x1ab5e0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ab5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ab5e4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ab5e8: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1ab5e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1ab5ec: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1ab5ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1ab5f0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x1ab5f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ab5f4: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1AB5F4u;
    {
        const bool branch_taken_0x1ab5f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB5F4u;
        // 0x1ab5f8: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5f4) {
            ctx->pc = 0x1AB6B4u;
            return;
        }
    }
    ctx->pc = 0x1AB5FCu;
    // 0x1ab5fc: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x1ab5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1ab600: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x1ab600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
    // 0x1ab604: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1ab604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ab608: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ab608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ab60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab610: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ab610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ab614: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1ab614u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ab618: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1ab618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ab61c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AB61Cu;
    {
        const bool branch_taken_0x1ab61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB61Cu;
        // 0x1ab620: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab61c) {
            ctx->pc = 0x1AB6DCu;
            return;
        }
    }
    ctx->pc = 0x1AB624u;
}
