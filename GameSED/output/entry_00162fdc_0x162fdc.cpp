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

// Function: entry_00162fdc
// Address: 0x162fdc - 0x163048
void entry_00162fdc_0x162fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162fdc_0x162fdc");
#endif

    switch (ctx->pc) {
        case 0x163004u: goto label_163004;
        case 0x16300cu: goto label_16300c;
        case 0x163014u: goto label_163014;
        case 0x163030u: goto label_163030;
        case 0x16303cu: goto label_16303c;
        default: break;
    }

    ctx->pc = 0x162fdcu;

    // 0x162fdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162fe0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x162fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x162fec: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x162fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x162ff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x162ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x162ff4: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x162FF4u;
    {
        const bool branch_taken_0x162ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FF4u;
        // 0x162ff8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ff4) {
            ctx->pc = 0x163048u;
            return;
        }
    }
    ctx->pc = 0x162FFCu;
    // 0x162ffc: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x162FFCu;
    SET_GPR_U32(ctx, 31, 0x163004u);
    ctx->pc = 0x163000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162FFCu;
    // 0x163000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x162FFCu, 0x163004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163004u;
label_163004:
    // 0x163004: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x163004u;
    SET_GPR_U32(ctx, 31, 0x16300Cu);
    ctx->pc = 0x163008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163004u;
    // 0x163008: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x163004u, 0x16300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16300Cu;
label_16300c:
    // 0x16300c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x16300Cu;
    SET_GPR_U32(ctx, 31, 0x163014u);
    ctx->pc = 0x163010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16300Cu;
    // 0x163010: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16300Cu, 0x163014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163014u;
label_163014:
    // 0x163014: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x163014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16301c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x163020: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x163024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163028: 0xc06586e  jal         func_1961B8
    ctx->pc = 0x163028u;
    SET_GPR_U32(ctx, 31, 0x163030u);
    ctx->pc = 0x16302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163028u;
    // 0x16302c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x163028u, 0x163030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163030u;
label_163030:
    // 0x163030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163034: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x163034u;
    SET_GPR_U32(ctx, 31, 0x16303Cu);
    ctx->pc = 0x163038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163034u;
    // 0x163038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x163034u, 0x16303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16303Cu;
label_16303c:
    // 0x16303c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x16303cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x163040: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x163040u;
    SET_GPR_U32(ctx, 31, 0x163048u);
    ctx->pc = 0x163044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163040u;
    // 0x163044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x163040u, 0x163048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163048u;
}
