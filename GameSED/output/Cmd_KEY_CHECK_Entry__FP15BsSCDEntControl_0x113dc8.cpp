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

// Function: Cmd_KEY_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x113dc8 - 0x113ed4
void Cmd_KEY_CHECK_Entry__FP15BsSCDEntControl_0x113dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_CHECK_Entry__FP15BsSCDEntControl_0x113dc8");
#endif

    switch (ctx->pc) {
        case 0x113de4u: goto label_113de4;
        case 0x113e10u: goto label_113e10;
        case 0x113ebcu: goto label_113ebc;
        default: break;
    }

    ctx->pc = 0x113dc8u;

    // 0x113dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113dd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x113dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x113ddc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113DDCu;
    SET_GPR_U32(ctx, 31, 0x113DE4u);
    ctx->pc = 0x113DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DDCu;
    // 0x113de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113DDCu, 0x113DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DE4u;
label_113de4:
    // 0x113de4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x113de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dec: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x113decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x113df0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x113df0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113df4: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x113df4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x113df8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x113df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x113dfc: 0x9652c058  lhu         $s2, -0x3FA8($s2)
    ctx->pc = 0x113dfcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294951000)));
    // 0x113e00: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E00u;
    {
        const bool branch_taken_0x113e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E00u;
        // 0x113e04: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e00) {
            ctx->pc = 0x113E14u;
            goto label_113e14;
        }
    }
    ctx->pc = 0x113E08u;
    // 0x113e08: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113E08u;
    SET_GPR_U32(ctx, 31, 0x113E10u);
    ctx->pc = 0x113E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E08u;
    // 0x113e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113E08u, 0x113E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E10u;
label_113e10:
    // 0x113e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113e14:
    // 0x113e14: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x113E14u;
    {
        const bool branch_taken_0x113e14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E14u;
        // 0x113e18: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e14) {
            ctx->pc = 0x113E78u;
            goto label_113e78;
        }
    }
    ctx->pc = 0x113E1Cu;
    // 0x113e1c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x113e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113e24: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E24u;
    {
        const bool branch_taken_0x113e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x113E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E24u;
        // 0x113e28: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e24) {
            ctx->pc = 0x113E38u;
            goto label_113e38;
        }
    }
    ctx->pc = 0x113E2Cu;
    // 0x113e2c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x113e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113E30u;
    {
        const bool branch_taken_0x113e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E30u;
        // 0x113e34: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e30) {
            ctx->pc = 0x113E3Cu;
            goto label_113e3c;
        }
    }
    ctx->pc = 0x113E38u;
label_113e38:
    // 0x113e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113e3c:
    // 0x113e3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113e40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x113e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x113e44: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x113E44u;
    {
        const bool branch_taken_0x113e44 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x113E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E44u;
        // 0x113e48: 0xa4400022  sh          $zero, 0x22($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e44) {
            ctx->pc = 0x113EBCu;
            goto label_113ebc;
        }
    }
    ctx->pc = 0x113E4Cu;
    // 0x113e4c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x113e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113e50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x113e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x113e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113e58: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x113e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x113e5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113E5Cu;
    {
        const bool branch_taken_0x113e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E5Cu;
        // 0x113e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e5c) {
            ctx->pc = 0x113EC0u;
            goto label_113ec0;
        }
    }
    ctx->pc = 0x113E64u;
    // 0x113e64: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x113e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x113e68: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x113E68u;
    {
        const bool branch_taken_0x113e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113e68) {
            ctx->pc = 0x113E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113E68u;
            // 0x113e6c: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113EC0u;
            goto label_113ec0;
        }
    }
    ctx->pc = 0x113E70u;
    // 0x113e70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x113E70u;
    {
        const bool branch_taken_0x113e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E70u;
        // 0x113e74: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e70) {
            ctx->pc = 0x113EC4u;
            goto label_113ec4;
        }
    }
    ctx->pc = 0x113E78u;
label_113e78:
    // 0x113e78: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x113e78u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x113e7c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x113e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x113e80: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x113e80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x113e84: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x113e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x113e88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x113e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x113e8c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x113e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113e90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113e94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x113e98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113e9c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x113e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x113ea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x113EA0u;
    {
        const bool branch_taken_0x113ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EA0u;
        // 0x113ea4: 0x94440012  lhu         $a0, 0x12($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ea0) {
            ctx->pc = 0x113EB0u;
            goto label_113eb0;
        }
    }
    ctx->pc = 0x113EA8u;
    // 0x113ea8: 0x94420016  lhu         $v0, 0x16($v0)
    ctx->pc = 0x113ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x113eac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x113eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_113eb0:
    // 0x113eb0: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x113eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x113eb4: 0xc04171a  jal         func_105C68
    ctx->pc = 0x113EB4u;
    SET_GPR_U32(ctx, 31, 0x113EBCu);
    ctx->pc = 0x113EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EB4u;
    // 0x113eb8: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x113EB4u, 0x113EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EBCu;
label_113ebc:
    // 0x113ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113ec0:
    // 0x113ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_113ec4:
    // 0x113ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ec8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x113ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x113ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ECCu;
        // 0x113ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113ED4u;
}
