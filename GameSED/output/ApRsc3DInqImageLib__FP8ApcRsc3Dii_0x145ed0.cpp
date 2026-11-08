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

// Function: ApRsc3DInqImageLib__FP8ApcRsc3Dii
// Address: 0x145ed0 - 0x145fa4
void ApRsc3DInqImageLib__FP8ApcRsc3Dii_0x145ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DInqImageLib__FP8ApcRsc3Dii_0x145ed0");
#endif

    switch (ctx->pc) {
        case 0x145f44u: goto label_145f44;
        case 0x145f60u: goto label_145f60;
        case 0x145f88u: goto label_145f88;
        default: break;
    }

    ctx->pc = 0x145ed0u;

    // 0x145ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145edc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x145edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145eec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x145eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ef0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145EF0u;
    {
        const bool branch_taken_0x145ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x145EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EF0u;
        // 0x145ef4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ef0) {
            ctx->pc = 0x145F30u;
            goto label_145f30;
        }
    }
    ctx->pc = 0x145EF8u;
    // 0x145ef8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x145ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145efc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145EFCu;
    {
        const bool branch_taken_0x145efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145efc) {
            ctx->pc = 0x145F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145EFCu;
            // 0x145f00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F18u;
            goto label_145f18;
        }
    }
    ctx->pc = 0x145F04u;
    // 0x145f04: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x145F04u;
    {
        const bool branch_taken_0x145f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F04u;
        // 0x145f08: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f04) {
            ctx->pc = 0x145F28u;
            goto label_145f28;
        }
    }
    ctx->pc = 0x145F0Cu;
    // 0x145f0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145F0Cu;
    {
        const bool branch_taken_0x145f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F0Cu;
        // 0x145f10: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f0c) {
            ctx->pc = 0x145F38u;
            goto label_145f38;
        }
    }
    ctx->pc = 0x145F14u;
    // 0x145f14: 0x0  nop
    ctx->pc = 0x145f14u;
    // NOP
label_145f18:
    // 0x145f18: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145F18u;
    {
        const bool branch_taken_0x145f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x145f18) {
            ctx->pc = 0x145F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145F18u;
            // 0x145f1c: 0x8e30005c  lw          $s0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F44u;
            goto label_145f44;
        }
    }
    ctx->pc = 0x145F20u;
    // 0x145f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145F20u;
    {
        const bool branch_taken_0x145f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F20u;
        // 0x145f24: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f20) {
            ctx->pc = 0x145F38u;
            goto label_145f38;
        }
    }
    ctx->pc = 0x145F28u;
label_145f28:
    // 0x145f28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145F28u;
    {
        const bool branch_taken_0x145f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F28u;
        // 0x145f2c: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f28) {
            ctx->pc = 0x145F44u;
            goto label_145f44;
        }
    }
    ctx->pc = 0x145F30u;
label_145f30:
    // 0x145f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145F30u;
    {
        const bool branch_taken_0x145f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F30u;
        // 0x145f34: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f30) {
            ctx->pc = 0x145F44u;
            goto label_145f44;
        }
    }
    ctx->pc = 0x145F38u;
label_145f38:
    // 0x145f38: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x145f3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145F3Cu;
    SET_GPR_U32(ctx, 31, 0x145F44u);
    ctx->pc = 0x145F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F3Cu;
    // 0x145f40: 0x24a56a68  addiu       $a1, $a1, 0x6A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145F3Cu, 0x145F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F44u;
label_145f44:
    // 0x145f44: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145F44u;
    {
        const bool branch_taken_0x145f44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f44) {
            ctx->pc = 0x145F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145F44u;
            // 0x145f48: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F68u;
            goto label_145f68;
        }
    }
    ctx->pc = 0x145F4Cu;
    // 0x145f4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f54: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145f58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145F58u;
    SET_GPR_U32(ctx, 31, 0x145F60u);
    ctx->pc = 0x145F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F58u;
    // 0x145f5c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145F58u, 0x145F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F60u;
label_145f60:
    // 0x145f60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145F60u;
    {
        const bool branch_taken_0x145f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F60u;
        // 0x145f64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f60) {
            ctx->pc = 0x145F8Cu;
            goto label_145f8c;
        }
    }
    ctx->pc = 0x145F68u;
label_145f68:
    // 0x145f68: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x145f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145f6c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x145F6Cu;
    {
        const bool branch_taken_0x145f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f6c) {
            ctx->pc = 0x145F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145F6Cu;
            // 0x145f70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145F8Cu;
            goto label_145f8c;
        }
    }
    ctx->pc = 0x145F74u;
    // 0x145f74: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f7c: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145f80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145F80u;
    SET_GPR_U32(ctx, 31, 0x145F88u);
    ctx->pc = 0x145F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F80u;
    // 0x145f84: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145F80u, 0x145F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F88u;
label_145f88:
    // 0x145f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x145f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145f8c:
    // 0x145f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145f90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145f94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x145f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145f98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x145f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x145F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F9Cu;
        // 0x145fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145FA4u;
}
