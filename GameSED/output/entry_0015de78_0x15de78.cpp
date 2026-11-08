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

// Function: entry_0015de78
// Address: 0x15de78 - 0x15df00
void entry_0015de78_0x15de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015de78_0x15de78");
#endif

    switch (ctx->pc) {
        case 0x15deb8u: goto label_15deb8;
        default: break;
    }

    ctx->pc = 0x15de78u;

label_15de78:
    // 0x15de78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15de78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_15de7c:
    // 0x15de7c: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_15de80:
    if (ctx->pc == 0x15DE80u) {
        ctx->pc = 0x15DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE7Cu;
        // 0x15de80: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE84u;
        goto label_15de84;
    }
    ctx->pc = 0x15DE7Cu;
    {
        const bool branch_taken_0x15de7c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x15DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE7Cu;
        // 0x15de80: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de7c) {
            ctx->pc = 0x15DE50u;
            return;
        }
    }
    ctx->pc = 0x15DE84u;
label_15de84:
    // 0x15de84: 0x26900de0  addiu       $s0, $s4, 0xDE0
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3552));
label_15de88:
    // 0x15de88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15de8c:
    // 0x15de8c: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_15de90:
    // 0x15de90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15de94:
    // 0x15de94: 0x54400119  bnel        $v0, $zero, . + 4 + (0x119 << 2)
label_15de98:
    if (ctx->pc == 0x15DE98u) {
        ctx->pc = 0x15DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE94u;
        // 0x15de98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE9Cu;
        goto label_15de9c;
    }
    ctx->pc = 0x15DE94u;
    {
        const bool branch_taken_0x15de94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15de94) {
            ctx->pc = 0x15DE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DE94u;
            // 0x15de98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2FCu;
            return;
        }
    }
    ctx->pc = 0x15DE9Cu;
label_15de9c:
    // 0x15de9c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_15dea0:
    // 0x15dea0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_15dea4:
    if (ctx->pc == 0x15DEA4u) {
        ctx->pc = 0x15DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA0u;
        // 0x15dea4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEA8u;
        goto label_15dea8;
    }
    ctx->pc = 0x15DEA0u;
    {
        const bool branch_taken_0x15dea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dea0) {
            ctx->pc = 0x15DEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DEA0u;
            // 0x15dea4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DF70u;
            return;
        }
    }
    ctx->pc = 0x15DEA8u;
label_15dea8:
    // 0x15dea8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x15dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_15deac:
    // 0x15deac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15deb0:
    // 0x15deb0: 0xc056a82  jal         func_15AA08
label_15deb4:
    if (ctx->pc == 0x15DEB4u) {
        ctx->pc = 0x15DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEB0u;
        // 0x15deb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEB8u;
        goto label_15deb8;
    }
    ctx->pc = 0x15DEB0u;
    SET_GPR_U32(ctx, 31, 0x15DEB8u);
    ctx->pc = 0x15DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DEB0u;
    // 0x15deb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15DEB0u, 0x15DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEB8u;
label_15deb8:
    // 0x15deb8: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_15debc:
    if (ctx->pc == 0x15DEBCu) {
        ctx->pc = 0x15DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEB8u;
        // 0x15debc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEC0u;
        goto label_15dec0;
    }
    ctx->pc = 0x15DEB8u;
    {
        const bool branch_taken_0x15deb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15deb8) {
            ctx->pc = 0x15DEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DEB8u;
            // 0x15debc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15DF70u;
            return;
        }
    }
    ctx->pc = 0x15DEC0u;
label_15dec0:
    // 0x15dec0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x15dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_15dec4:
    // 0x15dec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15dec8:
    // 0x15dec8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_15decc:
    if (ctx->pc == 0x15DECCu) {
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DED0u;
        goto label_15ded0;
    }
    ctx->pc = 0x15DEC8u;
    {
        const bool branch_taken_0x15dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dec8) {
            ctx->pc = 0x15DF6Cu;
            return;
        }
    }
    ctx->pc = 0x15DED0u;
label_15ded0:
    // 0x15ded0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ded4:
    // 0x15ded4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ded8:
    // 0x15ded8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15dedc:
    // 0x15dedc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15dee0:
    if (ctx->pc == 0x15DEE0u) {
        ctx->pc = 0x15DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEDCu;
        // 0x15dee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEE4u;
        goto label_15dee4;
    }
    ctx->pc = 0x15DEDCu;
    {
        const bool branch_taken_0x15dedc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEDCu;
        // 0x15dee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dedc) {
            ctx->pc = 0x15DF00u;
            return;
        }
    }
    ctx->pc = 0x15DEE4u;
label_15dee4:
    // 0x15dee4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15dee8:
    // 0x15dee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15deec:
    // 0x15deec: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15def0:
    // 0x15def0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15def4:
    // 0x15def4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15def8:
    // 0x15def8: 0x60f809  jalr        $v1
label_15defc:
    if (ctx->pc == 0x15DEFCu) {
        ctx->pc = 0x15DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEF8u;
        // 0x15defc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF00u;
        goto label_fallthrough_0x15def8;
    }
    ctx->pc = 0x15DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF00u);
        ctx->pc = 0x15DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEF8u;
        // 0x15defc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DEF8u, 0x15DF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15def8:
    ctx->pc = 0x15DF00u;
}
