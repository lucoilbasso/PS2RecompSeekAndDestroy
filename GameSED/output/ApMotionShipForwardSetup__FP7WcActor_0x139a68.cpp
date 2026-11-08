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

// Function: ApMotionShipForwardSetup__FP7WcActor
// Address: 0x139a68 - 0x139b10
void ApMotionShipForwardSetup__FP7WcActor_0x139a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionShipForwardSetup__FP7WcActor_0x139a68");
#endif

    switch (ctx->pc) {
        case 0x139a94u: goto label_139a94;
        case 0x139aa8u: goto label_139aa8;
        case 0x139abcu: goto label_139abc;
        default: break;
    }

    ctx->pc = 0x139a68u;

    // 0x139a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139a6c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x139a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139a74: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x139a74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x139a78: 0x26109940  addiu       $s0, $s0, -0x66C0
    ctx->pc = 0x139a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940992));
    // 0x139a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139a88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x139a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x139a8c: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x139A8Cu;
    SET_GPR_U32(ctx, 31, 0x139A94u);
    ctx->pc = 0x139A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A8Cu;
    // 0x139a90: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x139A8Cu, 0x139A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A94u;
label_139a94:
    // 0x139a94: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x139a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139a98: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x139a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139a9c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x139a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139aa0: 0xc06164c  jal         func_185930
    ctx->pc = 0x139AA0u;
    SET_GPR_U32(ctx, 31, 0x139AA8u);
    ctx->pc = 0x139AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AA0u;
    // 0x139aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x139AA0u, 0x139AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AA8u;
label_139aa8:
    // 0x139aa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab4: 0xc068866  jal         func_1A2198
    ctx->pc = 0x139AB4u;
    SET_GPR_U32(ctx, 31, 0x139ABCu);
    ctx->pc = 0x139AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AB4u;
    // 0x139ab8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x139AB4u, 0x139ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139ABCu;
label_139abc:
    // 0x139abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ac4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x139ac8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139acc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x139accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x139ad0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139AD0u;
    {
        const bool branch_taken_0x139ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x139AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AD0u;
        // 0x139ad4: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ad0) {
            ctx->pc = 0x139AE0u;
            goto label_139ae0;
        }
    }
    ctx->pc = 0x139AD8u;
    // 0x139ad8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139adc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x139adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139ae0:
    // 0x139ae0: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x139ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x139ae4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x139ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139af4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139af8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x139afc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x139afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x139b00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x139b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x139b04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139b08: 0x3e00008  jr          $ra
    ctx->pc = 0x139B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B08u;
        // 0x139b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139B10u;
}
