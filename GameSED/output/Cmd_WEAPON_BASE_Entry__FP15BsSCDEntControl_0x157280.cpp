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

// Function: Cmd_WEAPON_BASE_Entry__FP15BsSCDEntControl
// Address: 0x157280 - 0x157314
void Cmd_WEAPON_BASE_Entry__FP15BsSCDEntControl_0x157280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WEAPON_BASE_Entry__FP15BsSCDEntControl_0x157280");
#endif

    switch (ctx->pc) {
        case 0x1572c8u: goto label_1572c8;
        case 0x1572d0u: goto label_1572d0;
        case 0x1572dcu: goto label_1572dc;
        case 0x1572ecu: goto label_1572ec;
        default: break;
    }

    ctx->pc = 0x157280u;

    // 0x157280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157284: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x157284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x157288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15728c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157294: 0x24062118  addiu       $a2, $zero, 0x2118
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x157298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15729c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1572a0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1572a4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1572a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1572a8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1572a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1572ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1572acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572b0: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1572B0u;
    {
        const bool branch_taken_0x1572b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1572B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572B0u;
        // 0x1572b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572b0) {
            ctx->pc = 0x1572C8u;
            goto label_1572c8;
        }
    }
    ctx->pc = 0x1572B8u;
    // 0x1572b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1572bc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1572bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1572c0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1572C0u;
    SET_GPR_U32(ctx, 31, 0x1572C8u);
    ctx->pc = 0x1572C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572C0u;
    // 0x1572c4: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1572C0u, 0x1572C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572C8u;
label_1572c8:
    // 0x1572c8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1572C8u;
    SET_GPR_U32(ctx, 31, 0x1572D0u);
    ctx->pc = 0x1572CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572C8u;
    // 0x1572cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1572C8u, 0x1572D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572D0u;
label_1572d0:
    // 0x1572d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1572d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572d4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1572D4u;
    SET_GPR_U32(ctx, 31, 0x1572DCu);
    ctx->pc = 0x1572D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572D4u;
    // 0x1572d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1572D4u, 0x1572DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572DCu;
label_1572dc:
    // 0x1572dc: 0x8e450260  lw          $a1, 0x260($s2)
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1572e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1572e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572e4: 0xc0533e4  jal         func_14CF90
    ctx->pc = 0x1572E4u;
    SET_GPR_U32(ctx, 31, 0x1572ECu);
    ctx->pc = 0x1572E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572E4u;
    // 0x1572e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x1572E4u, 0x1572ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572ECu;
label_1572ec:
    // 0x1572ec: 0x96420238  lhu         $v0, 0x238($s2)
    ctx->pc = 0x1572ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x1572f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1572f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1572f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1572f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1572f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1572f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1572fc: 0x8e43023c  lw          $v1, 0x23C($s2)
    ctx->pc = 0x1572fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x157300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x157300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157304: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x157304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x157308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15730c: 0x3e00008  jr          $ra
    ctx->pc = 0x15730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15730Cu;
        // 0x157310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157314u;
}
