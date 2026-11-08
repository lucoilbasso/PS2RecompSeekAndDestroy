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

// Function: entry_001075a0
// Address: 0x1075a0 - 0x107608
void entry_001075a0_0x1075a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001075a0_0x1075a0");
#endif

    switch (ctx->pc) {
        case 0x1075b0u: goto label_1075b0;
        case 0x1075ccu: goto label_1075cc;
        case 0x1075d4u: goto label_1075d4;
        case 0x1075fcu: goto label_1075fc;
        default: break;
    }

    ctx->pc = 0x1075a0u;

label_1075a0:
    // 0x1075a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1075a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1075a4:
    // 0x1075a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1075a8:
    // 0x1075a8: 0xc04110c  jal         func_104430
label_1075ac:
    if (ctx->pc == 0x1075ACu) {
        ctx->pc = 0x1075ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075A8u;
        // 0x1075ac: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075B0u;
        goto label_1075b0;
    }
    ctx->pc = 0x1075A8u;
    SET_GPR_U32(ctx, 31, 0x1075B0u);
    ctx->pc = 0x1075ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075A8u;
    // 0x1075ac: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1075A8u, 0x1075B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075B0u;
label_1075b0:
    // 0x1075b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1075b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1075b4:
    // 0x1075b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1075b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1075b8:
    // 0x1075b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1075bc:
    // 0x1075bc: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_1075c0:
    if (ctx->pc == 0x1075C0u) {
        ctx->pc = 0x1075C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075BCu;
        // 0x1075c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075C4u;
        goto label_1075c4;
    }
    ctx->pc = 0x1075BCu;
    {
        const bool branch_taken_0x1075bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1075bc) {
            ctx->pc = 0x1075C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1075BCu;
            // 0x1075c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107608u;
            return;
        }
    }
    ctx->pc = 0x1075C4u;
label_1075c4:
    // 0x1075c4: 0xc06a26e  jal         func_1A89B8
label_1075c8:
    if (ctx->pc == 0x1075C8u) {
        ctx->pc = 0x1075C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075C4u;
        // 0x1075c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075CCu;
        goto label_1075cc;
    }
    ctx->pc = 0x1075C4u;
    SET_GPR_U32(ctx, 31, 0x1075CCu);
    ctx->pc = 0x1075C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075C4u;
    // 0x1075c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1075C4u, 0x1075CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075CCu;
label_1075cc:
    // 0x1075cc: 0xc06a26e  jal         func_1A89B8
label_1075d0:
    if (ctx->pc == 0x1075D0u) {
        ctx->pc = 0x1075D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075CCu;
        // 0x1075d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075D4u;
        goto label_1075d4;
    }
    ctx->pc = 0x1075CCu;
    SET_GPR_U32(ctx, 31, 0x1075D4u);
    ctx->pc = 0x1075D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075CCu;
    // 0x1075d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1075CCu, 0x1075D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075D4u;
label_1075d4:
    // 0x1075d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1075d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1075d8:
    // 0x1075d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1075dc:
    // 0x1075dc: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_1075e0:
    // 0x1075e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1075e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1075e4:
    // 0x1075e4: 0x24a5f650  addiu       $a1, $a1, -0x9B0
    ctx->pc = 0x1075e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964816));
label_1075e8:
    // 0x1075e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1075e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1075ec:
    // 0x1075ec: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1075ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1075f0:
    // 0x1075f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1075f4:
    // 0x1075f4: 0x40f809  jalr        $v0
label_1075f8:
    if (ctx->pc == 0x1075F8u) {
        ctx->pc = 0x1075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F4u;
        // 0x1075f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1075FCu;
        goto label_1075fc;
    }
    ctx->pc = 0x1075F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1075FCu);
        ctx->pc = 0x1075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F4u;
        // 0x1075f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1075F4u, 0x1075FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1075FCu;
label_1075fc:
    // 0x1075fc: 0x10000023  b           . + 4 + (0x23 << 2)
label_107600:
    if (ctx->pc == 0x107600u) {
        ctx->pc = 0x107600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075FCu;
        // 0x107600: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107604u;
        goto label_107604;
    }
    ctx->pc = 0x1075FCu;
    {
        const bool branch_taken_0x1075fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075FCu;
        // 0x107600: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075fc) {
            ctx->pc = 0x10768Cu;
            return;
        }
    }
    ctx->pc = 0x107604u;
label_107604:
    // 0x107604: 0x0  nop
    ctx->pc = 0x107604u;
    // NOP
    ctx->pc = 0x107608u;
}
