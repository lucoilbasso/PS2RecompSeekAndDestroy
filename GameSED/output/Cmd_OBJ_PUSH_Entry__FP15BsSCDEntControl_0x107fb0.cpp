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

// Function: Cmd_OBJ_PUSH_Entry__FP15BsSCDEntControl
// Address: 0x107fb0 - 0x108068
void Cmd_OBJ_PUSH_Entry__FP15BsSCDEntControl_0x107fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_PUSH_Entry__FP15BsSCDEntControl_0x107fb0");
#endif

    switch (ctx->pc) {
        case 0x107fe8u: goto label_107fe8;
        case 0x108040u: goto label_108040;
        default: break;
    }

    ctx->pc = 0x107fb0u;

    // 0x107fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107fb4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x107fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x107fbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x107fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107fc4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x107fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x107fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x107fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x107fcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x107fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x107fd0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x107fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107fd8: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x107FD8u;
    {
        const bool branch_taken_0x107fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x107FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FD8u;
        // 0x107fdc: 0x8c720024  lw          $s2, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fd8) {
            ctx->pc = 0x107FECu;
            goto label_107fec;
        }
    }
    ctx->pc = 0x107FE0u;
    // 0x107fe0: 0xc041f0a  jal         func_107C28
    ctx->pc = 0x107FE0u;
    SET_GPR_U32(ctx, 31, 0x107FE8u);
    ctx->pc = 0x107C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C28u, 0x107FE0u, 0x107FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FE8u;
label_107fe8:
    // 0x107fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107fec:
    // 0x107fec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x107fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x107ff0: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x107ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x107ff4: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x107ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x107ff8: 0x24701400  addiu       $s0, $v1, 0x1400
    ctx->pc = 0x107ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x107ffc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x107ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x108000: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x108000u;
    {
        const bool branch_taken_0x108000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x108004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108000u;
        // 0x108004: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108000) {
            ctx->pc = 0x108030u;
            goto label_108030;
        }
    }
    ctx->pc = 0x108008u;
    // 0x108008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10800c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10800cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108010: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x108010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x108014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10801c: 0x24a53b28  addiu       $a1, $a1, 0x3B28
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15144));
    // 0x108020: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108024: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x108028: 0x8068186  j           func_1A0618
    ctx->pc = 0x108028u;
    ctx->pc = 0x10802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108028u;
    // 0x10802c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x108030u;
label_108030:
    // 0x108030: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x108030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108034: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x108038: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x108038u;
    SET_GPR_U32(ctx, 31, 0x108040u);
    ctx->pc = 0x10803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108038u;
    // 0x10803c: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x108038u, 0x108040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108040u;
label_108040:
    // 0x108040: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x108040u;
    {
        const bool branch_taken_0x108040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x108040) {
            ctx->pc = 0x108044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108040u;
            // 0x108044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108054u;
            goto label_108054;
        }
    }
    ctx->pc = 0x108048u;
    // 0x108048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x108048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10804c: 0xac510044  sw          $s1, 0x44($v0)
    ctx->pc = 0x10804cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
    // 0x108050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108054:
    // 0x108054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10805c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10805cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108060: 0x3e00008  jr          $ra
    ctx->pc = 0x108060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108060u;
        // 0x108064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108068u;
}
