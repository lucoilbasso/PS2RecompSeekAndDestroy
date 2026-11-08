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

// Function: entry_0015e350
// Address: 0x15e350 - 0x15e398
void entry_0015e350_0x15e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e350_0x15e350");
#endif

    ctx->pc = 0x15e350u;

label_15e350:
    // 0x15e350: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e354:
    // 0x15e354: 0x31343  sra         $v0, $v1, 13
    ctx->pc = 0x15e354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 13));
label_15e358:
    // 0x15e358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e35c:
    // 0x15e35c: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
label_15e360:
    if (ctx->pc == 0x15E360u) {
        ctx->pc = 0x15E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E35Cu;
        // 0x15e360: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E364u;
        goto label_15e364;
    }
    ctx->pc = 0x15E35Cu;
    {
        const bool branch_taken_0x15e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e35c) {
            ctx->pc = 0x15E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E35Cu;
            // 0x15e360: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E554u;
            return;
        }
    }
    ctx->pc = 0x15E364u;
label_15e364:
    // 0x15e364: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15e368:
    if (ctx->pc == 0x15E368u) {
        ctx->pc = 0x15E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E364u;
        // 0x15e368: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E36Cu;
        goto label_15e36c;
    }
    ctx->pc = 0x15E364u;
    {
        const bool branch_taken_0x15e364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E364u;
        // 0x15e368: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e364) {
            ctx->pc = 0x15E410u;
            return;
        }
    }
    ctx->pc = 0x15E36Cu;
label_15e36c:
    // 0x15e36c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e370:
    // 0x15e370: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x15e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_15e374:
    // 0x15e374: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e378:
    if (ctx->pc == 0x15E378u) {
        ctx->pc = 0x15E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E374u;
        // 0x15e378: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E37Cu;
        goto label_15e37c;
    }
    ctx->pc = 0x15E374u;
    {
        const bool branch_taken_0x15e374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E374u;
        // 0x15e378: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e374) {
            ctx->pc = 0x15E398u;
            return;
        }
    }
    ctx->pc = 0x15E37Cu;
label_15e37c:
    // 0x15e37c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e380:
    // 0x15e380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e384:
    // 0x15e384: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e388:
    // 0x15e388: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e38c:
    // 0x15e38c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e390:
    // 0x15e390: 0x60f809  jalr        $v1
label_15e394:
    if (ctx->pc == 0x15E394u) {
        ctx->pc = 0x15E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E390u;
        // 0x15e394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E398u;
        goto label_fallthrough_0x15e390;
    }
    ctx->pc = 0x15E390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E398u);
        ctx->pc = 0x15E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E390u;
        // 0x15e394: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E390u, 0x15E398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e390:
    ctx->pc = 0x15E398u;
}
