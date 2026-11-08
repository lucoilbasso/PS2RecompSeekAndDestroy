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

// Function: entry_0016ae98
// Address: 0x16ae98 - 0x16aed0
void entry_0016ae98_0x16ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ae98_0x16ae98");
#endif

    switch (ctx->pc) {
        case 0x16aec8u: goto label_16aec8;
        default: break;
    }

    ctx->pc = 0x16ae98u;

    // 0x16ae98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16ae98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x16ae9c: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x16aea0: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x16aea0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16aea4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16aea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aeac: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16aeb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16AEB4u;
    {
        const bool branch_taken_0x16aeb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEB4u;
        // 0x16aeb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aeb4) {
            ctx->pc = 0x16AED0u;
            return;
        }
    }
    ctx->pc = 0x16AEBCu;
    // 0x16aebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16aebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aec0: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x16AEC0u;
    SET_GPR_U32(ctx, 31, 0x16AEC8u);
    ctx->pc = 0x16AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEC0u;
    // 0x16aec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16AEC0u, 0x16AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEC8u;
label_16aec8:
    // 0x16aec8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16AEC8u;
    {
        const bool branch_taken_0x16aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEC8u;
        // 0x16aecc: 0x8e4211e0  lw          $v0, 0x11E0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aec8) {
            ctx->pc = 0x16AEF8u;
            return;
        }
    }
    ctx->pc = 0x16AED0u;
}
