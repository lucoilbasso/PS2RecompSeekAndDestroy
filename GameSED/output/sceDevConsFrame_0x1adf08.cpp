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

// Function: sceDevConsFrame
// Address: 0x1adf08 - 0x1ae06c
void sceDevConsFrame_0x1adf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsFrame_0x1adf08");
#endif

    switch (ctx->pc) {
        case 0x1adf58u: goto label_1adf58;
        case 0x1adf70u: goto label_1adf70;
        case 0x1adf88u: goto label_1adf88;
        case 0x1adfa0u: goto label_1adfa0;
        case 0x1adfb0u: goto label_1adfb0;
        case 0x1adfc4u: goto label_1adfc4;
        case 0x1adfe0u: goto label_1adfe0;
        case 0x1ae008u: goto label_1ae008;
        case 0x1ae01cu: goto label_1ae01c;
        case 0x1ae038u: goto label_1ae038;
        default: break;
    }

    ctx->pc = 0x1adf08u;

    // 0x1adf08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1adf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1adf0c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1adf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1adf10: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1adf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1adf14: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1adf14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1adf18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1adf1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1adf1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf24: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1adf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1adf28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1adf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1adf2c: 0x2c7a821  addu        $s5, $s6, $a3
    ctx->pc = 0x1adf2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x1adf30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1adf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1adf34: 0x248a021  addu        $s4, $s2, $t0
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1adf38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1adf38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1adf40: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1adf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1adf44: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1adf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1adf48: 0x240700f9  addiu       $a3, $zero, 0xF9
    ctx->pc = 0x1adf48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x1adf4c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1adf50: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADF50u;
    SET_GPR_U32(ctx, 31, 0x1ADF58u);
    ctx->pc = 0x1ADF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF50u;
    // 0x1adf54: 0x26d00001  addiu       $s0, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADF50u, 0x1ADF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF58u;
label_1adf58:
    // 0x1adf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1adf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adf60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf64: 0x240700f5  addiu       $a3, $zero, 0xF5
    ctx->pc = 0x1adf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x1adf68: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADF68u;
    SET_GPR_U32(ctx, 31, 0x1ADF70u);
    ctx->pc = 0x1ADF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF68u;
    // 0x1adf6c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADF68u, 0x1ADF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF70u;
label_1adf70:
    // 0x1adf70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1adf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1adf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf7c: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x1adf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1adf80: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADF80u;
    SET_GPR_U32(ctx, 31, 0x1ADF88u);
    ctx->pc = 0x1ADF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF80u;
    // 0x1adf84: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADF80u, 0x1ADF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF88u;
label_1adf88:
    // 0x1adf88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1adf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1adf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf94: 0x240700f6  addiu       $a3, $zero, 0xF6
    ctx->pc = 0x1adf94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x1adf98: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADF98u;
    SET_GPR_U32(ctx, 31, 0x1ADFA0u);
    ctx->pc = 0x1ADF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF98u;
    // 0x1adf9c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADF98u, 0x1ADFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFA0u;
label_1adfa0:
    // 0x1adfa0: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x1adfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1adfa4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ADFA4u;
    {
        const bool branch_taken_0x1adfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFA4u;
        // 0x1adfa8: 0x26530001  addiu       $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfa4) {
            ctx->pc = 0x1ADFF4u;
            goto label_1adff4;
        }
    }
    ctx->pc = 0x1ADFACu;
    // 0x1adfac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adfb0:
    // 0x1adfb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb8: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x1adfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1adfbc: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADFBCu;
    SET_GPR_U32(ctx, 31, 0x1ADFC4u);
    ctx->pc = 0x1ADFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFBCu;
    // 0x1adfc0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADFBCu, 0x1ADFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFC4u;
label_1adfc4:
    // 0x1adfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfcc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1adfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfd0: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x1adfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1adfd4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1adfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1adfd8: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADFD8u;
    SET_GPR_U32(ctx, 31, 0x1ADFE0u);
    ctx->pc = 0x1ADFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFD8u;
    // 0x1adfdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADFD8u, 0x1ADFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFE0u;
label_1adfe0:
    // 0x1adfe0: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x1adfe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1adfe4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1ADFE4u;
    {
        const bool branch_taken_0x1adfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFE4u;
        // 0x1adfe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfe4) {
            ctx->pc = 0x1ADFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adfb0;
        }
    }
    ctx->pc = 0x1ADFECu;
    // 0x1adfec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADFECu;
    {
        const bool branch_taken_0x1adfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFECu;
        // 0x1adff0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfec) {
            ctx->pc = 0x1ADFF8u;
            goto label_1adff8;
        }
    }
    ctx->pc = 0x1ADFF4u;
label_1adff4:
    // 0x1adff4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1adff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1adff8:
    // 0x1adff8: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1adff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1adffc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADFFCu;
    {
        const bool branch_taken_0x1adffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFFCu;
        // 0x1ae000: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adffc) {
            ctx->pc = 0x1AE048u;
            goto label_1ae048;
        }
    }
    ctx->pc = 0x1AE004u;
    // 0x1ae004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae008:
    // 0x1ae008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae00c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae010: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x1ae010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1ae014: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1AE014u;
    SET_GPR_U32(ctx, 31, 0x1AE01Cu);
    ctx->pc = 0x1AE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE014u;
    // 0x1ae018: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1AE014u, 0x1AE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE01Cu;
label_1ae01c:
    // 0x1ae01c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae024: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ae024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae028: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x1ae028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1ae02c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1ae02cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae030: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1AE030u;
    SET_GPR_U32(ctx, 31, 0x1AE038u);
    ctx->pc = 0x1AE034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE030u;
    // 0x1ae034: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1AE030u, 0x1AE038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE038u;
label_1ae038:
    // 0x1ae038: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1ae038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1ae03c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AE03Cu;
    {
        const bool branch_taken_0x1ae03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE03Cu;
        // 0x1ae040: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae03c) {
            ctx->pc = 0x1AE008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae008;
        }
    }
    ctx->pc = 0x1AE044u;
    // 0x1ae044: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ae044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ae048:
    // 0x1ae048: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ae048u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae04c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ae04cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae050: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ae050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae054: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ae054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae058: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ae058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae05c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae064: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE064u;
        // 0x1ae068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE06Cu;
}
