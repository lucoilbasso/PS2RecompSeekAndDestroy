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

// Function: WCdManFileReadCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND
// Address: 0x178900 - 0x1789d4
void WCdManFileReadCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND_0x178900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileReadCD__FP16W_CDMAN_CD_CACHEP15CD_READ_COMMAND_0x178900");
#endif

    switch (ctx->pc) {
        case 0x178968u: goto label_178968;
        case 0x178970u: goto label_178970;
        case 0x178978u: goto label_178978;
        case 0x178980u: goto label_178980;
        case 0x178988u: goto label_178988;
        case 0x17899cu: goto label_17899c;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b4u: goto label_1789b4;
        default: break;
    }

    ctx->pc = 0x178900u;

    // 0x178900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178904: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17890c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17890cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178918: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17891c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x17891cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178920: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x178920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x178924: 0x8e221040  lw          $v0, 0x1040($s1)
    ctx->pc = 0x178924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4160)));
    // 0x178928: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x178928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17892c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17892cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x178930: 0xae221040  sw          $v0, 0x1040($s1)
    ctx->pc = 0x178930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 2));
    // 0x178934: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x178934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x178938: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x178938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17893c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17893Cu;
    {
        const bool branch_taken_0x17893c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17893c) {
            ctx->pc = 0x178940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17893Cu;
            // 0x178940: 0x8e060050  lw          $a2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178950u;
            goto label_178950;
        }
    }
    ctx->pc = 0x178944u;
    // 0x178944: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x178944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x178948: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x178948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x17894c: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x17894cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_178950:
    // 0x178950: 0x1cc00007  bgtz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x178950u;
    {
        const bool branch_taken_0x178950 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x178954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178950u;
        // 0x178954: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178950) {
            ctx->pc = 0x178970u;
            goto label_178970;
        }
    }
    ctx->pc = 0x178958u;
    // 0x178958: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x178958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17895c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178960: 0xc05f358  jal         func_17CD60
    ctx->pc = 0x178960u;
    SET_GPR_U32(ctx, 31, 0x178968u);
    ctx->pc = 0x178964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178960u;
    // 0x178964: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CD60u, 0x178960u, 0x178968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178968u;
label_178968:
    // 0x178968: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x178968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x17896c: 0x0  nop
    ctx->pc = 0x17896cu;
    // NOP
label_178970:
    // 0x178970: 0xc06eb50  jal         func_1BAD40
    ctx->pc = 0x178970u;
    SET_GPR_U32(ctx, 31, 0x178978u);
    ctx->pc = 0x178974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178970u;
    // 0x178974: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD40u, 0x178970u, 0x178978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178978u;
label_178978:
    // 0x178978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178978u;
    {
        const bool branch_taken_0x178978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178978u;
        // 0x17897c: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178978) {
            ctx->pc = 0x17898Cu;
            goto label_17898c;
        }
    }
    ctx->pc = 0x178980u;
label_178980:
    // 0x178980: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x178980u;
    SET_GPR_U32(ctx, 31, 0x178988u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x178980u, 0x178988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178988u;
label_178988:
    // 0x178988: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x178988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_17898c:
    // 0x17898c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17898cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178990: 0x27878cc0  addiu       $a3, $gp, -0x7340
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937792));
    // 0x178994: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x178994u;
    SET_GPR_U32(ctx, 31, 0x17899Cu);
    ctx->pc = 0x178998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178994u;
    // 0x178998: 0x8e060050  lw          $a2, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x178994u, 0x17899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17899Cu;
label_17899c:
    // 0x17899c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17899Cu;
    {
        const bool branch_taken_0x17899c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17899c) {
            ctx->pc = 0x178980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178980;
        }
    }
    ctx->pc = 0x1789A4u;
    // 0x1789a4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1789A4u;
    SET_GPR_U32(ctx, 31, 0x1789ACu);
    ctx->pc = 0x1789A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789A4u;
    // 0x1789a8: 0x8e241014  lw          $a0, 0x1014($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1789A4u, 0x1789ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789ACu;
label_1789ac:
    // 0x1789ac: 0xc05e276  jal         func_1789D8
    ctx->pc = 0x1789ACu;
    SET_GPR_U32(ctx, 31, 0x1789B4u);
    ctx->pc = 0x1789D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1789D8u, 0x1789ACu, 0x1789B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789B4u;
label_1789b4:
    // 0x1789b4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1789B4u;
    {
        const bool branch_taken_0x1789b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789B4u;
        // 0x1789b8: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789b4) {
            ctx->pc = 0x178970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178970;
        }
    }
    ctx->pc = 0x1789BCu;
    // 0x1789bc: 0xae201040  sw          $zero, 0x1040($s1)
    ctx->pc = 0x1789bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 0));
    // 0x1789c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1789c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1789c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1789c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1789c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1789c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1789cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1789CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1789D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789CCu;
        // 0x1789d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1789CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1789D4u;
}
