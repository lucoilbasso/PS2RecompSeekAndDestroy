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

// Function: ApObjRscThinkJob__FP5BcJobPv
// Address: 0x104618 - 0x1046ac
void ApObjRscThinkJob__FP5BcJobPv_0x104618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApObjRscThinkJob__FP5BcJobPv_0x104618");
#endif

    switch (ctx->pc) {
        case 0x104634u: goto label_104634;
        case 0x104638u: goto label_104638;
        case 0x104648u: goto label_104648;
        case 0x104658u: goto label_104658;
        case 0x104668u: goto label_104668;
        case 0x104674u: goto label_104674;
        case 0x104698u: goto label_104698;
        default: break;
    }

    ctx->pc = 0x104618u;

    // 0x104618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10461c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10461cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x104624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x104628: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x104628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10462c: 0xc05dd18  jal         func_177460
    ctx->pc = 0x10462Cu;
    SET_GPR_U32(ctx, 31, 0x104634u);
    ctx->pc = 0x104630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10462Cu;
    // 0x104630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x10462Cu, 0x104634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104634u;
label_104634:
    // 0x104634: 0x0  nop
    ctx->pc = 0x104634u;
    // NOP
label_104638:
    // 0x104638: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10463c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x10463cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104640: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x104640u;
    SET_GPR_U32(ctx, 31, 0x104648u);
    ctx->pc = 0x104644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104640u;
    // 0x104644: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x104640u, 0x104648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104648u;
label_104648:
    // 0x104648: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x104648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x10464c: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x104650: 0xc040dd4  jal         func_103750
    ctx->pc = 0x104650u;
    SET_GPR_U32(ctx, 31, 0x104658u);
    ctx->pc = 0x104654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104650u;
    // 0x104654: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103750u, 0x104650u, 0x104658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104658u;
label_104658:
    // 0x104658: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x104658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x10465c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x104660: 0xc040dd4  jal         func_103750
    ctx->pc = 0x104660u;
    SET_GPR_U32(ctx, 31, 0x104668u);
    ctx->pc = 0x104664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104660u;
    // 0x104664: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103750u, 0x104660u, 0x104668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104668u;
label_104668:
    // 0x104668: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x10466c: 0xc040dd4  jal         func_103750
    ctx->pc = 0x10466Cu;
    SET_GPR_U32(ctx, 31, 0x104674u);
    ctx->pc = 0x104670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10466Cu;
    // 0x104670: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103750u, 0x10466Cu, 0x104674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104674u;
label_104674:
    // 0x104674: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x104674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x104678: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x104678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10467c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x104680: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x104680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x104684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x104684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x104688: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x104688u;
    {
        const bool branch_taken_0x104688 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104688u;
        // 0x10468c: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104688) {
            ctx->pc = 0x104638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104638;
        }
    }
    ctx->pc = 0x104690u;
    // 0x104690: 0xc05dd18  jal         func_177460
    ctx->pc = 0x104690u;
    SET_GPR_U32(ctx, 31, 0x104698u);
    ctx->pc = 0x104694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104690u;
    // 0x104694: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x104690u, 0x104698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104698u;
label_104698:
    // 0x104698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10469c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10469cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1046a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1046a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1046a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1046A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1046A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046A4u;
        // 0x1046a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1046ACu;
}
