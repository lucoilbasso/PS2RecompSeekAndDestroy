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

// Function: sceDevConsPut
// Address: 0x1ad9b8 - 0x1ada88
void sceDevConsPut_0x1ad9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPut_0x1ad9b8");
#endif

    switch (ctx->pc) {
        case 0x1ad9ecu: goto label_1ad9ec;
        case 0x1ada6cu: goto label_1ada6c;
        default: break;
    }

    ctx->pc = 0x1ad9b8u;

    // 0x1ad9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad9bc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ad9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ad9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad9c4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ad9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ad9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad9cc: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x1ad9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ad9d0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD9D0u;
    {
        const bool branch_taken_0x1ad9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9D0u;
        // 0x1ad9d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9d0) {
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD9D8u;
    // 0x1ad9d8: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x1ad9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1ad9dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ad9e0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ad9e4: 0xc06b8f8  jal         func_1AE3E0
    ctx->pc = 0x1AD9E4u;
    SET_GPR_U32(ctx, 31, 0x1AD9ECu);
    ctx->pc = 0x1AD9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9E4u;
    // 0x1ad9e8: 0x673825  or          $a3, $v1, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE3E0u, 0x1AD9E4u, 0x1AD9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9ECu;
label_1ad9ec:
    // 0x1ad9ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ad9f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad9f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AD9F4u;
    {
        const bool branch_taken_0x1ad9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9F4u;
        // 0x1ad9f8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9f4) {
            ctx->pc = 0x1ADA24u;
            goto label_1ada24;
        }
    }
    ctx->pc = 0x1AD9FCu;
label_1ad9fc:
    // 0x1ad9fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ad9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ada00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADA00u;
    {
        const bool branch_taken_0x1ada00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA00u;
        // 0x1ada04: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada00) {
            ctx->pc = 0x1ADA1Cu;
            goto label_1ada1c;
        }
    }
    ctx->pc = 0x1ADA08u;
    // 0x1ada08: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1ada08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ada0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ada0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ada10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ada10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ada14: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ada14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ada18: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ada18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ada1c:
    // 0x1ada1c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADA1Cu;
    {
        const bool branch_taken_0x1ada1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ada1c) {
            ctx->pc = 0x1ADA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADA1Cu;
            // 0x1ada20: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA24u;
            goto label_1ada24;
        }
    }
    ctx->pc = 0x1ADA24u;
label_1ada24:
    // 0x1ada24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ada24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ada28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ada28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ada2c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ada2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ada30: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADA30u;
    {
        const bool branch_taken_0x1ada30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ada30) {
            ctx->pc = 0x1ADA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADA30u;
            // 0x1ada34: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA4Cu;
            goto label_1ada4c;
        }
    }
    ctx->pc = 0x1ADA38u;
    // 0x1ada38: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1ada38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ada3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ada3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ada40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ada44: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ada44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ada48: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ada4c:
    // 0x1ada4c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ada50: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1ada50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1ada54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADA54u;
    {
        const bool branch_taken_0x1ada54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA54u;
        // 0x1ada58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada54) {
            ctx->pc = 0x1ADA7Cu;
            goto label_1ada7c;
        }
    }
    ctx->pc = 0x1ADA5Cu;
    // 0x1ada5c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ada60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada64: 0xc06b74e  jal         func_1ADD38
    ctx->pc = 0x1ADA64u;
    SET_GPR_U32(ctx, 31, 0x1ADA6Cu);
    ctx->pc = 0x1ADA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA64u;
    // 0x1ada68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADD38u, 0x1ADA64u, 0x1ADA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA6Cu;
label_1ada6c:
    // 0x1ada6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ada70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ada70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ada74: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ada74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ada78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ada78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ada7c:
    // 0x1ada7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ada7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ada80: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA80u;
        // 0x1ada84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADA88u;
}
