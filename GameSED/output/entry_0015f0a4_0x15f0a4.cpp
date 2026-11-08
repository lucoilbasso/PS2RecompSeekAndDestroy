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

// Function: entry_0015f0a4
// Address: 0x15f0a4 - 0x15f148
void entry_0015f0a4_0x15f0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f0a4_0x15f0a4");
#endif

    switch (ctx->pc) {
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0e4u: goto label_15f0e4;
        case 0x15f110u: goto label_15f110;
        case 0x15f13cu: goto label_15f13c;
        default: break;
    }

    ctx->pc = 0x15f0a4u;

label_15f0a4:
    // 0x15f0a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f0a8:
    // 0x15f0a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15f0ac:
    // 0x15f0ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f0b0:
    // 0x15f0b0: 0xaeb00f34  sw          $s0, 0xF34($s5)
    ctx->pc = 0x15f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3892), GPR_U32(ctx, 16));
label_15f0b4:
    // 0x15f0b4: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_15f0b8:
    // 0x15f0b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f0bc:
    // 0x15f0bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f0c0:
    // 0x15f0c0: 0x60f809  jalr        $v1
label_15f0c4:
    if (ctx->pc == 0x15F0C4u) {
        ctx->pc = 0x15F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C0u;
        // 0x15f0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0C8u;
        goto label_15f0c8;
    }
    ctx->pc = 0x15F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F0C8u);
        ctx->pc = 0x15F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0C0u;
        // 0x15f0c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0C0u, 0x15F0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F0C8u;
label_15f0c8:
    // 0x15f0c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f0cc:
    // 0x15f0cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15f0d0:
    // 0x15f0d0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_15f0d4:
    // 0x15f0d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f0d8:
    // 0x15f0d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f0dc:
    // 0x15f0dc: 0x60f809  jalr        $v1
label_15f0e0:
    if (ctx->pc == 0x15F0E0u) {
        ctx->pc = 0x15F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0DCu;
        // 0x15f0e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F0E4u;
        goto label_15f0e4;
    }
    ctx->pc = 0x15F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F0E4u);
        ctx->pc = 0x15F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0DCu;
        // 0x15f0e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F0DCu, 0x15F0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F0E4u;
label_15f0e4:
    // 0x15f0e4: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f0e8:
    // 0x15f0e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f0ec:
    // 0x15f0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f0f0:
    // 0x15f0f0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x15f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f0f4:
    // 0x15f0f4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15f0f8:
    // 0x15f0f8: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15f0fc:
    // 0x15f0fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f100:
    // 0x15f100: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x15f100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_15f104:
    // 0x15f104: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f108:
    // 0x15f108: 0x60f809  jalr        $v1
label_15f10c:
    if (ctx->pc == 0x15F10Cu) {
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F110u;
        goto label_15f110;
    }
    ctx->pc = 0x15F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F110u);
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F108u, 0x15F110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F110u;
label_15f110:
    // 0x15f110: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f114:
    // 0x15f114: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f118:
    // 0x15f118: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15f11c:
    // 0x15f11c: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f120:
    // 0x15f120: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f124:
    // 0x15f124: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f128:
    // 0x15f128: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15f12c:
    // 0x15f12c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f130:
    // 0x15f130: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f134:
    // 0x15f134: 0x60f809  jalr        $v1
label_15f138:
    if (ctx->pc == 0x15F138u) {
        ctx->pc = 0x15F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F134u;
        // 0x15f138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F13Cu;
        goto label_15f13c;
    }
    ctx->pc = 0x15F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F13Cu);
        ctx->pc = 0x15F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F134u;
        // 0x15f138: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F134u, 0x15F13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F13Cu;
label_15f13c:
    // 0x15f13c: 0x100000ef  b           . + 4 + (0xEF << 2)
label_15f140:
    if (ctx->pc == 0x15F140u) {
        ctx->pc = 0x15F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F13Cu;
        // 0x15f140: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F144u;
        goto label_15f144;
    }
    ctx->pc = 0x15F13Cu;
    {
        const bool branch_taken_0x15f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F13Cu;
        // 0x15f140: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f13c) {
            ctx->pc = 0x15F4FCu;
            return;
        }
    }
    ctx->pc = 0x15F144u;
label_15f144:
    // 0x15f144: 0x0  nop
    ctx->pc = 0x15f144u;
    // NOP
    ctx->pc = 0x15f148u;
}
