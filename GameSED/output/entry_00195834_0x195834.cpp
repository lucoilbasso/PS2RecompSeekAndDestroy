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

// Function: entry_00195834
// Address: 0x195834 - 0x195880
void entry_00195834_0x195834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195834_0x195834");
#endif

    ctx->pc = 0x195834u;

    // 0x195834: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x195834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195838: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19583c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x19583cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x195840: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x195840u;
    {
        const bool branch_taken_0x195840 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x195844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195840u;
        // 0x195844: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195840) {
            ctx->pc = 0x195880u;
            return;
        }
    }
    ctx->pc = 0x195848u;
    // 0x195848: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x195848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19584c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195850: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195854: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195858: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x195858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19585c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x195860: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x195864: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x195868: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19586c: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x19586cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x195870: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x195874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195874u;
    {
        const bool branch_taken_0x195874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195874u;
        // 0x195878: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195874) {
            ctx->pc = 0x195888u;
            return;
        }
    }
    ctx->pc = 0x19587Cu;
    // 0x19587c: 0x0  nop
    ctx->pc = 0x19587cu;
    // NOP
    ctx->pc = 0x195880u;
}
