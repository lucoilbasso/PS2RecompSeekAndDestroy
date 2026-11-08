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

// Function: HandleEvent__9ApcObjRscP5BcObji
// Address: 0x103ab8 - 0x103b60
void HandleEvent__9ApcObjRscP5BcObji_0x103ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__9ApcObjRscP5BcObji_0x103ab8");
#endif

    switch (ctx->pc) {
        case 0x103adcu: goto label_103adc;
        case 0x103b20u: goto label_103b20;
        default: break;
    }

    ctx->pc = 0x103ab8u;

    // 0x103ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103ac0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103ad0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x103ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x103ad4: 0xc06851a  jal         func_1A1468
    ctx->pc = 0x103AD4u;
    SET_GPR_U32(ctx, 31, 0x103ADCu);
    ctx->pc = 0x103AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AD4u;
    // 0x103ad8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1468u, 0x103AD4u, 0x103ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103ADCu;
label_103adc:
    // 0x103adc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x103adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x103ae0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x103ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x103ae4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x103ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x103ae8: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x103AE8u;
    {
        const bool branch_taken_0x103ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x103ae8) {
            ctx->pc = 0x103AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103AE8u;
            // 0x103aec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103B4Cu;
            goto label_103b4c;
        }
    }
    ctx->pc = 0x103AF0u;
    // 0x103af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103af4: 0x56420015  bnel        $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x103AF4u;
    {
        const bool branch_taken_0x103af4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x103af4) {
            ctx->pc = 0x103AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103AF4u;
            // 0x103af8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103B4Cu;
            goto label_103b4c;
        }
    }
    ctx->pc = 0x103AFCu;
    // 0x103afc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x103afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x103b00: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x103B00u;
    {
        const bool branch_taken_0x103b00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x103B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B00u;
        // 0x103b04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b00) {
            ctx->pc = 0x103B48u;
            goto label_103b48;
        }
    }
    ctx->pc = 0x103B08u;
    // 0x103b08: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x103b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x103b0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103b10: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103B10u;
    {
        const bool branch_taken_0x103b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x103b10) {
            ctx->pc = 0x103B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103B10u;
            // 0x103b14: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103B20u;
            goto label_103b20;
        }
    }
    ctx->pc = 0x103B18u;
    // 0x103b18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x103B18u;
    {
        const bool branch_taken_0x103b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B18u;
        // 0x103b1c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b18) {
            ctx->pc = 0x103B48u;
            goto label_103b48;
        }
    }
    ctx->pc = 0x103B20u;
label_103b20:
    // 0x103b20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x103b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x103b24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103b28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103B28u;
    {
        const bool branch_taken_0x103b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B28u;
        // 0x103b2c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b28) {
            ctx->pc = 0x103B48u;
            goto label_103b48;
        }
    }
    ctx->pc = 0x103B30u;
    // 0x103b30: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x103b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x103b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103b38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103b3c: 0x5471fff8  bnel        $v1, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x103B3Cu;
    {
        const bool branch_taken_0x103b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x103b3c) {
            ctx->pc = 0x103B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103B3Cu;
            // 0x103b40: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103b20;
        }
    }
    ctx->pc = 0x103B44u;
    // 0x103b44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x103b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_103b48:
    // 0x103b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103b4c:
    // 0x103b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103b50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103b54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x103b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103b58: 0x3e00008  jr          $ra
    ctx->pc = 0x103B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B58u;
        // 0x103b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103B60u;
}
