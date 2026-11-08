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

// Function: next_stack_level
// Address: 0x1cddb8 - 0x1cde68
void next_stack_level_0x1cddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("next_stack_level_0x1cddb8");
#endif

    switch (ctx->pc) {
        case 0x1cddd4u: goto label_1cddd4;
        case 0x1cde00u: goto label_1cde00;
        default: break;
    }

    ctx->pc = 0x1cddb8u;

    // 0x1cddb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cddbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cddc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cddc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cddc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cddcc: 0xc072eac  jal         func_1CBAB0
    ctx->pc = 0x1CDDCCu;
    SET_GPR_U32(ctx, 31, 0x1CDDD4u);
    ctx->pc = 0x1CDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDCCu;
    // 0x1cddd0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAB0u, 0x1CDDCCu, 0x1CDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDD4u;
label_1cddd4:
    // 0x1cddd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cddd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddd8: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CDDD8u;
    {
        const bool branch_taken_0x1cddd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddd8) {
            ctx->pc = 0x1CDDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDDD8u;
            // 0x1cdddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE58u;
            goto label_1cde58;
        }
    }
    ctx->pc = 0x1CDDE0u;
    // 0x1cdde0: 0x960203f8  lhu         $v0, 0x3F8($s0)
    ctx->pc = 0x1cdde0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x1cdde4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cdde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdde8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cddec: 0x804303fc  lb          $v1, 0x3FC($v0)
    ctx->pc = 0x1cddecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1020)));
    // 0x1cddf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDDF0u;
    {
        const bool branch_taken_0x1cddf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDF0u;
        // 0x1cddf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddf0) {
            ctx->pc = 0x1CDE18u;
            goto label_1cde18;
        }
    }
    ctx->pc = 0x1CDDF8u;
    // 0x1cddf8: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CDDF8u;
    SET_GPR_U32(ctx, 31, 0x1CDE00u);
    ctx->pc = 0x1CDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDF8u;
    // 0x1cddfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CDDF8u, 0x1CDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE00u;
label_1cde00:
    // 0x1cde00: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1cde00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cde04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cde04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cde08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1cde08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1cde0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDE0Cu;
    {
        const bool branch_taken_0x1cde0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE0Cu;
        // 0x1cde10: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde0c) {
            ctx->pc = 0x1CDE20u;
            goto label_1cde20;
        }
    }
    ctx->pc = 0x1CDE14u;
    // 0x1cde14: 0x0  nop
    ctx->pc = 0x1cde14u;
    // NOP
label_1cde18:
    // 0x1cde18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cde1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cde1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cde20:
    // 0x1cde20: 0x82020477  lb          $v0, 0x477($s0)
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1143)));
    // 0x1cde24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDE24u;
    {
        const bool branch_taken_0x1cde24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde24) {
            ctx->pc = 0x1CDE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDE24u;
            // 0x1cde28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE44u;
            goto label_1cde44;
        }
    }
    ctx->pc = 0x1CDE2Cu;
    // 0x1cde2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cde30: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1cde30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cde34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cde34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cde38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cde38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cde3c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1cde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1cde40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cde44:
    // 0x1cde44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cde44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde48: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cde4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cde50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cde54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cde54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cde58:
    // 0x1cde58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cde58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cde5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cde5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cde60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE60u;
        // 0x1cde64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDE68u;
}
