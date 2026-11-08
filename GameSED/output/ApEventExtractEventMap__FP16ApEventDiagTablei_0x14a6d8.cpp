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

// Function: ApEventExtractEventMap__FP16ApEventDiagTablei
// Address: 0x14a6d8 - 0x14a7b0
void ApEventExtractEventMap__FP16ApEventDiagTablei_0x14a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventExtractEventMap__FP16ApEventDiagTablei_0x14a6d8");
#endif

    switch (ctx->pc) {
        case 0x14a738u: goto label_14a738;
        case 0x14a758u: goto label_14a758;
        default: break;
    }

    ctx->pc = 0x14a6d8u;

    // 0x14a6d8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A6D8u;
    {
        const bool branch_taken_0x14a6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6d8) {
            ctx->pc = 0x14A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A6D8u;
            // 0x14a6dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6F8u;
            goto label_14a6f8;
        }
    }
    ctx->pc = 0x14A6E0u;
    // 0x14a6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a6e4: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A6E4u;
    {
        const bool branch_taken_0x14a6e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6E4u;
        // 0x14a6e8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6e4) {
            ctx->pc = 0x14A700u;
            goto label_14a700;
        }
    }
    ctx->pc = 0x14A6ECu;
    // 0x14a6ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A6ECu;
    {
        const bool branch_taken_0x14a6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6ECu;
        // 0x14a6f0: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6ec) {
            ctx->pc = 0x14A704u;
            goto label_14a704;
        }
    }
    ctx->pc = 0x14A6F4u;
    // 0x14a6f4: 0x0  nop
    ctx->pc = 0x14a6f4u;
    // NOP
label_14a6f8:
    // 0x14a6f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A6F8u;
    {
        const bool branch_taken_0x14a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6F8u;
        // 0x14a6fc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6f8) {
            ctx->pc = 0x14A704u;
            goto label_14a704;
        }
    }
    ctx->pc = 0x14A700u;
label_14a700:
    // 0x14a700: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x14a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_14a704:
    // 0x14a704: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14a704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14a708: 0x248a0010  addiu       $t2, $a0, 0x10
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14a70c: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x14a70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14a710: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x14a710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x14a714: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x14a718: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x14a718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14a71c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14A71Cu;
    {
        const bool branch_taken_0x14a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A71Cu;
        // 0x14a720: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a71c) {
            ctx->pc = 0x14A7A8u;
            goto label_14a7a8;
        }
    }
    ctx->pc = 0x14A724u;
    // 0x14a724: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x14a728: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
    // 0x14a72c: 0x25297820  addiu       $t1, $t1, 0x7820
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30752));
    // 0x14a730: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x14a730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x14a734: 0x0  nop
    ctx->pc = 0x14a734u;
    // NOP
label_14a738:
    // 0x14a738: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x14a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14a73c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a740: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a744: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A744u;
    {
        const bool branch_taken_0x14a744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a744) {
            ctx->pc = 0x14A748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A744u;
            // 0x14a748: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A798u;
            goto label_14a798;
        }
    }
    ctx->pc = 0x14A74Cu;
    // 0x14a74c: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x14a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x14a750: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14a754: 0x2c480080  sltiu       $t0, $v0, 0x80
    ctx->pc = 0x14a754u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_14a758:
    // 0x14a758: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A758u;
    {
        const bool branch_taken_0x14a758 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A758u;
        // 0x14a75c: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a758) {
            ctx->pc = 0x14A780u;
            goto label_14a780;
        }
    }
    ctx->pc = 0x14A760u;
    // 0x14a760: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A760u;
    {
        const bool branch_taken_0x14a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a760) {
            ctx->pc = 0x14A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A760u;
            // 0x14a764: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A784u;
            goto label_14a784;
        }
    }
    ctx->pc = 0x14A768u;
    // 0x14a768: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x14a768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14a76c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A76Cu;
    {
        const bool branch_taken_0x14a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a76c) {
            ctx->pc = 0x14A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A76Cu;
            // 0x14a770: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A784u;
            goto label_14a784;
        }
    }
    ctx->pc = 0x14A774u;
    // 0x14a774: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x14a774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a778: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14a77c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14a77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_14a780:
    // 0x14a780: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14a784:
    // 0x14a784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a788: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a78c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14A78Cu;
    {
        const bool branch_taken_0x14a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A78Cu;
        // 0x14a790: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a78c) {
            ctx->pc = 0x14A758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a758;
        }
    }
    ctx->pc = 0x14A794u;
    // 0x14a794: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_14a798:
    // 0x14a798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14a798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14a79c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x14a79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14a7a0: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14A7A0u;
    {
        const bool branch_taken_0x14a7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7A0u;
        // 0x14a7a4: 0x25290080  addiu       $t1, $t1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7a0) {
            ctx->pc = 0x14A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a738;
        }
    }
    ctx->pc = 0x14A7A8u;
label_14a7a8:
    // 0x14a7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A7B0u;
}
