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

// Function: entry_0015f690
// Address: 0x15f690 - 0x15f710
void entry_0015f690_0x15f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f690_0x15f690");
#endif

    switch (ctx->pc) {
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f700u: goto label_15f700;
        case 0x15f708u: goto label_15f708;
        default: break;
    }

    ctx->pc = 0x15f690u;

label_15f690:
    // 0x15f690: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f694:
    // 0x15f694: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15f698:
    // 0x15f698: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f69c:
    // 0x15f69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f6a0:
    // 0x15f6a0: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15f6a4:
    // 0x15f6a4: 0x24170f30  addiu       $s7, $zero, 0xF30
    ctx->pc = 0x15f6a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
label_15f6a8:
    // 0x15f6a8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15f6ac:
    // 0x15f6ac: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x15f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_15f6b0:
    // 0x15f6b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f6b4:
    // 0x15f6b4: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x15f6b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_15f6b8:
    // 0x15f6b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f6bc:
    // 0x15f6bc: 0xae07012c  sw          $a3, 0x12C($s0)
    ctx->pc = 0x15f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 7));
label_15f6c0:
    // 0x15f6c0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f6c4:
    // 0x15f6c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15f6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15f6c8:
    // 0x15f6c8: 0x60f809  jalr        $v1
label_15f6cc:
    if (ctx->pc == 0x15F6CCu) {
        ctx->pc = 0x15F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C8u;
        // 0x15f6cc: 0xaeb00f38  sw          $s0, 0xF38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3896), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6D0u;
        goto label_15f6d0;
    }
    ctx->pc = 0x15F6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F6D0u);
        ctx->pc = 0x15F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C8u;
        // 0x15f6cc: 0xaeb00f38  sw          $s0, 0xF38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3896), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6C8u, 0x15F6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F6D0u;
label_15f6d0:
    // 0x15f6d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f6d4:
    // 0x15f6d4: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15f6d8:
    // 0x15f6d8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_15f6dc:
    // 0x15f6dc: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15f6e0:
    // 0x15f6e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f6e4:
    // 0x15f6e4: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15f6e8:
    // 0x15f6e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f6ec:
    // 0x15f6ec: 0x26940078  addiu       $s4, $s4, 0x78
    ctx->pc = 0x15f6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_15f6f0:
    // 0x15f6f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15f6f4:
    // 0x15f6f4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15f6f8:
    // 0x15f6f8: 0x60f809  jalr        $v1
label_15f6fc:
    if (ctx->pc == 0x15F6FCu) {
        ctx->pc = 0x15F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6F8u;
        // 0x15f6fc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F700u;
        goto label_15f700;
    }
    ctx->pc = 0x15F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F700u);
        ctx->pc = 0x15F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6F8u;
        // 0x15f6fc: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6F8u, 0x15F700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F700u;
label_15f700:
    // 0x15f700: 0xc05bedc  jal         func_16FB70
label_15f704:
    if (ctx->pc == 0x15F704u) {
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F708u;
        goto label_15f708;
    }
    ctx->pc = 0x15F700u;
    SET_GPR_U32(ctx, 31, 0x15F708u);
    ctx->pc = 0x15F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F700u;
    // 0x15f704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15F700u, 0x15F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F708u;
label_15f708:
    // 0x15f708: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15f70c:
    // 0x15f70c: 0x0  nop
    ctx->pc = 0x15f70cu;
    // NOP
    ctx->pc = 0x15f710u;
}
