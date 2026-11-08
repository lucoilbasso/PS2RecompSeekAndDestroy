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

// Function: Cmd_TANK_ALL_SET_Entry__FP15BsSCDEntControl
// Address: 0x116140 - 0x116290
void Cmd_TANK_ALL_SET_Entry__FP15BsSCDEntControl_0x116140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_ALL_SET_Entry__FP15BsSCDEntControl_0x116140");
#endif

    switch (ctx->pc) {
        case 0x116184u: goto label_116184;
        case 0x1161b8u: goto label_1161b8;
        case 0x1161d0u: goto label_1161d0;
        case 0x1161e8u: goto label_1161e8;
        case 0x1161f8u: goto label_1161f8;
        case 0x116220u: goto label_116220;
        case 0x116234u: goto label_116234;
        case 0x116244u: goto label_116244;
        default: break;
    }

    ctx->pc = 0x116140u;

    // 0x116140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x116140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x116144: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11614c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x116150: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x116150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x116154: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x116154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x116158: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11615c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x116160: 0x3c160025  lui         $s6, 0x25
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
    // 0x116164: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x116164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x116168: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x116168u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x11616c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x11616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x116170: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x116170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x116174: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116178: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x116178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11617c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11617Cu;
    SET_GPR_U32(ctx, 31, 0x116184u);
    ctx->pc = 0x116180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11617Cu;
    // 0x116180: 0x3c1e0025  lui         $fp, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11617Cu, 0x116184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116184u;
label_116184:
    // 0x116184: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116188: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x116188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11618c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11618cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116190: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x116194: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x116194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116198: 0x2473d370  addiu       $s3, $v1, -0x2C90
    ctx->pc = 0x116198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955888));
    // 0x11619c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x11619cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1161a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1161a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1161a4: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x1161a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x1161a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1161ac: 0x4a02b  sltu        $s4, $zero, $a0
    ctx->pc = 0x1161acu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1161b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1161b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1161b4: 0x0  nop
    ctx->pc = 0x1161b4u;
    // NOP
label_1161b8:
    // 0x1161b8: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1161B8u;
    {
        const bool branch_taken_0x1161b8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1161BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B8u;
        // 0x1161bc: 0x2a12006e  slti        $s2, $s0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b8) {
            ctx->pc = 0x1161D4u;
            goto label_1161d4;
        }
    }
    ctx->pc = 0x1161C0u;
    // 0x1161c0: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x1161c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x1161c4: 0x27c542f8  addiu       $a1, $fp, 0x42F8
    ctx->pc = 0x1161c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 17144));
    // 0x1161c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1161C8u;
    SET_GPR_U32(ctx, 31, 0x1161D0u);
    ctx->pc = 0x1161CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C8u;
    // 0x1161cc: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1161C8u, 0x1161D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161D0u;
label_1161d0:
    // 0x1161d0: 0x2a12006e  slti        $s2, $s0, 0x6E
    ctx->pc = 0x1161d0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
label_1161d4:
    // 0x1161d4: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1161D4u;
    {
        const bool branch_taken_0x1161d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1161D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161D4u;
        // 0x1161d8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161d4) {
            ctx->pc = 0x1161FCu;
            goto label_1161fc;
        }
    }
    ctx->pc = 0x1161DCu;
    // 0x1161dc: 0x26e44308  addiu       $a0, $s7, 0x4308
    ctx->pc = 0x1161dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17160));
    // 0x1161e0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1161E0u;
    SET_GPR_U32(ctx, 31, 0x1161E8u);
    ctx->pc = 0x1161E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161E0u;
    // 0x1161e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1161E0u, 0x1161E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161E8u;
label_1161e8:
    // 0x1161e8: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x1161e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x1161ec: 0x26c54318  addiu       $a1, $s6, 0x4318
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17176));
    // 0x1161f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1161F0u;
    SET_GPR_U32(ctx, 31, 0x1161F8u);
    ctx->pc = 0x1161F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161F0u;
    // 0x1161f4: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1161F0u, 0x1161F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161F8u;
label_1161f8:
    // 0x1161f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1161fc:
    // 0x1161fc: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1161fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116200: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x116204: 0x16950013  bne         $s4, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x116204u;
    {
        const bool branch_taken_0x116204 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x116208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116204u;
        // 0x116208: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116204) {
            ctx->pc = 0x116254u;
            goto label_116254;
        }
    }
    ctx->pc = 0x11620Cu;
    // 0x11620c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11620Cu;
    {
        const bool branch_taken_0x11620c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x116210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11620Cu;
        // 0x116210: 0x2664f1d0  addiu       $a0, $s3, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11620c) {
            ctx->pc = 0x116220u;
            goto label_116220;
        }
    }
    ctx->pc = 0x116214u;
    // 0x116214: 0x27c542f8  addiu       $a1, $fp, 0x42F8
    ctx->pc = 0x116214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 17144));
    // 0x116218: 0xc068186  jal         func_1A0618
    ctx->pc = 0x116218u;
    SET_GPR_U32(ctx, 31, 0x116220u);
    ctx->pc = 0x11621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116218u;
    // 0x11621c: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x116218u, 0x116220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116220u;
label_116220:
    // 0x116220: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x116220u;
    {
        const bool branch_taken_0x116220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116220u;
        // 0x116224: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116220) {
            ctx->pc = 0x116248u;
            goto label_116248;
        }
    }
    ctx->pc = 0x116228u;
    // 0x116228: 0x26e44308  addiu       $a0, $s7, 0x4308
    ctx->pc = 0x116228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17160));
    // 0x11622c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x116230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11622Cu;
    // 0x116230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x116234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x116238: 0x26c54318  addiu       $a1, $s6, 0x4318
    ctx->pc = 0x116238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17176));
    // 0x11623c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11623Cu;
    SET_GPR_U32(ctx, 31, 0x116244u);
    ctx->pc = 0x116240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11623Cu;
    // 0x116240: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11623Cu, 0x116244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116244u;
label_116244:
    // 0x116244: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_116248:
    // 0x116248: 0x2463c194  addiu       $v1, $v1, -0x3E6C
    ctx->pc = 0x116248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951316));
    // 0x11624c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x11624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x116250: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x116250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_116254:
    // 0x116254: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x116254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x116258: 0x2a02006e  slti        $v0, $s0, 0x6E
    ctx->pc = 0x116258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x11625c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x11625Cu;
    {
        const bool branch_taken_0x11625c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11625Cu;
        // 0x116260: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11625c) {
            ctx->pc = 0x1161B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116264u;
    // 0x116264: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116268: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11626c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11626cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116270: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116274: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x116274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116278: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x116278u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11627c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11627cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116280: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x116280u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116284: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x116284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116288: 0x3e00008  jr          $ra
    ctx->pc = 0x116288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116288u;
        // 0x11628c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116290u;
}
