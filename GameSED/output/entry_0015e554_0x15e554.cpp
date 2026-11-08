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

// Function: entry_0015e554
// Address: 0x15e554 - 0x15e5a8
void entry_0015e554_0x15e554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e554_0x15e554");
#endif

    ctx->pc = 0x15e554u;

label_15e554:
    // 0x15e554: 0x661ff7e  bgez        $s3, . + 4 + (-0x82 << 2)
label_15e558:
    if (ctx->pc == 0x15E558u) {
        ctx->pc = 0x15E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E554u;
        // 0x15e558: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E55Cu;
        goto label_15e55c;
    }
    ctx->pc = 0x15E554u;
    {
        const bool branch_taken_0x15e554 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x15E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E554u;
        // 0x15e558: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e554) {
            ctx->pc = 0x15E350u;
            return;
        }
    }
    ctx->pc = 0x15E55Cu;
label_15e55c:
    // 0x15e55c: 0x26900de0  addiu       $s0, $s4, 0xDE0
    ctx->pc = 0x15e55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3552));
label_15e560:
    // 0x15e560: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e564:
    // 0x15e564: 0x31343  sra         $v0, $v1, 13
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 13));
label_15e568:
    // 0x15e568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e56c:
    // 0x15e56c: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_15e570:
    if (ctx->pc == 0x15E570u) {
        ctx->pc = 0x15E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E56Cu;
        // 0x15e570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E574u;
        goto label_15e574;
    }
    ctx->pc = 0x15E56Cu;
    {
        const bool branch_taken_0x15e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e56c) {
            ctx->pc = 0x15E570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E56Cu;
            // 0x15e570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E764u;
            return;
        }
    }
    ctx->pc = 0x15E574u;
label_15e574:
    // 0x15e574: 0x5640002a  bnel        $s2, $zero, . + 4 + (0x2A << 2)
label_15e578:
    if (ctx->pc == 0x15E578u) {
        ctx->pc = 0x15E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E574u;
        // 0x15e578: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E57Cu;
        goto label_15e57c;
    }
    ctx->pc = 0x15E574u;
    {
        const bool branch_taken_0x15e574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e574) {
            ctx->pc = 0x15E578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E574u;
            // 0x15e578: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E620u;
            return;
        }
    }
    ctx->pc = 0x15E57Cu;
label_15e57c:
    // 0x15e57c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e580:
    // 0x15e580: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x15e580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_15e584:
    // 0x15e584: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e588:
    if (ctx->pc == 0x15E588u) {
        ctx->pc = 0x15E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E584u;
        // 0x15e588: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E58Cu;
        goto label_15e58c;
    }
    ctx->pc = 0x15E584u;
    {
        const bool branch_taken_0x15e584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E584u;
        // 0x15e588: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e584) {
            ctx->pc = 0x15E5A8u;
            return;
        }
    }
    ctx->pc = 0x15E58Cu;
label_15e58c:
    // 0x15e58c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e590:
    // 0x15e590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e594:
    // 0x15e594: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e598:
    // 0x15e598: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e59c:
    // 0x15e59c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e5a0:
    // 0x15e5a0: 0x60f809  jalr        $v1
label_15e5a4:
    if (ctx->pc == 0x15E5A4u) {
        ctx->pc = 0x15E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5A0u;
        // 0x15e5a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5A8u;
        goto label_fallthrough_0x15e5a0;
    }
    ctx->pc = 0x15E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E5A8u);
        ctx->pc = 0x15E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5A0u;
        // 0x15e5a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5A0u, 0x15E5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e5a0:
    ctx->pc = 0x15E5A8u;
}
