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

// Function: entry_001368b0
// Address: 0x1368b0 - 0x136910
void entry_001368b0_0x1368b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001368b0_0x1368b0");
#endif

    switch (ctx->pc) {
        case 0x1368b8u: goto label_1368b8;
        case 0x1368c0u: goto label_1368c0;
        case 0x1368dcu: goto label_1368dc;
        case 0x1368e8u: goto label_1368e8;
        case 0x136908u: goto label_136908;
        default: break;
    }

    ctx->pc = 0x1368b0u;

label_1368b0:
    // 0x1368b0: 0xc0682b2  jal         func_1A0AC8
label_1368b4:
    if (ctx->pc == 0x1368B4u) {
        ctx->pc = 0x1368B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368B0u;
        // 0x1368b4: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368B8u;
        goto label_1368b8;
    }
    ctx->pc = 0x1368B0u;
    SET_GPR_U32(ctx, 31, 0x1368B8u);
    ctx->pc = 0x1368B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368B0u;
    // 0x1368b4: 0x8e9100dc  lw          $s1, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1368B0u, 0x1368B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368B8u;
label_1368b8:
    // 0x1368b8: 0xc0682b6  jal         func_1A0AD8
label_1368bc:
    if (ctx->pc == 0x1368BCu) {
        ctx->pc = 0x1368BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368B8u;
        // 0x1368bc: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368C0u;
        goto label_1368c0;
    }
    ctx->pc = 0x1368B8u;
    SET_GPR_U32(ctx, 31, 0x1368C0u);
    ctx->pc = 0x1368BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368B8u;
    // 0x1368bc: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1368B8u, 0x1368C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368C0u;
label_1368c0:
    // 0x1368c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1368c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1368c4:
    // 0x1368c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1368c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1368c8:
    // 0x1368c8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1368c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1368cc:
    // 0x1368cc: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x1368ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
label_1368d0:
    // 0x1368d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1368d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1368d4:
    // 0x1368d4: 0xc062774  jal         func_189DD0
label_1368d8:
    if (ctx->pc == 0x1368D8u) {
        ctx->pc = 0x1368D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368D4u;
        // 0x1368d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368DCu;
        goto label_1368dc;
    }
    ctx->pc = 0x1368D4u;
    SET_GPR_U32(ctx, 31, 0x1368DCu);
    ctx->pc = 0x1368D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368D4u;
    // 0x1368d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DD0u, 0x1368D4u, 0x1368DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368DCu;
label_1368dc:
    // 0x1368dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1368dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1368e0:
    // 0x1368e0: 0xc06825c  jal         func_1A0970
label_1368e4:
    if (ctx->pc == 0x1368E4u) {
        ctx->pc = 0x1368E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368E0u;
        // 0x1368e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368E8u;
        goto label_1368e8;
    }
    ctx->pc = 0x1368E0u;
    SET_GPR_U32(ctx, 31, 0x1368E8u);
    ctx->pc = 0x1368E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368E0u;
    // 0x1368e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1368E0u, 0x1368E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368E8u;
label_1368e8:
    // 0x1368e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1368e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1368ec:
    // 0x1368ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1368ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1368f0:
    // 0x1368f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1368f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1368f4:
    // 0x1368f4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1368f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1368f8:
    // 0x1368f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1368f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1368fc:
    // 0x1368fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1368fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136900:
    // 0x136900: 0x60f809  jalr        $v1
label_136904:
    if (ctx->pc == 0x136904u) {
        ctx->pc = 0x136904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136900u;
        // 0x136904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136908u;
        goto label_136908;
    }
    ctx->pc = 0x136900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136908u);
        ctx->pc = 0x136904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136900u;
        // 0x136904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136900u, 0x136908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136908u;
label_136908:
    // 0x136908: 0x10000008  b           . + 4 + (0x8 << 2)
label_13690c:
    if (ctx->pc == 0x13690Cu) {
        ctx->pc = 0x13690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136908u;
        // 0x13690c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136910u;
        goto label_fallthrough_0x136908;
    }
    ctx->pc = 0x136908u;
    {
        const bool branch_taken_0x136908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136908u;
        // 0x13690c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136908) {
            ctx->pc = 0x13692Cu;
            return;
        }
    }
label_fallthrough_0x136908:
    ctx->pc = 0x136910u;
}
