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

// Function: entry_0015e184
// Address: 0x15e184 - 0x15e1fc
void entry_0015e184_0x15e184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e184_0x15e184");
#endif

    switch (ctx->pc) {
        case 0x15e1d8u: goto label_15e1d8;
        default: break;
    }

    ctx->pc = 0x15e184u;

label_15e184:
    // 0x15e184: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e188:
    // 0x15e188: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_15e18c:
    if (ctx->pc == 0x15E18Cu) {
        ctx->pc = 0x15E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E188u;
        // 0x15e18c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E190u;
        goto label_15e190;
    }
    ctx->pc = 0x15E188u;
    {
        const bool branch_taken_0x15e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e188) {
            ctx->pc = 0x15E18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E188u;
            // 0x15e18c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            return;
        }
    }
    ctx->pc = 0x15E190u;
label_15e190:
    // 0x15e190: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e194:
    // 0x15e194: 0x50c00055  beql        $a2, $zero, . + 4 + (0x55 << 2)
label_15e198:
    if (ctx->pc == 0x15E198u) {
        ctx->pc = 0x15E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E194u;
        // 0x15e198: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E19Cu;
        goto label_15e19c;
    }
    ctx->pc = 0x15E194u;
    {
        const bool branch_taken_0x15e194 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e194) {
            ctx->pc = 0x15E198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E194u;
            // 0x15e198: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2ECu;
            return;
        }
    }
    ctx->pc = 0x15E19Cu;
label_15e19c:
    // 0x15e19c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e1a0:
    // 0x15e1a0: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e1a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e1a4:
    // 0x15e1a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e1a8:
    // 0x15e1a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_15e1ac:
    if (ctx->pc == 0x15E1ACu) {
        ctx->pc = 0x15E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A8u;
        // 0x15e1ac: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1B0u;
        goto label_15e1b0;
    }
    ctx->pc = 0x15E1A8u;
    {
        const bool branch_taken_0x15e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A8u;
        // 0x15e1ac: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1a8) {
            ctx->pc = 0x15E210u;
            return;
        }
    }
    ctx->pc = 0x15E1B0u;
label_15e1b0:
    // 0x15e1b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e1b4:
    // 0x15e1b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e1b8:
    if (ctx->pc == 0x15E1B8u) {
        ctx->pc = 0x15E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1B4u;
        // 0x15e1b8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1BCu;
        goto label_15e1bc;
    }
    ctx->pc = 0x15E1B4u;
    {
        const bool branch_taken_0x15e1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e1b4) {
            ctx->pc = 0x15E1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E1B4u;
            // 0x15e1b8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E200u;
            return;
        }
    }
    ctx->pc = 0x15E1BCu;
label_15e1bc:
    // 0x15e1bc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e1c0:
    // 0x15e1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e1c4:
    // 0x15e1c4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e1c8:
    // 0x15e1c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e1cc:
    // 0x15e1cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e1d0:
    // 0x15e1d0: 0x60f809  jalr        $v1
label_15e1d4:
    if (ctx->pc == 0x15E1D4u) {
        ctx->pc = 0x15E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1D0u;
        // 0x15e1d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1D8u;
        goto label_15e1d8;
    }
    ctx->pc = 0x15E1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E1D8u);
        ctx->pc = 0x15E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1D0u;
        // 0x15e1d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1D0u, 0x15E1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E1D8u;
label_15e1d8:
    // 0x15e1d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e1dc:
    // 0x15e1dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e1e0:
    if (ctx->pc == 0x15E1E0u) {
        ctx->pc = 0x15E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1DCu;
        // 0x15e1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1E4u;
        goto label_15e1e4;
    }
    ctx->pc = 0x15E1DCu;
    {
        const bool branch_taken_0x15e1dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1DCu;
        // 0x15e1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1dc) {
            ctx->pc = 0x15E1FCu;
            return;
        }
    }
    ctx->pc = 0x15E1E4u;
label_15e1e4:
    // 0x15e1e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e1e8:
    // 0x15e1e8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e1ec:
    // 0x15e1ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e1f0:
    // 0x15e1f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e1f4:
    // 0x15e1f4: 0x60f809  jalr        $v1
label_15e1f8:
    if (ctx->pc == 0x15E1F8u) {
        ctx->pc = 0x15E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F4u;
        // 0x15e1f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1FCu;
        goto label_fallthrough_0x15e1f4;
    }
    ctx->pc = 0x15E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E1FCu);
        ctx->pc = 0x15E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F4u;
        // 0x15e1f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1F4u, 0x15E1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e1f4:
    ctx->pc = 0x15E1FCu;
}
