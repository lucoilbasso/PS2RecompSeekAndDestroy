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

// Function: entry_0015c498
// Address: 0x15c498 - 0x15c534
void entry_0015c498_0x15c498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c498_0x15c498");
#endif

    switch (ctx->pc) {
        case 0x15c4d0u: goto label_15c4d0;
        case 0x15c4fcu: goto label_15c4fc;
        default: break;
    }

    ctx->pc = 0x15c498u;

label_15c498:
    // 0x15c498: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15c498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c49c:
    // 0x15c49c: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15c4a0:
    // 0x15c4a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c4a4:
    // 0x15c4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c4a8:
    // 0x15c4a8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15c4ac:
    // 0x15c4ac: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x15c4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c4b0:
    // 0x15c4b0: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15c4b4:
    // 0x15c4b4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15c4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15c4b8:
    // 0x15c4b8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15c4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15c4bc:
    // 0x15c4bc: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15c4c0:
    // 0x15c4c0: 0xaeb1000c  sw          $s1, 0xC($s5)
    ctx->pc = 0x15c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 17));
label_15c4c4:
    // 0x15c4c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15c4c8:
    // 0x15c4c8: 0x40f809  jalr        $v0
label_15c4cc:
    if (ctx->pc == 0x15C4CCu) {
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C8u;
        // 0x15c4cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4D0u;
        goto label_15c4d0;
    }
    ctx->pc = 0x15C4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C4D0u);
        ctx->pc = 0x15C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4C8u;
        // 0x15c4cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4C8u, 0x15C4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C4D0u;
label_15c4d0:
    // 0x15c4d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c4d4:
    // 0x15c4d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15c4d8:
    // 0x15c4d8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15c4dc:
    // 0x15c4dc: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15c4e0:
    // 0x15c4e0: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15c4e4:
    // 0x15c4e4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15c4e8:
    // 0x15c4e8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15c4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15c4ec:
    // 0x15c4ec: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15c4f0:
    // 0x15c4f0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x15c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_15c4f4:
    // 0x15c4f4: 0xe0f809  jalr        $a3
label_15c4f8:
    if (ctx->pc == 0x15C4F8u) {
        ctx->pc = 0x15C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F4u;
        // 0x15c4f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C4FCu;
        goto label_15c4fc;
    }
    ctx->pc = 0x15C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15C4FCu);
        ctx->pc = 0x15C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4F4u;
        // 0x15c4f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C4F4u, 0x15C4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C4FCu;
label_15c4fc:
    // 0x15c4fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c500:
    // 0x15c500: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x15c500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
label_15c504:
    // 0x15c504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15c508:
    // 0x15c508: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_15c50c:
    if (ctx->pc == 0x15C50Cu) {
        ctx->pc = 0x15C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C508u;
        // 0x15c50c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C510u;
        goto label_15c510;
    }
    ctx->pc = 0x15C508u;
    {
        const bool branch_taken_0x15c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c508) {
            ctx->pc = 0x15C50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C508u;
            // 0x15c50c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C55Cu;
            return;
        }
    }
    ctx->pc = 0x15C510u;
label_15c510:
    // 0x15c510: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15c510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c514:
    // 0x15c514: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c518:
    if (ctx->pc == 0x15C518u) {
        ctx->pc = 0x15C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C514u;
        // 0x15c518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C51Cu;
        goto label_15c51c;
    }
    ctx->pc = 0x15C514u;
    {
        const bool branch_taken_0x15c514 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C514u;
        // 0x15c518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c514) {
            ctx->pc = 0x15C534u;
            return;
        }
    }
    ctx->pc = 0x15C51Cu;
label_15c51c:
    // 0x15c51c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c520:
    // 0x15c520: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c524:
    // 0x15c524: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c528:
    // 0x15c528: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c52c:
    // 0x15c52c: 0x60f809  jalr        $v1
label_15c530:
    if (ctx->pc == 0x15C530u) {
        ctx->pc = 0x15C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C52Cu;
        // 0x15c530: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C534u;
        goto label_fallthrough_0x15c52c;
    }
    ctx->pc = 0x15C52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C534u);
        ctx->pc = 0x15C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C52Cu;
        // 0x15c530: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C52Cu, 0x15C534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15c52c:
    ctx->pc = 0x15C534u;
}
