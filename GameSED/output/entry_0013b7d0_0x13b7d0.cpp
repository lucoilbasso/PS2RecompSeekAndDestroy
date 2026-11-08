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

// Function: entry_0013b7d0
// Address: 0x13b7d0 - 0x13b828
void entry_0013b7d0_0x13b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b7d0_0x13b7d0");
#endif

    switch (ctx->pc) {
        case 0x13b814u: goto label_13b814;
        default: break;
    }

    ctx->pc = 0x13b7d0u;

    // 0x13b7d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13b7d4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x13b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x13b7d8: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x13B7D8u;
    {
        const bool branch_taken_0x13b7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b7d8) {
            ctx->pc = 0x13B7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B7D8u;
            // 0x13b7dc: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B880u;
            return;
        }
    }
    ctx->pc = 0x13B7E0u;
    // 0x13b7e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x13b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13b7e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13B7E8u;
    {
        const bool branch_taken_0x13b7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7E8u;
        // 0x13b7ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7e8) {
            ctx->pc = 0x13B828u;
            return;
        }
    }
    ctx->pc = 0x13B7F0u;
    // 0x13b7f0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x13b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x13b7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7f8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x13b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b7fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13b7fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13b800: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b804: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x13b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x13b808: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x13b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x13b80c: 0xc04ee64  jal         func_13B990
    ctx->pc = 0x13B80Cu;
    SET_GPR_U32(ctx, 31, 0x13B814u);
    ctx->pc = 0x13B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B80Cu;
    // 0x13b810: 0x7faa0040  sq          $t2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B990u, 0x13B80Cu, 0x13B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B814u;
label_13b814:
    // 0x13b814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b818: 0x7ba80020  lq          $t0, 0x20($sp)
    ctx->pc = 0x13b818u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b81c: 0x7ba90030  lq          $t1, 0x30($sp)
    ctx->pc = 0x13b81cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13B820u;
    {
        const bool branch_taken_0x13b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B820u;
        // 0x13b824: 0x7baa0040  lq          $t2, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b820) {
            ctx->pc = 0x13B84Cu;
            return;
        }
    }
    ctx->pc = 0x13B828u;
}
