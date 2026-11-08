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

// Function: Cmd_MULTI_OBJ_Entry__FP15BsSCDEntControl
// Address: 0x10ddf0 - 0x10df3c
void Cmd_MULTI_OBJ_Entry__FP15BsSCDEntControl_0x10ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MULTI_OBJ_Entry__FP15BsSCDEntControl_0x10ddf0");
#endif

    switch (ctx->pc) {
        case 0x10de18u: goto label_10de18;
        case 0x10de78u: goto label_10de78;
        case 0x10deacu: goto label_10deac;
        case 0x10dec8u: goto label_10dec8;
        case 0x10df14u: goto label_10df14;
        case 0x10df28u: goto label_10df28;
        default: break;
    }

    ctx->pc = 0x10ddf0u;

    // 0x10ddf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ddf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10ddf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ddf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ddfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10de00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10de00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10de08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de0c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10de10: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DE10u;
    SET_GPR_U32(ctx, 31, 0x10DE18u);
    ctx->pc = 0x10DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE10u;
    // 0x10de14: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DE10u, 0x10DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE18u;
label_10de18:
    // 0x10de18: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x10de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x10de1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10de1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10de24: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10de28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DE28u;
    {
        const bool branch_taken_0x10de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE28u;
        // 0x10de2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de28) {
            ctx->pc = 0x10DE48u;
            goto label_10de48;
        }
    }
    ctx->pc = 0x10DE30u;
    // 0x10de30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10de30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10de34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10de38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de3c: 0x804171a  j           func_105C68
    ctx->pc = 0x10DE3Cu;
    ctx->pc = 0x10DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE3Cu;
    // 0x10de40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x10DE44u;
    // 0x10de44: 0x0  nop
    ctx->pc = 0x10de44u;
    // NOP
label_10de48:
    // 0x10de48: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10de4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10de50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10de50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10de54: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DE54u;
    {
        const bool branch_taken_0x10de54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE54u;
        // 0x10de58: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de54) {
            ctx->pc = 0x10DE70u;
            goto label_10de70;
        }
    }
    ctx->pc = 0x10DE5Cu;
    // 0x10de5c: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x10de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x10de60: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x10de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x10de64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10de64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10de68: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10DE68u;
    {
        const bool branch_taken_0x10de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE68u;
        // 0x10de6c: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de68) {
            ctx->pc = 0x10DF28u;
            goto label_10df28;
        }
    }
    ctx->pc = 0x10DE70u;
label_10de70:
    // 0x10de70: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DE70u;
    SET_GPR_U32(ctx, 31, 0x10DE78u);
    ctx->pc = 0x10DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE70u;
    // 0x10de74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DE70u, 0x10DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE78u;
label_10de78:
    // 0x10de78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de7c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DE7Cu;
    {
        const bool branch_taken_0x10de7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE7Cu;
        // 0x10de80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de7c) {
            ctx->pc = 0x10DE90u;
            goto label_10de90;
        }
    }
    ctx->pc = 0x10DE84u;
    // 0x10de84: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x10de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x10de88: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10DE88u;
    {
        const bool branch_taken_0x10de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE88u;
        // 0x10de8c: 0xae0201c4  sw          $v0, 0x1C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de88) {
            ctx->pc = 0x10DF28u;
            goto label_10df28;
        }
    }
    ctx->pc = 0x10DE90u;
label_10de90:
    // 0x10de90: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DE90u;
    {
        const bool branch_taken_0x10de90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10de90) {
            ctx->pc = 0x10DE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DE90u;
            // 0x10de94: 0x8e0301b0  lw          $v1, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEB8u;
            goto label_10deb8;
        }
    }
    ctx->pc = 0x10DE98u;
    // 0x10de98: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x10de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x10de9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10dea0: 0xae0401c4  sw          $a0, 0x1C4($s0)
    ctx->pc = 0x10dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 4));
    // 0x10dea4: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10DEA4u;
    SET_GPR_U32(ctx, 31, 0x10DEACu);
    ctx->pc = 0x10DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEA4u;
    // 0x10dea8: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10DEA4u, 0x10DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DEACu;
label_10deac:
    // 0x10deac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10DEACu;
    {
        const bool branch_taken_0x10deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEACu;
        // 0x10deb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10deac) {
            ctx->pc = 0x10DF2Cu;
            goto label_10df2c;
        }
    }
    ctx->pc = 0x10DEB4u;
    // 0x10deb4: 0x0  nop
    ctx->pc = 0x10deb4u;
    // NOP
label_10deb8:
    // 0x10deb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10debc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10DEBCu;
    {
        const bool branch_taken_0x10debc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEBCu;
        // 0x10dec0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10debc) {
            ctx->pc = 0x10DEECu;
            goto label_10deec;
        }
    }
    ctx->pc = 0x10DEC4u;
    // 0x10dec4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x10dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_10dec8:
    // 0x10dec8: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DEC8u;
    {
        const bool branch_taken_0x10dec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC8u;
        // 0x10decc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dec8) {
            ctx->pc = 0x10DEF0u;
            goto label_10def0;
        }
    }
    ctx->pc = 0x10DED0u;
    // 0x10ded0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10ded4: 0x0  nop
    ctx->pc = 0x10ded4u;
    // NOP
    // 0x10ded8: 0x0  nop
    ctx->pc = 0x10ded8u;
    // NOP
    // 0x10dedc: 0x0  nop
    ctx->pc = 0x10dedcu;
    // NOP
    // 0x10dee0: 0x0  nop
    ctx->pc = 0x10dee0u;
    // NOP
    // 0x10dee4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10DEE4u;
    {
        const bool branch_taken_0x10dee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dee4) {
            ctx->pc = 0x10DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DEE4u;
            // 0x10dee8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dec8;
        }
    }
    ctx->pc = 0x10DEECu;
label_10deec:
    // 0x10deec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10deecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10def0:
    // 0x10def0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10DEF0u;
    {
        const bool branch_taken_0x10def0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEF0u;
        // 0x10def4: 0xacc401c4  sw          $a0, 0x1C4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10def0) {
            ctx->pc = 0x10DF20u;
            goto label_10df20;
        }
    }
    ctx->pc = 0x10DEF8u;
    // 0x10def8: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x10def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x10defc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x10df00: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10df00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x10df04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10df08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10df0c: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10DF0Cu;
    SET_GPR_U32(ctx, 31, 0x10DF14u);
    ctx->pc = 0x10DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF0Cu;
    // 0x10df10: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10DF0Cu, 0x10DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF14u;
label_10df14:
    // 0x10df14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10DF14u;
    {
        const bool branch_taken_0x10df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF14u;
        // 0x10df18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df14) {
            ctx->pc = 0x10DF2Cu;
            goto label_10df2c;
        }
    }
    ctx->pc = 0x10DF1Cu;
    // 0x10df1c: 0x0  nop
    ctx->pc = 0x10df1cu;
    // NOP
label_10df20:
    // 0x10df20: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10DF20u;
    SET_GPR_U32(ctx, 31, 0x10DF28u);
    ctx->pc = 0x10DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF20u;
    // 0x10df24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10DF20u, 0x10DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF28u;
label_10df28:
    // 0x10df28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10df28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10df2c:
    // 0x10df2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10df2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10df30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df34: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF34u;
        // 0x10df38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DF3Cu;
}
