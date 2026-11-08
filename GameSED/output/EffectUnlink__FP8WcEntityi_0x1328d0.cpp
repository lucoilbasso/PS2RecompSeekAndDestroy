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

// Function: EffectUnlink__FP8WcEntityi
// Address: 0x1328d0 - 0x132948
void EffectUnlink__FP8WcEntityi_0x1328d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectUnlink__FP8WcEntityi_0x1328d0");
#endif

    switch (ctx->pc) {
        case 0x132918u: goto label_132918;
        case 0x132924u: goto label_132924;
        default: break;
    }

    ctx->pc = 0x1328d0u;

    // 0x1328d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1328d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1328d4: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x1328d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1328d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1328d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1328dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1328dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1328e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1328e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1328e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1328e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1328e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1328ec: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x1328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x1328f0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1328f4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1328f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1328f8: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x1328f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1328fc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1328FCu;
    {
        const bool branch_taken_0x1328fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328FCu;
        // 0x132900: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328fc) {
            ctx->pc = 0x132930u;
            goto label_132930;
        }
    }
    ctx->pc = 0x132904u;
    // 0x132904: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x132904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x132908: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x132908u;
    {
        const bool branch_taken_0x132908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x132908) {
            ctx->pc = 0x13290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132908u;
            // 0x13290c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132934u;
            goto label_132934;
        }
    }
    ctx->pc = 0x132910u;
    // 0x132910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132914: 0x0  nop
    ctx->pc = 0x132914u;
    // NOP
label_132918:
    // 0x132918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13291c: 0xc04c10a  jal         func_130428
    ctx->pc = 0x13291Cu;
    SET_GPR_U32(ctx, 31, 0x132924u);
    ctx->pc = 0x132920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13291Cu;
    // 0x132920: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130428u, 0x13291Cu, 0x132924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132924u;
label_132924:
    // 0x132924: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x132924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x132928: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x132928u;
    {
        const bool branch_taken_0x132928 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132928u;
        // 0x13292c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132928) {
            ctx->pc = 0x132918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132918;
        }
    }
    ctx->pc = 0x132930u;
label_132930:
    // 0x132930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132934:
    // 0x132934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132938: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13293c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13293cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132940: 0x3e00008  jr          $ra
    ctx->pc = 0x132940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132940u;
        // 0x132944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132948u;
}
