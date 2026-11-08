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

// Function: ActorWorkClean__10WcSequence
// Address: 0x199888 - 0x199900
void ActorWorkClean__10WcSequence_0x199888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorWorkClean__10WcSequence_0x199888");
#endif

    switch (ctx->pc) {
        case 0x199888u: goto label_199888;
        case 0x19988cu: goto label_19988c;
        case 0x199890u: goto label_199890;
        case 0x199894u: goto label_199894;
        case 0x199898u: goto label_199898;
        case 0x19989cu: goto label_19989c;
        case 0x1998a0u: goto label_1998a0;
        case 0x1998a4u: goto label_1998a4;
        case 0x1998a8u: goto label_1998a8;
        case 0x1998acu: goto label_1998ac;
        case 0x1998b0u: goto label_1998b0;
        case 0x1998b4u: goto label_1998b4;
        case 0x1998b8u: goto label_1998b8;
        case 0x1998bcu: goto label_1998bc;
        case 0x1998c0u: goto label_1998c0;
        case 0x1998c4u: goto label_1998c4;
        case 0x1998c8u: goto label_1998c8;
        case 0x1998ccu: goto label_1998cc;
        case 0x1998d0u: goto label_1998d0;
        case 0x1998d4u: goto label_1998d4;
        case 0x1998d8u: goto label_1998d8;
        case 0x1998dcu: goto label_1998dc;
        case 0x1998e0u: goto label_1998e0;
        case 0x1998e4u: goto label_1998e4;
        case 0x1998e8u: goto label_1998e8;
        case 0x1998ecu: goto label_1998ec;
        case 0x1998f0u: goto label_1998f0;
        case 0x1998f4u: goto label_1998f4;
        case 0x1998f8u: goto label_1998f8;
        case 0x1998fcu: goto label_1998fc;
        default: break;
    }

    ctx->pc = 0x199888u;

label_199888:
    // 0x199888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19988c:
    // 0x19988c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_199890:
    // 0x199890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x199890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199894:
    // 0x199894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199898:
    // 0x199898: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19989c:
    // 0x19989c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1998a0:
    // 0x1998a0: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1998a4:
    // 0x1998a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1998a8:
    if (ctx->pc == 0x1998A8u) {
        ctx->pc = 0x1998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998A4u;
        // 0x1998a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998ACu;
        goto label_1998ac;
    }
    ctx->pc = 0x1998A4u;
    {
        const bool branch_taken_0x1998a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998A4u;
        // 0x1998a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998a4) {
            ctx->pc = 0x1998E8u;
            goto label_1998e8;
        }
    }
    ctx->pc = 0x1998ACu;
label_1998ac:
    // 0x1998ac: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1998acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1998b0:
    // 0x1998b0: 0x2644007c  addiu       $a0, $s2, 0x7C
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
label_1998b4:
    // 0x1998b4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1998b8:
    // 0x1998b8: 0xc068436  jal         func_1A10D8
label_1998bc:
    if (ctx->pc == 0x1998BCu) {
        ctx->pc = 0x1998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998B8u;
        // 0x1998bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998C0u;
        goto label_1998c0;
    }
    ctx->pc = 0x1998B8u;
    SET_GPR_U32(ctx, 31, 0x1998C0u);
    ctx->pc = 0x1998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998B8u;
    // 0x1998bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1998B8u, 0x1998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998C0u;
label_1998c0:
    // 0x1998c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1998c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1998c4:
    // 0x1998c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1998c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998c8:
    // 0x1998c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1998cc:
    // 0x1998cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1998d0:
    // 0x1998d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1998d4:
    // 0x1998d4: 0x60f809  jalr        $v1
label_1998d8:
    if (ctx->pc == 0x1998D8u) {
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998D4u;
        // 0x1998d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998DCu;
        goto label_1998dc;
    }
    ctx->pc = 0x1998D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1998DCu);
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998D4u;
        // 0x1998d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1998D4u, 0x1998DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1998DCu;
label_1998dc:
    // 0x1998dc: 0x5620fff4  bnel        $s1, $zero, . + 4 + (-0xC << 2)
label_1998e0:
    if (ctx->pc == 0x1998E0u) {
        ctx->pc = 0x1998E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998DCu;
        // 0x1998e0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998E4u;
        goto label_1998e4;
    }
    ctx->pc = 0x1998DCu;
    {
        const bool branch_taken_0x1998dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1998dc) {
            ctx->pc = 0x1998E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1998DCu;
            // 0x1998e0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1998B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1998b0;
        }
    }
    ctx->pc = 0x1998E4u;
label_1998e4:
    // 0x1998e4: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1998e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1998e8:
    // 0x1998e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1998e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1998ec:
    // 0x1998ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1998ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1998f0:
    // 0x1998f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1998f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1998f4:
    // 0x1998f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1998f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1998f8:
    // 0x1998f8: 0x3e00008  jr          $ra
label_1998fc:
    if (ctx->pc == 0x1998FCu) {
        ctx->pc = 0x1998FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998F8u;
        // 0x1998fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199900u;
        goto label_fallthrough_0x1998f8;
    }
    ctx->pc = 0x1998F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1998FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998F8u;
        // 0x1998fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1998F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1998f8:
    ctx->pc = 0x199900u;
}
