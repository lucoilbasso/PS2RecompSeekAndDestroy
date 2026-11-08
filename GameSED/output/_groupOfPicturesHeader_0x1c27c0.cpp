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

// Function: _groupOfPicturesHeader
// Address: 0x1c27c0 - 0x1c2860
void _groupOfPicturesHeader_0x1c27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_groupOfPicturesHeader_0x1c27c0");
#endif

    switch (ctx->pc) {
        case 0x1c27f0u: goto label_1c27f0;
        case 0x1c27fcu: goto label_1c27fc;
        case 0x1c2808u: goto label_1c2808;
        case 0x1c2814u: goto label_1c2814;
        case 0x1c2820u: goto label_1c2820;
        case 0x1c282cu: goto label_1c282c;
        case 0x1c2838u: goto label_1c2838;
        case 0x1c2848u: goto label_1c2848;
        default: break;
    }

    ctx->pc = 0x1c27c0u;

    // 0x1c27c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c27c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c27cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c27ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c27d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c27d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1c27dc: 0x8e020850  lw          $v0, 0x850($s0)
    ctx->pc = 0x1c27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
    // 0x1c27e0: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x1c27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
    // 0x1c27e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c27e8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C27E8u;
    SET_GPR_U32(ctx, 31, 0x1C27F0u);
    ctx->pc = 0x1C27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27E8u;
    // 0x1c27ec: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C27E8u, 0x1C27F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27F0u;
label_1c27f0:
    // 0x1c27f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c27f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27f4: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C27F4u;
    SET_GPR_U32(ctx, 31, 0x1C27FCu);
    ctx->pc = 0x1C27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27F4u;
    // 0x1c27f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C27F4u, 0x1C27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27FCu;
label_1c27fc:
    // 0x1c27fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c27fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2800: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2800u;
    SET_GPR_U32(ctx, 31, 0x1C2808u);
    ctx->pc = 0x1C2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2800u;
    // 0x1c2804: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2800u, 0x1C2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2808u;
label_1c2808:
    // 0x1c2808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c280c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C280Cu;
    SET_GPR_U32(ctx, 31, 0x1C2814u);
    ctx->pc = 0x1C2810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C280Cu;
    // 0x1c2810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C280Cu, 0x1C2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2814u;
label_1c2814:
    // 0x1c2814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2818: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2818u;
    SET_GPR_U32(ctx, 31, 0x1C2820u);
    ctx->pc = 0x1C281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2818u;
    // 0x1c281c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2818u, 0x1C2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2820u;
label_1c2820:
    // 0x1c2820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2824: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2824u;
    SET_GPR_U32(ctx, 31, 0x1C282Cu);
    ctx->pc = 0x1C2828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2824u;
    // 0x1c2828: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2824u, 0x1C282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C282Cu;
label_1c282c:
    // 0x1c282c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c282cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2830: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2830u;
    SET_GPR_U32(ctx, 31, 0x1C2838u);
    ctx->pc = 0x1C2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2830u;
    // 0x1c2834: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2830u, 0x1C2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2838u;
label_1c2838:
    // 0x1c2838: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x1c2838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x1c283c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2840: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2840u;
    SET_GPR_U32(ctx, 31, 0x1C2848u);
    ctx->pc = 0x1C2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2840u;
    // 0x1c2844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2840u, 0x1C2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2848u;
label_1c2848:
    // 0x1c2848: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x1c2848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x1c284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2858: 0x80708fa  j           func_1C23E8
    ctx->pc = 0x1C2858u;
    ctx->pc = 0x1C285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2858u;
    // 0x1c285c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C23E8u;
    _extensionAndUserData_0x1c23e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2860u;
}
