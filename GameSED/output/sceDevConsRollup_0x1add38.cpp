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

// Function: sceDevConsRollup
// Address: 0x1add38 - 0x1adde4
void sceDevConsRollup_0x1add38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsRollup_0x1add38");
#endif

    switch (ctx->pc) {
        case 0x1add88u: goto label_1add88;
        default: break;
    }

    ctx->pc = 0x1add38u;

    // 0x1add38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1add38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1add3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1add3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1add40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1add40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1add44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1add48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1add4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1add50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1add54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1add54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1add58: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1add5c: 0x248102b  sltu        $v0, $s2, $t0
    ctx->pc = 0x1add5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1add60: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ADD60u;
    {
        const bool branch_taken_0x1add60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD60u;
        // 0x1add64: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add60) {
            ctx->pc = 0x1ADDB8u;
            goto label_1addb8;
        }
    }
    ctx->pc = 0x1ADD68u;
    // 0x1add68: 0x1128023  subu        $s0, $t0, $s2
    ctx->pc = 0x1add68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1add6c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1add6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add70: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1add70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add74: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1add74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1add7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add80: 0xc06b6f4  jal         func_1ADBD0
    ctx->pc = 0x1ADD80u;
    SET_GPR_U32(ctx, 31, 0x1ADD88u);
    ctx->pc = 0x1ADD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD80u;
    // 0x1add84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADBD0u, 0x1ADD80u, 0x1ADD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD88u;
label_1add88:
    // 0x1add88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add90: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1add90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add94: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1add94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1add98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adda0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1adda0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adda4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adda8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1addac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1addacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1addb0: 0x806b6c2  j           func_1ADB08
    ctx->pc = 0x1ADDB0u;
    ctx->pc = 0x1ADDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDB0u;
    // 0x1addb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB08u;
    sceDevConsClearBox_0x1adb08(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADDB8u;
label_1addb8:
    // 0x1addb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1addb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addbc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1addbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1addc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1addc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1addc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addc8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1addc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1addcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1addccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1addd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1addd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1addd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1addd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1addd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adddc: 0x806b6c2  j           func_1ADB08
    ctx->pc = 0x1ADDDCu;
    ctx->pc = 0x1ADDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDDCu;
    // 0x1adde0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB08u;
    sceDevConsClearBox_0x1adb08(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADDE4u;
}
