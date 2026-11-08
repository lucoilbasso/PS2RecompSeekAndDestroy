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

// Function: _decPicture
// Address: 0x1c2ab0 - 0x1c2b7c
void _decPicture_0x1c2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decPicture_0x1c2ab0");
#endif

    switch (ctx->pc) {
        case 0x1c2aecu: goto label_1c2aec;
        case 0x1c2b4cu: goto label_1c2b4c;
        case 0x1c2b54u: goto label_1c2b54;
        default: break;
    }

    ctx->pc = 0x1c2ab0u;

    // 0x1c2ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2ab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2abc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ac4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c2ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c2ac8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c2acc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2ACCu;
    {
        const bool branch_taken_0x1c2acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ACCu;
        // 0x1c2ad0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2acc) {
            ctx->pc = 0x1C2AF8u;
            goto label_1c2af8;
        }
    }
    ctx->pc = 0x1C2AD4u;
    // 0x1c2ad4: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1c2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c2ad8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2AD8u;
    {
        const bool branch_taken_0x1c2ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AD8u;
        // 0x1c2adc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ad8) {
            ctx->pc = 0x1C2AF8u;
            goto label_1c2af8;
        }
    }
    ctx->pc = 0x1C2AE0u;
    // 0x1c2ae0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c2ae4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C2AE4u;
    SET_GPR_U32(ctx, 31, 0x1C2AECu);
    ctx->pc = 0x1C2AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AE4u;
    // 0x1c2ae8: 0x24a5b6a8  addiu       $a1, $a1, -0x4958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C2AE4u, 0x1C2AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AECu;
label_1c2aec:
    // 0x1c2aec: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1c2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1c2af0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c2af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2af8:
    // 0x1c2af8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2AF8u;
    {
        const bool branch_taken_0x1c2af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AF8u;
        // 0x1c2afc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2af8) {
            ctx->pc = 0x1C2B34u;
            goto label_1c2b34;
        }
    }
    ctx->pc = 0x1C2B00u;
    // 0x1c2b00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2B00u;
    {
        const bool branch_taken_0x1c2b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B00u;
        // 0x1c2b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b00) {
            ctx->pc = 0x1C2B18u;
            goto label_1c2b18;
        }
    }
    ctx->pc = 0x1C2B08u;
    // 0x1c2b08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2B08u;
    {
        const bool branch_taken_0x1c2b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B08u;
        // 0x1c2b0c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b08) {
            ctx->pc = 0x1C2B2Cu;
            goto label_1c2b2c;
        }
    }
    ctx->pc = 0x1C2B10u;
    // 0x1c2b10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2B10u;
    {
        const bool branch_taken_0x1c2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B10u;
        // 0x1c2b14: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b10) {
            ctx->pc = 0x1C2B40u;
            goto label_1c2b40;
        }
    }
    ctx->pc = 0x1C2B18u;
label_1c2b18:
    // 0x1c2b18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2b1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2B1Cu;
    {
        const bool branch_taken_0x1c2b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B1Cu;
        // 0x1c2b20: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b1c) {
            ctx->pc = 0x1C2B3Cu;
            goto label_1c2b3c;
        }
    }
    ctx->pc = 0x1C2B24u;
    // 0x1c2b24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2B24u;
    {
        const bool branch_taken_0x1c2b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B24u;
        // 0x1c2b28: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b24) {
            ctx->pc = 0x1C2B4Cu;
            goto label_1c2b4c;
        }
    }
    ctx->pc = 0x1C2B2Cu;
label_1c2b2c:
    // 0x1c2b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2B2Cu;
    {
        const bool branch_taken_0x1c2b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B2Cu;
        // 0x1c2b30: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b2c) {
            ctx->pc = 0x1C2B4Cu;
            goto label_1c2b4c;
        }
    }
    ctx->pc = 0x1C2B34u;
label_1c2b34:
    // 0x1c2b34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2B34u;
    {
        const bool branch_taken_0x1c2b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B34u;
        // 0x1c2b38: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b34) {
            ctx->pc = 0x1C2B4Cu;
            goto label_1c2b4c;
        }
    }
    ctx->pc = 0x1C2B3Cu;
label_1c2b3c:
    // 0x1c2b3c: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x1c2b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_1c2b40:
    // 0x1c2b40: 0x24a5b6c8  addiu       $a1, $a1, -0x4938
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948552));
    // 0x1c2b44: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C2B44u;
    SET_GPR_U32(ctx, 31, 0x1C2B4Cu);
    ctx->pc = 0x1C2B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B44u;
    // 0x1c2b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C2B44u, 0x1C2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B4Cu;
label_1c2b4c:
    // 0x1c2b4c: 0xc070376  jal         func_1C0DD8
    ctx->pc = 0x1C2B4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B54u);
    ctx->pc = 0x1C2B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B4Cu;
    // 0x1c2b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0DD8u, 0x1C2B4Cu, 0x1C2B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B54u;
label_1c2b54:
    // 0x1c2b54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b58: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2B58u;
    {
        const bool branch_taken_0x1c2b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B58u;
        // 0x1c2b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b58) {
            ctx->pc = 0x1C2B64u;
            goto label_1c2b64;
        }
    }
    ctx->pc = 0x1C2B60u;
    // 0x1c2b60: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1c2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1c2b64:
    // 0x1c2b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2b68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c2b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c2b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B74u;
        // 0x1c2b78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B7Cu;
}
