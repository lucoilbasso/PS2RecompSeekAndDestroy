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

// Function: Cmd_OBJ_MOVE_Entry__FP15BsSCDEntControl
// Address: 0x107180 - 0x1072b8
void Cmd_OBJ_MOVE_Entry__FP15BsSCDEntControl_0x107180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_MOVE_Entry__FP15BsSCDEntControl_0x107180");
#endif

    switch (ctx->pc) {
        case 0x1071b8u: goto label_1071b8;
        case 0x1071e8u: goto label_1071e8;
        case 0x107200u: goto label_107200;
        case 0x107210u: goto label_107210;
        case 0x107224u: goto label_107224;
        case 0x107244u: goto label_107244;
        case 0x10725cu: goto label_10725c;
        case 0x10728cu: goto label_10728c;
        case 0x10729cu: goto label_10729c;
        default: break;
    }

    ctx->pc = 0x107180u;

    // 0x107180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x107184: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x107184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107188: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x107188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10718c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10718cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107190: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107198: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x107198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10719c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1071a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1071a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1071a4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1071a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1071a8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x1071a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1071ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1071acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071b0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1071B0u;
    SET_GPR_U32(ctx, 31, 0x1071B8u);
    ctx->pc = 0x1071B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071B0u;
    // 0x1071b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1071B0u, 0x1071B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071B8u;
label_1071b8:
    // 0x1071b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1071b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1071bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1071bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1071c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1071c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1071c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1071c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1071cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1071CCu;
    {
        const bool branch_taken_0x1071cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071CCu;
        // 0x1071d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071cc) {
            ctx->pc = 0x107230u;
            goto label_107230;
        }
    }
    ctx->pc = 0x1071D4u;
    // 0x1071d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1071d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1071d8: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1071D8u;
    {
        const bool branch_taken_0x1071d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1071d8) {
            ctx->pc = 0x1071DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1071D8u;
            // 0x1071dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107204u;
            goto label_107204;
        }
    }
    ctx->pc = 0x1071E0u;
    // 0x1071e0: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1071E0u;
    SET_GPR_U32(ctx, 31, 0x1071E8u);
    ctx->pc = 0x1071E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071E0u;
    // 0x1071e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1071E0u, 0x1071E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071E8u;
label_1071e8:
    // 0x1071e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1071e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1071ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1071ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071f0: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x1071f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x1071f4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1071f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1071f8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1071F8u;
    SET_GPR_U32(ctx, 31, 0x107200u);
    ctx->pc = 0x1071FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071F8u;
    // 0x1071fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1071F8u, 0x107200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107200u;
label_107200:
    // 0x107200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_107204:
    // 0x107204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107208: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x107208u;
    SET_GPR_U32(ctx, 31, 0x107210u);
    ctx->pc = 0x10720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107208u;
    // 0x10720c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x107208u, 0x107210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107210u;
label_107210:
    // 0x107210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107214: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x107218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10721c: 0xc061344  jal         func_184D10
    ctx->pc = 0x10721Cu;
    SET_GPR_U32(ctx, 31, 0x107224u);
    ctx->pc = 0x107220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10721Cu;
    // 0x107220: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x10721Cu, 0x107224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107224u;
label_107224:
    // 0x107224: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x107224u;
    {
        const bool branch_taken_0x107224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107224u;
        // 0x107228: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107224) {
            ctx->pc = 0x1072A0u;
            goto label_1072a0;
        }
    }
    ctx->pc = 0x10722Cu;
    // 0x10722c: 0x0  nop
    ctx->pc = 0x10722cu;
    // NOP
label_107230:
    // 0x107230: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x107230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107234: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x107234u;
    {
        const bool branch_taken_0x107234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107234u;
        // 0x107238: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107234) {
            ctx->pc = 0x107264u;
            goto label_107264;
        }
    }
    ctx->pc = 0x10723Cu;
    // 0x10723c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10723Cu;
    SET_GPR_U32(ctx, 31, 0x107244u);
    ctx->pc = 0x107240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10723Cu;
    // 0x107240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10723Cu, 0x107244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107244u;
label_107244:
    // 0x107244: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x107244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x107248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10724c: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x107250: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x107250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x107254: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x107254u;
    SET_GPR_U32(ctx, 31, 0x10725Cu);
    ctx->pc = 0x107258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107254u;
    // 0x107258: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x107254u, 0x10725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10725Cu;
label_10725c:
    // 0x10725c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x107260: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x107260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_107264:
    // 0x107264: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x107264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x107268: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107268u;
    {
        const bool branch_taken_0x107268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107268u;
        // 0x10726c: 0x8c70b830  lw          $s0, -0x47D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107268) {
            ctx->pc = 0x10728Cu;
            goto label_10728c;
        }
    }
    ctx->pc = 0x107270u;
    // 0x107270: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x107270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x107274: 0x2450f280  addiu       $s0, $v0, -0xD80
    ctx->pc = 0x107274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
    // 0x107278: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x107278u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x25F280u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x25F280u, _value); } while (0);
    // 0x10727c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107284: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x107284u;
    SET_GPR_U32(ctx, 31, 0x10728Cu);
    ctx->pc = 0x107288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107284u;
    // 0x107288: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x107284u, 0x10728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10728Cu;
label_10728c:
    // 0x10728c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107294: 0xc0618c2  jal         func_186308
    ctx->pc = 0x107294u;
    SET_GPR_U32(ctx, 31, 0x10729Cu);
    ctx->pc = 0x107298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107294u;
    // 0x107298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x107294u, 0x10729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10729Cu;
label_10729c:
    // 0x10729c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10729cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1072a0:
    // 0x1072a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1072a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1072a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1072a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1072a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1072a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1072ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1072acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1072b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1072B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1072B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B0u;
        // 0x1072b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1072B8u;
}
