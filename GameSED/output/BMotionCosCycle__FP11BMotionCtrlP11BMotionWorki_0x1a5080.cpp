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

// Function: BMotionCosCycle__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a5080 - 0x1a516c
void BMotionCosCycle__FP11BMotionCtrlP11BMotionWorki_0x1a5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionCosCycle__FP11BMotionCtrlP11BMotionWorki_0x1a5080");
#endif

    switch (ctx->pc) {
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        default: break;
    }

    ctx->pc = 0x1a5080u;

label_1a5080:
    // 0x1a5080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5084:
    // 0x1a5084: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a5084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5088:
    // 0x1a5088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a508c:
    // 0x1a508c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a508cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5090:
    // 0x1a5090: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a5090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a5094:
    // 0x1a5094: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a5094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a5098:
    // 0x1a5098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a509c:
    // 0x1a509c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a50a0:
    // 0x1a50a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a50a4:
    // 0x1a50a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a50a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a50a8:
    // 0x1a50a8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a50ac:
    // 0x1a50ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a50b0:
    // 0x1a50b0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a50b4:
    // 0x1a50b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a50b8:
    // 0x1a50b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a50b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a50bc:
    // 0x1a50bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a50bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1a50c0:
    // 0x1a50c0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1a50c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1a50c4:
    // 0x1a50c4: 0xc4e30020  lwc1        $f3, 0x20($a3)
    ctx->pc = 0x1a50c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a50c8:
    // 0x1a50c8: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x1a50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
label_1a50cc:
    // 0x1a50cc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1a50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1a50d0:
    // 0x1a50d0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a50d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a50d4:
    // 0x1a50d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a50d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a50d8:
    // 0x1a50d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a50dc:
    // 0x1a50dc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a50e0:
    // 0x1a50e0: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a50e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
label_1a50e4:
    // 0x1a50e4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1a50e8:
    // 0x1a50e8: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a50ec:
    // 0x1a50ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1a50ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1a50f0:
    // 0x1a50f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a50f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a50f4:
    // 0x1a50f4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a50f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1a50f8:
    // 0x1a50f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a50fc:
    if (ctx->pc == 0x1A50FCu) {
        ctx->pc = 0x1A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50F8u;
        // 0x1a50fc: 0x46030b00  add.s       $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5100u;
        goto label_1a5100;
    }
    ctx->pc = 0x1A50F8u;
    {
        const bool branch_taken_0x1a50f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50F8u;
        // 0x1a50fc: 0x46030b00  add.s       $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50f8) {
            ctx->pc = 0x1A5110u;
            goto label_1a5110;
        }
    }
    ctx->pc = 0x1A5100u;
label_1a5100:
    // 0x1a5100: 0x60f809  jalr        $v1
label_1a5104:
    if (ctx->pc == 0x1A5104u) {
        ctx->pc = 0x1A5108u;
        goto label_1a5108;
    }
    ctx->pc = 0x1A5100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5108u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5100u, 0x1A5108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5108u;
label_1a5108:
    // 0x1a5108: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a510c:
    if (ctx->pc == 0x1A510Cu) {
        ctx->pc = 0x1A510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5108u;
        // 0x1a510c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5110u;
        goto label_1a5110;
    }
    ctx->pc = 0x1A5108u;
    {
        const bool branch_taken_0x1a5108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5108u;
        // 0x1a510c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5108) {
            ctx->pc = 0x1A5140u;
            goto label_1a5140;
        }
    }
    ctx->pc = 0x1A5110u;
label_1a5110:
    // 0x1a5110: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a5110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5114:
    // 0x1a5114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a5118:
    if (ctx->pc == 0x1A5118u) {
        ctx->pc = 0x1A5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5114u;
        // 0x1a5118: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A511Cu;
        goto label_1a511c;
    }
    ctx->pc = 0x1A5114u;
    {
        const bool branch_taken_0x1a5114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5114u;
        // 0x1a5118: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5114) {
            ctx->pc = 0x1A5130u;
            goto label_1a5130;
        }
    }
    ctx->pc = 0x1A511Cu;
label_1a511c:
    // 0x1a511c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5120:
    // 0x1a5120: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a5120u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a5124:
    // 0x1a5124: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a5128:
    if (ctx->pc == 0x1A5128u) {
        ctx->pc = 0x1A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5124u;
        // 0x1a5128: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A512Cu;
        goto label_1a512c;
    }
    ctx->pc = 0x1A5124u;
    {
        const bool branch_taken_0x1a5124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5124u;
        // 0x1a5128: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5124) {
            ctx->pc = 0x1A5140u;
            goto label_1a5140;
        }
    }
    ctx->pc = 0x1A512Cu;
label_1a512c:
    // 0x1a512c: 0x0  nop
    ctx->pc = 0x1a512cu;
    // NOP
label_1a5130:
    // 0x1a5130: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a5130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5134:
    // 0x1a5134: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a5134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a5138:
    // 0x1a5138: 0xc068186  jal         func_1A0618
label_1a513c:
    if (ctx->pc == 0x1A513Cu) {
        ctx->pc = 0x1A513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5138u;
        // 0x1a513c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5140u;
        goto label_1a5140;
    }
    ctx->pc = 0x1A5138u;
    SET_GPR_U32(ctx, 31, 0x1A5140u);
    ctx->pc = 0x1A513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5138u;
    // 0x1a513c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5138u, 0x1A5140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5140u;
label_1a5140:
    // 0x1a5140: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a5140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a5144:
    // 0x1a5144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5148:
    if (ctx->pc == 0x1A5148u) {
        ctx->pc = 0x1A5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5144u;
        // 0x1a5148: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A514Cu;
        goto label_1a514c;
    }
    ctx->pc = 0x1A5144u;
    {
        const bool branch_taken_0x1a5144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5144u;
        // 0x1a5148: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5144) {
            ctx->pc = 0x1A5158u;
            goto label_1a5158;
        }
    }
    ctx->pc = 0x1A514Cu;
label_1a514c:
    // 0x1a514c: 0x40f809  jalr        $v0
label_1a5150:
    if (ctx->pc == 0x1A5150u) {
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5154u;
        goto label_1a5154;
    }
    ctx->pc = 0x1A514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5154u);
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A514Cu, 0x1A5154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5154u;
label_1a5154:
    // 0x1a5154: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a5154u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a5158:
    // 0x1a5158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a515c:
    // 0x1a515c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a515cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5160:
    // 0x1a5160: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a5164:
    // 0x1a5164: 0x3e00008  jr          $ra
label_1a5168:
    if (ctx->pc == 0x1A5168u) {
        ctx->pc = 0x1A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5164u;
        // 0x1a5168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A516Cu;
        goto label_fallthrough_0x1a5164;
    }
    ctx->pc = 0x1A5164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5164u;
        // 0x1a5168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5164:
    ctx->pc = 0x1A516Cu;
}
