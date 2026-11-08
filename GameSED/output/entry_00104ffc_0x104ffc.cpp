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

// Function: entry_00104ffc
// Address: 0x104ffc - 0x105068
void entry_00104ffc_0x104ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ffc_0x104ffc");
#endif

    switch (ctx->pc) {
        case 0x105004u: goto label_105004;
        case 0x10500cu: goto label_10500c;
        case 0x10503cu: goto label_10503c;
        case 0x105044u: goto label_105044;
        case 0x105050u: goto label_105050;
        case 0x10505cu: goto label_10505c;
        default: break;
    }

    ctx->pc = 0x104ffcu;

    // 0x104ffc: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x104FFCu;
    SET_GPR_U32(ctx, 31, 0x105004u);
    ctx->pc = 0x105000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FFCu;
    // 0x105000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x104FFCu, 0x105004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105004u;
label_105004:
    // 0x105004: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x105004u;
    SET_GPR_U32(ctx, 31, 0x10500Cu);
    ctx->pc = 0x105008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105004u;
    // 0x105008: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x105004u, 0x10500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10500Cu;
label_10500c:
    // 0x10500c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10500cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x105010: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x105010u;
    {
        const bool branch_taken_0x105010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105010u;
        // 0x105014: 0x2470f200  addiu       $s0, $v1, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105010) {
            ctx->pc = 0x105068u;
            return;
        }
    }
    ctx->pc = 0x105018u;
    // 0x105018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10501c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10501cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x105020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x105024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105028: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10502c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x10502cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105030: 0x240b01c0  addiu       $t3, $zero, 0x1C0
    ctx->pc = 0x105030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x105034: 0xc06acf0  jal         func_1AB3C0
    ctx->pc = 0x105034u;
    SET_GPR_U32(ctx, 31, 0x10503Cu);
    ctx->pc = 0x105038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105034u;
    // 0x105038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3C0u, 0x105034u, 0x10503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10503Cu;
label_10503c:
    // 0x10503c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x10503Cu;
    SET_GPR_U32(ctx, 31, 0x105044u);
    ctx->pc = 0x105040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10503Cu;
    // 0x105040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x10503Cu, 0x105044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105044u;
label_105044:
    // 0x105044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105048: 0xc06ad40  jal         func_1AB500
    ctx->pc = 0x105048u;
    SET_GPR_U32(ctx, 31, 0x105050u);
    ctx->pc = 0x10504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105048u;
    // 0x10504c: 0x8f8588a8  lw          $a1, -0x7758($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB500u, 0x105048u, 0x105050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105050u;
label_105050:
    // 0x105050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x105050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105054: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x105054u;
    SET_GPR_U32(ctx, 31, 0x10505Cu);
    ctx->pc = 0x105058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105054u;
    // 0x105058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x105054u, 0x10505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10505Cu;
label_10505c:
    // 0x10505c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10505Cu;
    {
        const bool branch_taken_0x10505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10505Cu;
        // 0x105060: 0x8f838c50  lw          $v1, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10505c) {
            ctx->pc = 0x1050B0u;
            return;
        }
    }
    ctx->pc = 0x105064u;
    // 0x105064: 0x0  nop
    ctx->pc = 0x105064u;
    // NOP
    ctx->pc = 0x105068u;
}
