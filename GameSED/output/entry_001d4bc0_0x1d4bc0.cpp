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

// Function: entry_001d4bc0
// Address: 0x1d4bc0 - 0x1d4c10
void entry_001d4bc0_0x1d4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4bc0_0x1d4bc0");
#endif

    switch (ctx->pc) {
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4c00u: goto label_1d4c00;
        default: break;
    }

    ctx->pc = 0x1d4bc0u;

    // 0x1d4bc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4bc4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d4bc8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d4bcc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D4BCCu;
    {
        const bool branch_taken_0x1d4bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4bcc) {
            ctx->pc = 0x1D4BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4BCCu;
            // 0x1d4bd0: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C10u;
            return;
        }
    }
    ctx->pc = 0x1D4BD4u;
    // 0x1d4bd4: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1d4bd8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4BD8u;
    {
        const bool branch_taken_0x1d4bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4bd8) {
            ctx->pc = 0x1D4BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4BD8u;
            // 0x1d4bdc: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C10u;
            return;
        }
    }
    ctx->pc = 0x1D4BE0u;
    // 0x1d4be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4be4: 0xc075487  jal         func_1D521C
    ctx->pc = 0x1D4BE4u;
    SET_GPR_U32(ctx, 31, 0x1D4BECu);
    ctx->pc = 0x1D4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BE4u;
    // 0x1d4be8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D521Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D521Cu, 0x1D4BE4u, 0x1D4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bf4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d4bf8: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1D4BF8u;
    SET_GPR_U32(ctx, 31, 0x1D4C00u);
    ctx->pc = 0x1D4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BF8u;
    // 0x1d4bfc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1D4BF8u, 0x1D4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C00u;
label_1d4c00:
    // 0x1d4c00: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D4C00u;
    {
        const bool branch_taken_0x1d4c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c00) {
            ctx->pc = 0x1D4C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C00u;
            // 0x1d4c04: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C70u;
            return;
        }
    }
    ctx->pc = 0x1D4C08u;
    // 0x1d4c08: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1D4C08u;
    {
        const bool branch_taken_0x1d4c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C08u;
        // 0x1d4c0c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c08) {
            ctx->pc = 0x1D4DF8u;
            return;
        }
    }
    ctx->pc = 0x1D4C10u;
}
