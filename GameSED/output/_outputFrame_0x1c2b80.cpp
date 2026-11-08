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

// Function: _outputFrame
// Address: 0x1c2b80 - 0x1c2c10
void _outputFrame_0x1c2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_outputFrame_0x1c2b80");
#endif

    switch (ctx->pc) {
        case 0x1c2bc0u: goto label_1c2bc0;
        case 0x1c2becu: goto label_1c2bec;
        default: break;
    }

    ctx->pc = 0x1c2b80u;

    // 0x1c2b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2b84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c2b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2b8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2b90: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C2B90u;
    {
        const bool branch_taken_0x1c2b90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B90u;
        // 0x1c2b94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b90) {
            ctx->pc = 0x1C2BECu;
            goto label_1c2bec;
        }
    }
    ctx->pc = 0x1C2B98u;
    // 0x1c2b98: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c2b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ba0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2BA0u;
    {
        const bool branch_taken_0x1c2ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BA0u;
        // 0x1c2ba4: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ba0) {
            ctx->pc = 0x1C2BC8u;
            goto label_1c2bc8;
        }
    }
    ctx->pc = 0x1C2BA8u;
    // 0x1c2ba8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2BA8u;
    {
        const bool branch_taken_0x1c2ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2ba8) {
            ctx->pc = 0x1C2BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2BA8u;
            // 0x1c2bac: 0x8e0501b8  lw          $a1, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2BB4u;
            goto label_1c2bb4;
        }
    }
    ctx->pc = 0x1C2BB0u;
    // 0x1c2bb0: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x1c2bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_1c2bb4:
    // 0x1c2bb4: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c2bb8: 0xc070cec  jal         func_1C33B0
    ctx->pc = 0x1C2BB8u;
    SET_GPR_U32(ctx, 31, 0x1C2BC0u);
    ctx->pc = 0x1C2BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BB8u;
    // 0x1c2bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33B0u, 0x1C2BB8u, 0x1C2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BC0u;
label_1c2bc0:
    // 0x1c2bc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2BC0u;
    {
        const bool branch_taken_0x1c2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BC0u;
        // 0x1c2bc4: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc0) {
            ctx->pc = 0x1C2BF0u;
            goto label_1c2bf0;
        }
    }
    ctx->pc = 0x1C2BC8u;
label_1c2bc8:
    // 0x1c2bc8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2BC8u;
    {
        const bool branch_taken_0x1c2bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2bc8) {
            ctx->pc = 0x1C2BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2BC8u;
            // 0x1c2bcc: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2BDCu;
            goto label_1c2bdc;
        }
    }
    ctx->pc = 0x1C2BD0u;
    // 0x1c2bd0: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x1c2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1c2bd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2BD4u;
    {
        const bool branch_taken_0x1c2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BD4u;
        // 0x1c2bd8: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd4) {
            ctx->pc = 0x1C2BE0u;
            goto label_1c2be0;
        }
    }
    ctx->pc = 0x1C2BDCu;
label_1c2bdc:
    // 0x1c2bdc: 0x8e0601d8  lw          $a2, 0x1D8($s0)
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_1c2be0:
    // 0x1c2be0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c2be4: 0xc070d30  jal         func_1C34C0
    ctx->pc = 0x1C2BE4u;
    SET_GPR_U32(ctx, 31, 0x1C2BECu);
    ctx->pc = 0x1C2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BE4u;
    // 0x1c2be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34C0u, 0x1C2BE4u, 0x1C2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BECu;
label_1c2bec:
    // 0x1c2bec: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_1c2bf0:
    // 0x1c2bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2bf4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2BF4u;
    {
        const bool branch_taken_0x1c2bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BF4u;
        // 0x1c2bf8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bf4) {
            ctx->pc = 0x1C2C04u;
            goto label_1c2c04;
        }
    }
    ctx->pc = 0x1C2BFCu;
    // 0x1c2bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2c00: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1c2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_1c2c04:
    // 0x1c2c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C08u;
        // 0x1c2c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2C10u;
}
