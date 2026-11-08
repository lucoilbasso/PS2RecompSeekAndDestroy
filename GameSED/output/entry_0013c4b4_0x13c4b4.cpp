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

// Function: entry_0013c4b4
// Address: 0x13c4b4 - 0x13c540
void entry_0013c4b4_0x13c4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c4b4_0x13c4b4");
#endif

    switch (ctx->pc) {
        case 0x13c4c0u: goto label_13c4c0;
        case 0x13c4c8u: goto label_13c4c8;
        case 0x13c4d0u: goto label_13c4d0;
        case 0x13c4d8u: goto label_13c4d8;
        case 0x13c4f0u: goto label_13c4f0;
        case 0x13c510u: goto label_13c510;
        case 0x13c52cu: goto label_13c52c;
        default: break;
    }

    ctx->pc = 0x13c4b4u;

    // 0x13c4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4b8: 0xc050b74  jal         func_142DD0
    ctx->pc = 0x13C4B8u;
    SET_GPR_U32(ctx, 31, 0x13C4C0u);
    ctx->pc = 0x13C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4B8u;
    // 0x13c4bc: 0xac510018  sw          $s1, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142DD0u, 0x13C4B8u, 0x13C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4C0u;
label_13c4c0:
    // 0x13c4c0: 0xc0527cc  jal         func_149F30
    ctx->pc = 0x13C4C0u;
    SET_GPR_U32(ctx, 31, 0x13C4C8u);
    ctx->pc = 0x149F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149F30u, 0x13C4C0u, 0x13C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4C8u;
label_13c4c8:
    // 0x13c4c8: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x13C4C8u;
    SET_GPR_U32(ctx, 31, 0x13C4D0u);
    ctx->pc = 0x13C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4C8u;
    // 0x13c4cc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x13C4C8u, 0x13C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4D0u;
label_13c4d0:
    // 0x13c4d0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x13C4D0u;
    SET_GPR_U32(ctx, 31, 0x13C4D8u);
    ctx->pc = 0x13C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4D0u;
    // 0x13c4d4: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x13C4D0u, 0x13C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4D8u;
label_13c4d8:
    // 0x13c4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x13c4e0: 0x2442edc8  addiu       $v0, $v0, -0x1238
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962632));
    // 0x13c4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4e8: 0xc061258  jal         func_184960
    ctx->pc = 0x13C4E8u;
    SET_GPR_U32(ctx, 31, 0x13C4F0u);
    ctx->pc = 0x13C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4E8u;
    // 0x13c4ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x13C4E8u, 0x13C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4F0u;
label_13c4f0:
    // 0x13c4f0: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x13c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    // 0x13c4f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13c4f8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13c4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c500: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13c508: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x13C508u;
    SET_GPR_U32(ctx, 31, 0x13C510u);
    ctx->pc = 0x13C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C508u;
    // 0x13c50c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x13C508u, 0x13C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C510u;
label_13c510:
    // 0x13c510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13c514: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x13c514u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x13c518: 0xac300214  sw          $s0, 0x214($at)
    ctx->pc = 0x13c518u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 532), GPR_U32(ctx, 16));
    // 0x13c51c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13c520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c524: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x13C524u;
    SET_GPR_U32(ctx, 31, 0x13C52Cu);
    ctx->pc = 0x13C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C524u;
    // 0x13c528: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x13C524u, 0x13C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C52Cu;
label_13c52c:
    // 0x13c52c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x13c52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c530: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x13c530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c534: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x13c534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c538: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x13c538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13c53c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x13c53cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x13c540u;
}
