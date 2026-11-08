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

// Function: entry_00165774
// Address: 0x165774 - 0x1657e0
void entry_00165774_0x165774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165774_0x165774");
#endif

    switch (ctx->pc) {
        case 0x16579cu: goto label_16579c;
        case 0x1657a4u: goto label_1657a4;
        case 0x1657acu: goto label_1657ac;
        case 0x1657c8u: goto label_1657c8;
        case 0x1657d4u: goto label_1657d4;
        default: break;
    }

    ctx->pc = 0x165774u;

    // 0x165774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x165774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165778: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x165778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16577c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165784: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x165784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x165788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x165788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16578c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16578Cu;
    {
        const bool branch_taken_0x16578c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16578Cu;
        // 0x165790: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16578c) {
            ctx->pc = 0x1657E0u;
            return;
        }
    }
    ctx->pc = 0x165794u;
    // 0x165794: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x165794u;
    SET_GPR_U32(ctx, 31, 0x16579Cu);
    ctx->pc = 0x165798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165794u;
    // 0x165798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x165794u, 0x16579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16579Cu;
label_16579c:
    // 0x16579c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x16579Cu;
    SET_GPR_U32(ctx, 31, 0x1657A4u);
    ctx->pc = 0x1657A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16579Cu;
    // 0x1657a0: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16579Cu, 0x1657A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657A4u;
label_1657a4:
    // 0x1657a4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1657A4u;
    SET_GPR_U32(ctx, 31, 0x1657ACu);
    ctx->pc = 0x1657A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657A4u;
    // 0x1657a8: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1657A4u, 0x1657ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657ACu;
label_1657ac:
    // 0x1657ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1657acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1657b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1657b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1657b8: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1657b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x1657bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1657bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657c0: 0xc06586e  jal         func_1961B8
    ctx->pc = 0x1657C0u;
    SET_GPR_U32(ctx, 31, 0x1657C8u);
    ctx->pc = 0x1657C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657C0u;
    // 0x1657c4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x1657C0u, 0x1657C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657C8u;
label_1657c8:
    // 0x1657c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1657c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657cc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1657CCu;
    SET_GPR_U32(ctx, 31, 0x1657D4u);
    ctx->pc = 0x1657D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657CCu;
    // 0x1657d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1657CCu, 0x1657D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657D4u;
label_1657d4:
    // 0x1657d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1657d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1657d8: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1657D8u;
    SET_GPR_U32(ctx, 31, 0x1657E0u);
    ctx->pc = 0x1657DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657D8u;
    // 0x1657dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1657D8u, 0x1657E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657E0u;
}
