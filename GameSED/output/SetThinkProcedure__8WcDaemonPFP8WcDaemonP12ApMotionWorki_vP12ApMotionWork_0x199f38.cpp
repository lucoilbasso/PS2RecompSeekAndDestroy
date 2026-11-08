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

// Function: SetThinkProcedure__8WcDaemonPFP8WcDaemonP12ApMotionWorki_vP12ApMotionWork
// Address: 0x199f38 - 0x199fac
void SetThinkProcedure__8WcDaemonPFP8WcDaemonP12ApMotionWorki_vP12ApMotionWork_0x199f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetThinkProcedure__8WcDaemonPFP8WcDaemonP12ApMotionWorki_vP12ApMotionWork_0x199f38");
#endif

    switch (ctx->pc) {
        case 0x199f38u: goto label_199f38;
        case 0x199f3cu: goto label_199f3c;
        case 0x199f40u: goto label_199f40;
        case 0x199f44u: goto label_199f44;
        case 0x199f48u: goto label_199f48;
        case 0x199f4cu: goto label_199f4c;
        case 0x199f50u: goto label_199f50;
        case 0x199f54u: goto label_199f54;
        case 0x199f58u: goto label_199f58;
        case 0x199f5cu: goto label_199f5c;
        case 0x199f60u: goto label_199f60;
        case 0x199f64u: goto label_199f64;
        case 0x199f68u: goto label_199f68;
        case 0x199f6cu: goto label_199f6c;
        case 0x199f70u: goto label_199f70;
        case 0x199f74u: goto label_199f74;
        case 0x199f78u: goto label_199f78;
        case 0x199f7cu: goto label_199f7c;
        case 0x199f80u: goto label_199f80;
        case 0x199f84u: goto label_199f84;
        case 0x199f88u: goto label_199f88;
        case 0x199f8cu: goto label_199f8c;
        case 0x199f90u: goto label_199f90;
        case 0x199f94u: goto label_199f94;
        case 0x199f98u: goto label_199f98;
        case 0x199f9cu: goto label_199f9c;
        case 0x199fa0u: goto label_199fa0;
        case 0x199fa4u: goto label_199fa4;
        case 0x199fa8u: goto label_199fa8;
        default: break;
    }

    ctx->pc = 0x199f38u;

label_199f38:
    // 0x199f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_199f3c:
    // 0x199f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199f40:
    // 0x199f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_199f44:
    // 0x199f44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199f48:
    // 0x199f48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_199f4c:
    // 0x199f4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x199f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199f50:
    // 0x199f50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x199f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_199f54:
    // 0x199f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_199f58:
    // 0x199f58: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x199f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_199f5c:
    // 0x199f5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x199f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_199f60:
    // 0x199f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_199f64:
    if (ctx->pc == 0x199F64u) {
        ctx->pc = 0x199F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F60u;
        // 0x199f64: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F68u;
        goto label_199f68;
    }
    ctx->pc = 0x199F60u;
    {
        const bool branch_taken_0x199f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F60u;
        // 0x199f64: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f60) {
            ctx->pc = 0x199F70u;
            goto label_199f70;
        }
    }
    ctx->pc = 0x199F68u;
label_199f68:
    // 0x199f68: 0x40f809  jalr        $v0
label_199f6c:
    if (ctx->pc == 0x199F6Cu) {
        ctx->pc = 0x199F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F68u;
        // 0x199f6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F70u;
        goto label_199f70;
    }
    ctx->pc = 0x199F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199F70u);
        ctx->pc = 0x199F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F68u;
        // 0x199f6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F68u, 0x199F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199F70u;
label_199f70:
    // 0x199f70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x199f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199f74:
    // 0x199f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_199f78:
    if (ctx->pc == 0x199F78u) {
        ctx->pc = 0x199F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F74u;
        // 0x199f78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F7Cu;
        goto label_199f7c;
    }
    ctx->pc = 0x199F74u;
    {
        const bool branch_taken_0x199f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F74u;
        // 0x199f78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f74) {
            ctx->pc = 0x199F84u;
            goto label_199f84;
        }
    }
    ctx->pc = 0x199F7Cu;
label_199f7c:
    // 0x199f7c: 0xc067f04  jal         func_19FC10
label_199f80:
    if (ctx->pc == 0x199F80u) {
        ctx->pc = 0x199F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F7Cu;
        // 0x199f80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199F84u;
        goto label_199f84;
    }
    ctx->pc = 0x199F7Cu;
    SET_GPR_U32(ctx, 31, 0x199F84u);
    ctx->pc = 0x199F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F7Cu;
    // 0x199f80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199F7Cu, 0x199F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F84u;
label_199f84:
    // 0x199f84: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x199f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_199f88:
    // 0x199f88: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x199f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
label_199f8c:
    // 0x199f8c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x199f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_199f90:
    // 0x199f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199f94:
    // 0x199f94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199f98:
    // 0x199f98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199f9c:
    // 0x199f9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x199f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199fa0:
    // 0x199fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199fa4:
    // 0x199fa4: 0x3e00008  jr          $ra
label_199fa8:
    if (ctx->pc == 0x199FA8u) {
        ctx->pc = 0x199FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FA4u;
        // 0x199fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199FACu;
        goto label_fallthrough_0x199fa4;
    }
    ctx->pc = 0x199FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FA4u;
        // 0x199fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199fa4:
    ctx->pc = 0x199FACu;
}
