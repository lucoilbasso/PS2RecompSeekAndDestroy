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

// Function: __deregister_frame_info
// Address: 0x1caf18 - 0x1cafd4
void ps2___deregister_frame_info_0x1caf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___deregister_frame_info_0x1caf18");
#endif

    switch (ctx->pc) {
        case 0x1caf40u: goto label_1caf40;
        case 0x1caf58u: goto label_1caf58;
        case 0x1caf84u: goto label_1caf84;
        case 0x1caf8cu: goto label_1caf8c;
        case 0x1cafbcu: goto label_1cafbc;
        default: break;
    }

    ctx->pc = 0x1caf18u;

    // 0x1caf18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1caf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1caf1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1caf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1caf20: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1caf20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1caf24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1caf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1caf28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1caf28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf2c: 0x8e44aa44  lw          $a0, -0x55BC($s2)
    ctx->pc = 0x1caf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24AA44u));
    // 0x1caf30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caf34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1caf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1caf38: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1CAF38u;
    SET_GPR_U32(ctx, 31, 0x1CAF40u);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1CAF38u, 0x1CAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF40u;
label_1caf40:
    // 0x1caf40: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1caf44: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x1caf48: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1caf48u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x410460u));
    // 0x1caf4c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CAF4Cu;
    {
        const bool branch_taken_0x1caf4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf4c) {
            ctx->pc = 0x1CAFB4u;
            goto label_1cafb4;
        }
    }
    ctx->pc = 0x1CAF54u;
    // 0x1caf54: 0x0  nop
    ctx->pc = 0x1caf54u;
    // NOP
label_1caf58:
    // 0x1caf58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1caf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1caf5c: 0x54510012  bnel        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CAF5Cu;
    {
        const bool branch_taken_0x1caf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1caf5c) {
            ctx->pc = 0x1CAF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF5Cu;
            // 0x1caf60: 0x26030014  addiu       $v1, $s0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAFA8u;
            goto label_1cafa8;
        }
    }
    ctx->pc = 0x1CAF64u;
    // 0x1caf64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1caf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1caf68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1caf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1caf6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAF6Cu;
    {
        const bool branch_taken_0x1caf6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF6Cu;
        // 0x1caf70: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf6c) {
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF74u;
    // 0x1caf74: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF74u;
    {
        const bool branch_taken_0x1caf74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x1caf74) {
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF7Cu;
    // 0x1caf7c: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF84u);
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CAF7Cu, 0x1CAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF84u;
label_1caf84:
    // 0x1caf84: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CAF84u;
    SET_GPR_U32(ctx, 31, 0x1CAF8Cu);
    ctx->pc = 0x1CAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF84u;
    // 0x1caf88: 0x8e44aa44  lw          $a0, -0x55BC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CAF84u, 0x1CAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF8Cu;
label_1caf8c:
    // 0x1caf8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1caf8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caf90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caf98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1caf98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caf9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1caf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cafa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFA0u;
        // 0x1cafa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAFA8u;
label_1cafa8:
    // 0x1cafa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cafac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CAFACu;
    {
        const bool branch_taken_0x1cafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFACu;
        // 0x1cafb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafac) {
            ctx->pc = 0x1CAF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caf58;
        }
    }
    ctx->pc = 0x1CAFB4u;
label_1cafb4:
    // 0x1cafb4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CAFB4u;
    SET_GPR_U32(ctx, 31, 0x1CAFBCu);
    ctx->pc = 0x1CAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFB4u;
    // 0x1cafb8: 0x8e44aa44  lw          $a0, -0x55BC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CAFB4u, 0x1CAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFBCu;
label_1cafbc:
    // 0x1cafbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cafbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cafc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cafc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cafc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cafc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cafc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cafcc: 0x8073d1a  j           func_1CF468
    ctx->pc = 0x1CAFCCu;
    ctx->pc = 0x1CAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFCCu;
    // 0x1cafd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF468u;
    abort_0x1cf468(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAFD4u;
}
