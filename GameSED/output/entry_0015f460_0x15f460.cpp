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

// Function: entry_0015f460
// Address: 0x15f460 - 0x15f4fc
void entry_0015f460_0x15f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f460_0x15f460");
#endif

    switch (ctx->pc) {
        case 0x15f484u: goto label_15f484;
        case 0x15f4a0u: goto label_15f4a0;
        case 0x15f4ccu: goto label_15f4cc;
        case 0x15f4f8u: goto label_15f4f8;
        default: break;
    }

    ctx->pc = 0x15f460u;

label_15f460:
    // 0x15f460: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f464:
    // 0x15f464: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15f468:
    // 0x15f468: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f46c:
    // 0x15f46c: 0xaeb00f34  sw          $s0, 0xF34($s5)
    ctx->pc = 0x15f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3892), GPR_U32(ctx, 16));
label_15f470:
    // 0x15f470: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_15f474:
    // 0x15f474: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f478:
    // 0x15f478: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f47c:
    // 0x15f47c: 0x60f809  jalr        $v1
label_15f480:
    if (ctx->pc == 0x15F480u) {
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F484u;
        goto label_15f484;
    }
    ctx->pc = 0x15F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F484u);
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F47Cu, 0x15F484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F484u;
label_15f484:
    // 0x15f484: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f488:
    // 0x15f488: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15f48c:
    // 0x15f48c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15f490:
    // 0x15f490: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f494:
    // 0x15f494: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f498:
    // 0x15f498: 0x60f809  jalr        $v1
label_15f49c:
    if (ctx->pc == 0x15F49Cu) {
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4A0u;
        goto label_15f4a0;
    }
    ctx->pc = 0x15F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4A0u);
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F498u, 0x15F4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4A0u;
label_15f4a0:
    // 0x15f4a0: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f4a4:
    // 0x15f4a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f4a8:
    // 0x15f4a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f4ac:
    // 0x15f4ac: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f4b0:
    // 0x15f4b0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15f4b4:
    // 0x15f4b4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15f4b8:
    // 0x15f4b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f4bc:
    // 0x15f4bc: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x15f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_15f4c0:
    // 0x15f4c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f4c4:
    // 0x15f4c4: 0x60f809  jalr        $v1
label_15f4c8:
    if (ctx->pc == 0x15F4C8u) {
        ctx->pc = 0x15F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4C4u;
        // 0x15f4c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4CCu;
        goto label_15f4cc;
    }
    ctx->pc = 0x15F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4CCu);
        ctx->pc = 0x15F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4C4u;
        // 0x15f4c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4C4u, 0x15F4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4CCu;
label_15f4cc:
    // 0x15f4cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f4d0:
    // 0x15f4d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f4d4:
    // 0x15f4d4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15f4d8:
    // 0x15f4d8: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f4dc:
    // 0x15f4dc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f4e0:
    // 0x15f4e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f4e4:
    // 0x15f4e4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15f4e8:
    // 0x15f4e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f4ec:
    // 0x15f4ec: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f4f0:
    // 0x15f4f0: 0x60f809  jalr        $v1
label_15f4f4:
    if (ctx->pc == 0x15F4F4u) {
        ctx->pc = 0x15F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4F0u;
        // 0x15f4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4F8u;
        goto label_15f4f8;
    }
    ctx->pc = 0x15F4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4F8u);
        ctx->pc = 0x15F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4F0u;
        // 0x15f4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4F0u, 0x15F4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4F8u;
label_15f4f8:
    // 0x15f4f8: 0x8ea20fc8  lw          $v0, 0xFC8($s5)
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
    ctx->pc = 0x15f4fcu;
}
