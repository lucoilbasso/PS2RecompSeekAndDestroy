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

// Function: WSndStdInitLocal__FP8WcSndStd
// Address: 0x17a958 - 0x17a9fc
void WSndStdInitLocal__FP8WcSndStd_0x17a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSndStdInitLocal__FP8WcSndStd_0x17a958");
#endif

    switch (ctx->pc) {
        case 0x17a990u: goto label_17a990;
        case 0x17a99cu: goto label_17a99c;
        case 0x17a9c0u: goto label_17a9c0;
        default: break;
    }

    ctx->pc = 0x17a958u;

    // 0x17a958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a95c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a960: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a964: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a96c: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17a970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a974: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17a974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17a978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a97c: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x17a97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17a980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a984: 0xae400280  sw          $zero, 0x280($s2)
    ctx->pc = 0x17a984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 0));
    // 0x17a988: 0xac520034  sw          $s2, 0x34($v0)
    ctx->pc = 0x17a988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 18));
    // 0x17a98c: 0x0  nop
    ctx->pc = 0x17a98cu;
    // NOP
label_17a990:
    // 0x17a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a994: 0xc05e9ca  jal         func_17A728
    ctx->pc = 0x17A994u;
    SET_GPR_U32(ctx, 31, 0x17A99Cu);
    ctx->pc = 0x17A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A994u;
    // 0x17a998: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A728u, 0x17A994u, 0x17A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A99Cu;
label_17a99c:
    // 0x17a99c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17a9a0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17a9a4: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x17a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x17a9a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17A9A8u;
    {
        const bool branch_taken_0x17a9a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9A8u;
        // 0x17a9ac: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9a8) {
            ctx->pc = 0x17A990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a990;
        }
    }
    ctx->pc = 0x17A9B0u;
    // 0x17a9b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17a9b4: 0x26440254  addiu       $a0, $s2, 0x254
    ctx->pc = 0x17a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
    // 0x17a9b8: 0x2445e960  addiu       $a1, $v0, -0x16A0
    ctx->pc = 0x17a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
    // 0x17a9bc: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17a9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17a9c0:
    // 0x17a9c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17a9c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17a9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17a9c8: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x17a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
    // 0x17a9cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17a9d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17a9d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17a9d8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17A9D8u;
    {
        const bool branch_taken_0x17a9d8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D8u;
        // 0x17a9dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9d8) {
            ctx->pc = 0x17A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a9c0;
        }
    }
    ctx->pc = 0x17A9E0u;
    // 0x17a9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a9f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9F4u;
        // 0x17a9f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A9FCu;
}
