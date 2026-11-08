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

// Function: ApSCDEntGetWithPathName__FP15BsSCDEntControlPc
// Address: 0x105a98 - 0x105af0
void ApSCDEntGetWithPathName__FP15BsSCDEntControlPc_0x105a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntGetWithPathName__FP15BsSCDEntControlPc_0x105a98");
#endif

    switch (ctx->pc) {
        case 0x105aacu: goto label_105aac;
        case 0x105ae0u: goto label_105ae0;
        default: break;
    }

    ctx->pc = 0x105a98u;

    // 0x105a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105aa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x105aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x105aa4: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x105AA4u;
    SET_GPR_U32(ctx, 31, 0x105AACu);
    ctx->pc = 0x105AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AA4u;
    // 0x105aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x105AA4u, 0x105AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AACu;
label_105aac:
    // 0x105aac: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x105aacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105ab0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x105ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x105ab4: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x105ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x105ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105abc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105ABCu;
    {
        const bool branch_taken_0x105abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x105AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ABCu;
        // 0x105ac0: 0x24a5f180  addiu       $a1, $a1, -0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105abc) {
            ctx->pc = 0x105AD8u;
            goto label_105ad8;
        }
    }
    ctx->pc = 0x105AC4u;
    // 0x105ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ac8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x105ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x105acc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x105accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105ad0: 0x80671e8  j           func_19C7A0
    ctx->pc = 0x105AD0u;
    ctx->pc = 0x105AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AD0u;
    // 0x105ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    B_StrCpy__FPcT0_0x19c7a0(rdram, ctx, runtime); return;
    ctx->pc = 0x105AD8u;
label_105ad8:
    // 0x105ad8: 0xc066e3e  jal         func_19B8F8
    ctx->pc = 0x105AD8u;
    SET_GPR_U32(ctx, 31, 0x105AE0u);
    ctx->pc = 0x105ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AD8u;
    // 0x105adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8F8u, 0x105AD8u, 0x105AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AE0u;
label_105ae0:
    // 0x105ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ae4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x105ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x105AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AE8u;
        // 0x105aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105AF0u;
}
