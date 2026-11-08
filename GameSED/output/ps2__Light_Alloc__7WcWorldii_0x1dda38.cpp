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

// Function: _Light_Alloc__7WcWorldii
// Address: 0x1dda38 - 0x1ddb44
void ps2__Light_Alloc__7WcWorldii_0x1dda38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Light_Alloc__7WcWorldii_0x1dda38");
#endif

    switch (ctx->pc) {
        case 0x1dda7cu: goto label_1dda7c;
        case 0x1dda98u: goto label_1dda98;
        case 0x1ddab0u: goto label_1ddab0;
        case 0x1ddac4u: goto label_1ddac4;
        case 0x1ddaccu: goto label_1ddacc;
        case 0x1ddae0u: goto label_1ddae0;
        case 0x1ddaecu: goto label_1ddaec;
        default: break;
    }

    ctx->pc = 0x1dda38u;

    // 0x1dda38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dda38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dda3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dda3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dda40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dda40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dda44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dda48: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1dda48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dda4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dda50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dda50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dda54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dda58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dda58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dda5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dda60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dda60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dda64: 0xae4501b8  sw          $a1, 0x1B8($s2)
    ctx->pc = 0x1dda64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 5));
    // 0x1dda68: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDA68u;
    {
        const bool branch_taken_0x1dda68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA68u;
        // 0x1dda6c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda68) {
            ctx->pc = 0x1DDA74u;
            goto label_1dda74;
        }
    }
    ctx->pc = 0x1DDA70u;
    // 0x1dda70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dda74:
    // 0x1dda74: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DDA74u;
    SET_GPR_U32(ctx, 31, 0x1DDA7Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DDA74u, 0x1DDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA7Cu;
label_1dda7c:
    // 0x1dda7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDA7Cu;
    {
        const bool branch_taken_0x1dda7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA7Cu;
        // 0x1dda80: 0xae4201bc  sw          $v0, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda7c) {
            ctx->pc = 0x1DDA98u;
            goto label_1dda98;
        }
    }
    ctx->pc = 0x1DDA84u;
    // 0x1dda84: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dda88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dda88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dda8c: 0x24a57f30  addiu       $a1, $a1, 0x7F30
    ctx->pc = 0x1dda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32560));
    // 0x1dda90: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DDA90u;
    SET_GPR_U32(ctx, 31, 0x1DDA98u);
    ctx->pc = 0x1DDA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA90u;
    // 0x1dda94: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DDA90u, 0x1DDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA98u;
label_1dda98:
    // 0x1dda98: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1dda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1dda9c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDA9Cu;
    {
        const bool branch_taken_0x1dda9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA9Cu;
        // 0x1ddaa0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda9c) {
            ctx->pc = 0x1DDB00u;
            goto label_1ddb00;
        }
    }
    ctx->pc = 0x1DDAA4u;
    // 0x1ddaa4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ddaa8: 0x2454ffb0  addiu       $s4, $v0, -0x50
    ctx->pc = 0x1ddaa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1ddaac: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x1ddaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_1ddab0:
    // 0x1ddab0: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x1ddab0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ddab4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1ddab8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ddab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ddabc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1DDABCu;
    SET_GPR_U32(ctx, 31, 0x1DDAC4u);
    ctx->pc = 0x1DDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDABCu;
    // 0x1ddac0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DDABCu, 0x1DDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAC4u;
label_1ddac4:
    // 0x1ddac4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1DDAC4u;
    SET_GPR_U32(ctx, 31, 0x1DDACCu);
    ctx->pc = 0x1DDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAC4u;
    // 0x1ddac8: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DDAC4u, 0x1DDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDACCu;
label_1ddacc:
    // 0x1ddacc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ddaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddad4: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1ddad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1ddad8: 0xc0624a8  jal         func_1892A0
    ctx->pc = 0x1DDAD8u;
    SET_GPR_U32(ctx, 31, 0x1DDAE0u);
    ctx->pc = 0x1DDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAD8u;
    // 0x1ddadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x1DDAD8u, 0x1DDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAE0u;
label_1ddae0:
    // 0x1ddae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ddae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddae4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DDAE4u;
    SET_GPR_U32(ctx, 31, 0x1DDAECu);
    ctx->pc = 0x1DDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAE4u;
    // 0x1ddae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DDAE4u, 0x1DDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDAECu;
label_1ddaec:
    // 0x1ddaec: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ddaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ddaf0: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ddaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1ddaf4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ddaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddaf8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DDAF8u;
    {
        const bool branch_taken_0x1ddaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddaf8) {
            ctx->pc = 0x1DDAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDAF8u;
            // 0x1ddafc: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddab0;
        }
    }
    ctx->pc = 0x1DDB00u;
label_1ddb00:
    // 0x1ddb00: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x1ddb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x1ddb04: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x1ddb04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x1ddb08: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1ddb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x1ddb0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ddb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ddb10: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ddb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ddb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddb18: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x1ddb18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x1ddb1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ddb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb20: 0xae4301c0  sw          $v1, 0x1C0($s2)
    ctx->pc = 0x1ddb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
    // 0x1ddb24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddb28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddb28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddb2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddb2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddb30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ddb30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddb34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ddb34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddb38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ddb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB3Cu;
        // 0x1ddb40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDB44u;
}
