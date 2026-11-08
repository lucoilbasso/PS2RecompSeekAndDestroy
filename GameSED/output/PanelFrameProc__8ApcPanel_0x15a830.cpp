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

// Function: PanelFrameProc__8ApcPanel
// Address: 0x15a830 - 0x15a8f8
void PanelFrameProc__8ApcPanel_0x15a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelFrameProc__8ApcPanel_0x15a830");
#endif

    switch (ctx->pc) {
        case 0x15a858u: goto label_15a858;
        case 0x15a870u: goto label_15a870;
        case 0x15a888u: goto label_15a888;
        case 0x15a8a0u: goto label_15a8a0;
        case 0x15a8b8u: goto label_15a8b8;
        case 0x15a8d0u: goto label_15a8d0;
        case 0x15a8e8u: goto label_15a8e8;
        default: break;
    }

    ctx->pc = 0x15a830u;

    // 0x15a830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a83c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x15a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15a840: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a844: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x15a848: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A848u;
    {
        const bool branch_taken_0x15a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a848) {
            ctx->pc = 0x15A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A848u;
            // 0x15a84c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A85Cu;
            goto label_15a85c;
        }
    }
    ctx->pc = 0x15A850u;
    // 0x15a850: 0xc05834c  jal         func_160D30
    ctx->pc = 0x15A850u;
    SET_GPR_U32(ctx, 31, 0x15A858u);
    ctx->pc = 0x160D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D30u, 0x15A850u, 0x15A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A858u;
label_15a858:
    // 0x15a858: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a85c:
    // 0x15a85c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15a85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x15a860: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A860u;
    {
        const bool branch_taken_0x15a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a860) {
            ctx->pc = 0x15A864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A860u;
            // 0x15a864: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A874u;
            goto label_15a874;
        }
    }
    ctx->pc = 0x15A868u;
    // 0x15a868: 0xc058364  jal         func_160D90
    ctx->pc = 0x15A868u;
    SET_GPR_U32(ctx, 31, 0x15A870u);
    ctx->pc = 0x15A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A868u;
    // 0x15a86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D90u, 0x15A868u, 0x15A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A870u;
label_15a870:
    // 0x15a870: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a874:
    // 0x15a874: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15a874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x15a878: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A878u;
    {
        const bool branch_taken_0x15a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a878) {
            ctx->pc = 0x15A87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A878u;
            // 0x15a87c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A88Cu;
            goto label_15a88c;
        }
    }
    ctx->pc = 0x15A880u;
    // 0x15a880: 0xc0571e4  jal         func_15C790
    ctx->pc = 0x15A880u;
    SET_GPR_U32(ctx, 31, 0x15A888u);
    ctx->pc = 0x15A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A880u;
    // 0x15a884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C790u, 0x15A880u, 0x15A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A888u;
label_15a888:
    // 0x15a888: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a88c:
    // 0x15a88c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15a890: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A890u;
    {
        const bool branch_taken_0x15a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a890) {
            ctx->pc = 0x15A894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A890u;
            // 0x15a894: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8A4u;
            goto label_15a8a4;
        }
    }
    ctx->pc = 0x15A898u;
    // 0x15a898: 0xc0574cc  jal         func_15D330
    ctx->pc = 0x15A898u;
    SET_GPR_U32(ctx, 31, 0x15A8A0u);
    ctx->pc = 0x15A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A898u;
    // 0x15a89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D330u, 0x15A898u, 0x15A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8A0u;
label_15a8a0:
    // 0x15a8a0: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a8a4:
    // 0x15a8a4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15a8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15a8a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8A8u;
    {
        const bool branch_taken_0x15a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8a8) {
            ctx->pc = 0x15A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8A8u;
            // 0x15a8ac: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8BCu;
            goto label_15a8bc;
        }
    }
    ctx->pc = 0x15A8B0u;
    // 0x15a8b0: 0xc057786  jal         func_15DE18
    ctx->pc = 0x15A8B0u;
    SET_GPR_U32(ctx, 31, 0x15A8B8u);
    ctx->pc = 0x15A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8B0u;
    // 0x15a8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DE18u, 0x15A8B0u, 0x15A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8B8u;
label_15a8b8:
    // 0x15a8b8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a8bc:
    // 0x15a8bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15a8c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8C0u;
    {
        const bool branch_taken_0x15a8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8c0) {
            ctx->pc = 0x15A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8C0u;
            // 0x15a8c4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8D4u;
            goto label_15a8d4;
        }
    }
    ctx->pc = 0x15A8C8u;
    // 0x15a8c8: 0xc0579e0  jal         func_15E780
    ctx->pc = 0x15A8C8u;
    SET_GPR_U32(ctx, 31, 0x15A8D0u);
    ctx->pc = 0x15A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8C8u;
    // 0x15a8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E780u, 0x15A8C8u, 0x15A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8D0u;
label_15a8d0:
    // 0x15a8d0: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a8d4:
    // 0x15a8d4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15a8d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8D8u;
    {
        const bool branch_taken_0x15a8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a8d8) {
            ctx->pc = 0x15A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8D8u;
            // 0x15a8dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8ECu;
            goto label_15a8ec;
        }
    }
    ctx->pc = 0x15A8E0u;
    // 0x15a8e0: 0xc057e9e  jal         func_15FA78
    ctx->pc = 0x15A8E0u;
    SET_GPR_U32(ctx, 31, 0x15A8E8u);
    ctx->pc = 0x15A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8E0u;
    // 0x15a8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FA78u, 0x15A8E0u, 0x15A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8E8u;
label_15a8e8:
    // 0x15a8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a8ec:
    // 0x15a8ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15a8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x15A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8F0u;
        // 0x15a8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A8F8u;
}
