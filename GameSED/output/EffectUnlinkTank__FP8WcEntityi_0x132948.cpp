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

// Function: EffectUnlinkTank__FP8WcEntityi
// Address: 0x132948 - 0x1329d4
void EffectUnlinkTank__FP8WcEntityi_0x132948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectUnlinkTank__FP8WcEntityi_0x132948");
#endif

    switch (ctx->pc) {
        case 0x132990u: goto label_132990;
        case 0x1329b0u: goto label_1329b0;
        default: break;
    }

    ctx->pc = 0x132948u;

    // 0x132948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13294c: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x13294cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x132950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132958: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13295c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132960: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x132960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x132964: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x132964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x132968: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x132968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13296c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x13296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x132970: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x132970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x132974: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x132974u;
    {
        const bool branch_taken_0x132974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132974u;
        // 0x132978: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132974) {
            ctx->pc = 0x1329BCu;
            goto label_1329bc;
        }
    }
    ctx->pc = 0x13297Cu;
    // 0x13297c: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x13297cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x132980: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x132980u;
    {
        const bool branch_taken_0x132980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x132980) {
            ctx->pc = 0x132984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132980u;
            // 0x132984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329C0u;
            goto label_1329c0;
        }
    }
    ctx->pc = 0x132988u;
    // 0x132988: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x132988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x13298c: 0x0  nop
    ctx->pc = 0x13298cu;
    // NOP
label_132990:
    // 0x132990: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x132990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x132994: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x132994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x132998: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132998u;
    {
        const bool branch_taken_0x132998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132998) {
            ctx->pc = 0x13299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132998u;
            // 0x13299c: 0x8e100060  lw          $s0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329B4u;
            goto label_1329b4;
        }
    }
    ctx->pc = 0x1329A0u;
    // 0x1329a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1329a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1329a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329a8: 0xc04c10a  jal         func_130428
    ctx->pc = 0x1329A8u;
    SET_GPR_U32(ctx, 31, 0x1329B0u);
    ctx->pc = 0x1329ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329A8u;
    // 0x1329ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130428u, 0x1329A8u, 0x1329B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329B0u;
label_1329b0:
    // 0x1329b0: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x1329b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1329b4:
    // 0x1329b4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1329B4u;
    {
        const bool branch_taken_0x1329b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329b4) {
            ctx->pc = 0x1329B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1329B4u;
            // 0x1329b8: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132990;
        }
    }
    ctx->pc = 0x1329BCu;
label_1329bc:
    // 0x1329bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1329bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1329c0:
    // 0x1329c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1329c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1329c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1329c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1329c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1329c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1329cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1329CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329CCu;
        // 0x1329d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1329CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1329D4u;
}
