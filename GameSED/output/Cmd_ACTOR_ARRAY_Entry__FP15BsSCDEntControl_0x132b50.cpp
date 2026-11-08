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

// Function: Cmd_ACTOR_ARRAY_Entry__FP15BsSCDEntControl
// Address: 0x132b50 - 0x132c50
void Cmd_ACTOR_ARRAY_Entry__FP15BsSCDEntControl_0x132b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_ARRAY_Entry__FP15BsSCDEntControl_0x132b50");
#endif

    switch (ctx->pc) {
        case 0x132b70u: goto label_132b70;
        case 0x132b7cu: goto label_132b7c;
        case 0x132b8cu: goto label_132b8c;
        case 0x132c38u: goto label_132c38;
        default: break;
    }

    ctx->pc = 0x132b50u;

    // 0x132b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132b60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132b64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x132b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x132b68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x132B68u;
    SET_GPR_U32(ctx, 31, 0x132B70u);
    ctx->pc = 0x132B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B68u;
    // 0x132b6c: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132B68u, 0x132B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B70u;
label_132b70:
    // 0x132b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x132B74u;
    SET_GPR_U32(ctx, 31, 0x132B7Cu);
    ctx->pc = 0x132B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B74u;
    // 0x132b78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132B74u, 0x132B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B7Cu;
label_132b7c:
    // 0x132b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b84: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x132B84u;
    SET_GPR_U32(ctx, 31, 0x132B8Cu);
    ctx->pc = 0x132B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B84u;
    // 0x132b88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x132B84u, 0x132B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B8Cu;
label_132b8c:
    // 0x132b8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x132b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x132b90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b94: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x132b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x132b98: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x132B98u;
    {
        const bool branch_taken_0x132b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132b98) {
            ctx->pc = 0x132B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132B98u;
            // 0x132b9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132C3Cu;
            goto label_132c3c;
        }
    }
    ctx->pc = 0x132BA0u;
    // 0x132ba0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x132ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x132ba4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x132ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132bac: 0x8c6363a0  lw          $v1, 0x63A0($v1)
    ctx->pc = 0x132bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25504)));
    // 0x132bb0: 0x600008  jr          $v1
    ctx->pc = 0x132BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132BB8u: goto label_132bb8;
            case 0x132BD8u: goto label_132bd8;
            case 0x132BF0u: goto label_132bf0;
            case 0x132C00u: goto label_132c00;
            case 0x132C10u: goto label_132c10;
            case 0x132C28u: goto label_132c28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x132BB8u;
label_132bb8:
    // 0x132bb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x132bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132bc4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x132bc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x132bc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132bcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x132bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132bd0: 0x804171a  j           func_105C68
    ctx->pc = 0x132BD0u;
    ctx->pc = 0x132BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BD0u;
    // 0x132bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x132BD8u;
label_132bd8:
    // 0x132bd8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132bdc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132be0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x132be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x132be4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x132BE4u;
    {
        const bool branch_taken_0x132be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BE4u;
        // 0x132be8: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132be4) {
            ctx->pc = 0x132C38u;
            goto label_132c38;
        }
    }
    ctx->pc = 0x132BECu;
    // 0x132bec: 0x0  nop
    ctx->pc = 0x132becu;
    // NOP
label_132bf0:
    // 0x132bf0: 0x8f828a30  lw          $v0, -0x75D0($gp)
    ctx->pc = 0x132bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x132bf4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x132BF4u;
    {
        const bool branch_taken_0x132bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BF4u;
        // 0x132bf8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bf4) {
            ctx->pc = 0x132C38u;
            goto label_132c38;
        }
    }
    ctx->pc = 0x132BFCu;
    // 0x132bfc: 0x0  nop
    ctx->pc = 0x132bfcu;
    // NOP
label_132c00:
    // 0x132c00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x132c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132c04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x132C04u;
    {
        const bool branch_taken_0x132c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C04u;
        // 0x132c08: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c04) {
            ctx->pc = 0x132C38u;
            goto label_132c38;
        }
    }
    ctx->pc = 0x132C0Cu;
    // 0x132c0c: 0x0  nop
    ctx->pc = 0x132c0cu;
    // NOP
label_132c10:
    // 0x132c10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132c14: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132c14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132c18: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x132c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x132c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132C1Cu;
    {
        const bool branch_taken_0x132c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C1Cu;
        // 0x132c20: 0xaf848a30  sw          $a0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c1c) {
            ctx->pc = 0x132C38u;
            goto label_132c38;
        }
    }
    ctx->pc = 0x132C24u;
    // 0x132c24: 0x0  nop
    ctx->pc = 0x132c24u;
    // NOP
label_132c28:
    // 0x132c28: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132c2c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x132c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132c30: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132c30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132c34: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x132c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
label_132c38:
    // 0x132c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132c3c:
    // 0x132c3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132c40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132c44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x132c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132c48: 0x3e00008  jr          $ra
    ctx->pc = 0x132C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C48u;
        // 0x132c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132C50u;
}
