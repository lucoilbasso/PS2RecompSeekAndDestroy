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

// Function: Cmd_MODEL_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10dcc8 - 0x10ddec
void Cmd_MODEL_MAKE_Entry__FP15BsSCDEntControl_0x10dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_MAKE_Entry__FP15BsSCDEntControl_0x10dcc8");
#endif

    switch (ctx->pc) {
        case 0x10dcf8u: goto label_10dcf8;
        case 0x10dd08u: goto label_10dd08;
        case 0x10dd1cu: goto label_10dd1c;
        case 0x10dd30u: goto label_10dd30;
        case 0x10dd40u: goto label_10dd40;
        case 0x10dd5cu: goto label_10dd5c;
        case 0x10dd7cu: goto label_10dd7c;
        case 0x10dd94u: goto label_10dd94;
        case 0x10dda0u: goto label_10dda0;
        case 0x10dda8u: goto label_10dda8;
        case 0x10ddbcu: goto label_10ddbc;
        case 0x10ddccu: goto label_10ddcc;
        default: break;
    }

    ctx->pc = 0x10dcc8u;

    // 0x10dcc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10dccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10dcd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10dcd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10dcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10dcdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10dcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dce0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10dce4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10dce8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10dcec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10dcf0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DCF0u;
    SET_GPR_U32(ctx, 31, 0x10DCF8u);
    ctx->pc = 0x10DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCF0u;
    // 0x10dcf4: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DCF0u, 0x10DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCF8u;
label_10dcf8:
    // 0x10dcf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10dcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd00: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x10DD00u;
    SET_GPR_U32(ctx, 31, 0x10DD08u);
    ctx->pc = 0x10DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD00u;
    // 0x10dd04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x10DD00u, 0x10DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD08u;
label_10dd08:
    // 0x10dd08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd0c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DD0Cu;
    {
        const bool branch_taken_0x10dd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD0Cu;
        // 0x10dd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd0c) {
            ctx->pc = 0x10DD38u;
            goto label_10dd38;
        }
    }
    ctx->pc = 0x10DD14u;
    // 0x10dd14: 0xc065448  jal         func_195120
    ctx->pc = 0x10DD14u;
    SET_GPR_U32(ctx, 31, 0x10DD1Cu);
    ctx->pc = 0x195120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195120u, 0x10DD14u, 0x10DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD1Cu;
label_10dd1c:
    // 0x10dd1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10dd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dd28: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x10DD28u;
    SET_GPR_U32(ctx, 31, 0x10DD30u);
    ctx->pc = 0x10DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD28u;
    // 0x10dd2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x10DD28u, 0x10DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD30u;
label_10dd30:
    // 0x10dd30: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x10DD30u;
    {
        const bool branch_taken_0x10dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD30u;
        // 0x10dd34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd30) {
            ctx->pc = 0x10DDC0u;
            goto label_10ddc0;
        }
    }
    ctx->pc = 0x10DD38u;
label_10dd38:
    // 0x10dd38: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DD38u;
    SET_GPR_U32(ctx, 31, 0x10DD40u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DD38u, 0x10DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD40u;
label_10dd40:
    // 0x10dd40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dd44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd4c: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x10DD4Cu;
    {
        const bool branch_taken_0x10dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD4Cu;
        // 0x10dd50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd4c) {
            ctx->pc = 0x10DDC0u;
            goto label_10ddc0;
        }
    }
    ctx->pc = 0x10DD54u;
    // 0x10dd54: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DD54u;
    SET_GPR_U32(ctx, 31, 0x10DD5Cu);
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DD54u, 0x10DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD5Cu;
label_10dd5c:
    // 0x10dd5c: 0x24030846  addiu       $v1, $zero, 0x846
    ctx->pc = 0x10dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x10dd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dd68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10dd6c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DD6Cu;
    {
        const bool branch_taken_0x10dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD6Cu;
        // 0x10dd70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd6c) {
            ctx->pc = 0x10DD94u;
            goto label_10dd94;
        }
    }
    ctx->pc = 0x10DD74u;
    // 0x10dd74: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10DD74u;
    SET_GPR_U32(ctx, 31, 0x10DD7Cu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10DD74u, 0x10DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD7Cu;
label_10dd7c:
    // 0x10dd7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10dd80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd84: 0x24a53cc0  addiu       $a1, $a1, 0x3CC0
    ctx->pc = 0x10dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15552));
    // 0x10dd88: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10dd8c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10DD8Cu;
    SET_GPR_U32(ctx, 31, 0x10DD94u);
    ctx->pc = 0x10DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD8Cu;
    // 0x10dd90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10DD8Cu, 0x10DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD94u;
label_10dd94:
    // 0x10dd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd98: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DD98u;
    SET_GPR_U32(ctx, 31, 0x10DDA0u);
    ctx->pc = 0x10DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD98u;
    // 0x10dd9c: 0x8e1001b8  lw          $s0, 0x1B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DD98u, 0x10DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDA0u;
label_10dda0:
    // 0x10dda0: 0xc065448  jal         func_195120
    ctx->pc = 0x10DDA0u;
    SET_GPR_U32(ctx, 31, 0x10DDA8u);
    ctx->pc = 0x10DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDA0u;
    // 0x10dda4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195120u, 0x10DDA0u, 0x10DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDA8u;
label_10dda8:
    // 0x10dda8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10dda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10ddacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ddb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddb4: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x10DDB4u;
    SET_GPR_U32(ctx, 31, 0x10DDBCu);
    ctx->pc = 0x10DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDB4u;
    // 0x10ddb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x10DDB4u, 0x10DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDBCu;
label_10ddbc:
    // 0x10ddbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10ddc0:
    // 0x10ddc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10ddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddc4: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10DDC4u;
    SET_GPR_U32(ctx, 31, 0x10DDCCu);
    ctx->pc = 0x10DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDC4u;
    // 0x10ddc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10DDC4u, 0x10DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDCCu;
label_10ddcc:
    // 0x10ddcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10ddccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ddd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10ddd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ddd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ddd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ddd8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10ddd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10dddc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10dddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dde0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10dde4: 0x3e00008  jr          $ra
    ctx->pc = 0x10DDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDE4u;
        // 0x10dde8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DDECu;
}
