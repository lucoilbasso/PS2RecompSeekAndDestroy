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

// Function: ApCRefWorkInqPosition__FP10ApCRefWork
// Address: 0x140f98 - 0x141174
void ApCRefWorkInqPosition__FP10ApCRefWork_0x140f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefWorkInqPosition__FP10ApCRefWork_0x140f98");
#endif

    switch (ctx->pc) {
        case 0x141044u: goto label_141044;
        case 0x141050u: goto label_141050;
        case 0x14113cu: goto label_14113c;
        default: break;
    }

    ctx->pc = 0x140f98u;

    // 0x140f98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140f9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x140f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x140fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x140fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x140fa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x140fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x140facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x140fb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x140fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x140fb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x140fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x140fb8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x140fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x140fbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x140fc0: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140fc4: 0x3293000f  andi        $s3, $s4, 0xF
    ctx->pc = 0x140fc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x140fc8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x140fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x140fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140FCCu;
    {
        const bool branch_taken_0x140fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FCCu;
        // 0x140fd0: 0x8e150010  lw          $s5, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fcc) {
            ctx->pc = 0x140FF0u;
            goto label_140ff0;
        }
    }
    ctx->pc = 0x140FD4u;
    // 0x140fd4: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x140FD4u;
    {
        const bool branch_taken_0x140fd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fd4) {
            ctx->pc = 0x140FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140FD4u;
            // 0x140fd8: 0x8ea2001c  lw          $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141010u;
            goto label_141010;
        }
    }
    ctx->pc = 0x140FDCu;
    // 0x140fdc: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x140FDCu;
    {
        const bool branch_taken_0x140fdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FDCu;
        // 0x140fe0: 0x32830070  andi        $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fdc) {
            ctx->pc = 0x141008u;
            goto label_141008;
        }
    }
    ctx->pc = 0x140FE4u;
    // 0x140fe4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x140FE4u;
    {
        const bool branch_taken_0x140fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140fe4) {
            ctx->pc = 0x141060u;
            goto label_141060;
        }
    }
    ctx->pc = 0x140FECu;
    // 0x140fec: 0x0  nop
    ctx->pc = 0x140fecu;
    // NOP
label_140ff0:
    // 0x140ff0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x140ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x140ff4: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x140FF4u;
    {
        const bool branch_taken_0x140ff4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x140FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FF4u;
        // 0x140ff8: 0x32830070  andi        $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ff4) {
            ctx->pc = 0x141058u;
            goto label_141058;
        }
    }
    ctx->pc = 0x140FFCu;
    // 0x140ffc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x140FFCu;
    {
        const bool branch_taken_0x140ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ffc) {
            ctx->pc = 0x141060u;
            goto label_141060;
        }
    }
    ctx->pc = 0x141004u;
    // 0x141004: 0x0  nop
    ctx->pc = 0x141004u;
    // NOP
label_141008:
    // 0x141008: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x141008u;
    {
        const bool branch_taken_0x141008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141008u;
        // 0x14100c: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141008) {
            ctx->pc = 0x14105Cu;
            goto label_14105c;
        }
    }
    ctx->pc = 0x141010u;
label_141010:
    // 0x141010: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x141014: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x141014u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141018: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14101c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x14101cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141020: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x141020u;
    {
        const bool branch_taken_0x141020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x141024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141020u;
        // 0x141024: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141020) {
            ctx->pc = 0x14105Cu;
            goto label_14105c;
        }
    }
    ctx->pc = 0x141028u;
    // 0x141028: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x141028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14102c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14102cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x141030: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x141030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x141034: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x141034u;
    {
        const bool branch_taken_0x141034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141034) {
            ctx->pc = 0x141038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141034u;
            // 0x141038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141048u;
            goto label_141048;
        }
    }
    ctx->pc = 0x14103Cu;
    // 0x14103c: 0xc061920  jal         func_186480
    ctx->pc = 0x14103Cu;
    SET_GPR_U32(ctx, 31, 0x141044u);
    ctx->pc = 0x141040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14103Cu;
    // 0x141040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x14103Cu, 0x141044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141044u;
label_141044:
    // 0x141044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_141048:
    // 0x141048: 0xc061422  jal         func_185088
    ctx->pc = 0x141048u;
    SET_GPR_U32(ctx, 31, 0x141050u);
    ctx->pc = 0x14104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141048u;
    // 0x14104c: 0x26320110  addiu       $s2, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x141048u, 0x141050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141050u;
label_141050:
    // 0x141050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141050u;
    {
        const bool branch_taken_0x141050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141050u;
        // 0x141054: 0x32830070  andi        $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141050) {
            ctx->pc = 0x141060u;
            goto label_141060;
        }
    }
    ctx->pc = 0x141058u;
label_141058:
    // 0x141058: 0x26b200f0  addiu       $s2, $s5, 0xF0
    ctx->pc = 0x141058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
label_14105c:
    // 0x14105c: 0x32830070  andi        $v1, $s4, 0x70
    ctx->pc = 0x14105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
label_141060:
    // 0x141060: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x141060u;
    {
        const bool branch_taken_0x141060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141060u;
        // 0x141064: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141060) {
            ctx->pc = 0x141150u;
            goto label_141150;
        }
    }
    ctx->pc = 0x141068u;
    // 0x141068: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x141068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x14106c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14106Cu;
    {
        const bool branch_taken_0x14106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14106Cu;
        // 0x141070: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14106c) {
            ctx->pc = 0x141088u;
            goto label_141088;
        }
    }
    ctx->pc = 0x141074u;
    // 0x141074: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x141074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x141078: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x141078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14107c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x14107cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x141080: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x141080u;
    {
        const bool branch_taken_0x141080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141080u;
        // 0x141084: 0xfe030048  sd          $v1, 0x48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141080) {
            ctx->pc = 0x14113Cu;
            goto label_14113c;
        }
    }
    ctx->pc = 0x141088u;
label_141088:
    // 0x141088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141088u;
    {
        const bool branch_taken_0x141088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141088u;
        // 0x14108c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141088) {
            ctx->pc = 0x1410A0u;
            goto label_1410a0;
        }
    }
    ctx->pc = 0x141090u;
    // 0x141090: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x141094: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x141094u;
    {
        const bool branch_taken_0x141094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141094u;
        // 0x141098: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141094) {
            ctx->pc = 0x14111Cu;
            goto label_14111c;
        }
    }
    ctx->pc = 0x14109Cu;
    // 0x14109c: 0x0  nop
    ctx->pc = 0x14109cu;
    // NOP
label_1410a0:
    // 0x1410a0: 0x5662000f  bnel        $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1410A0u;
    {
        const bool branch_taken_0x1410a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1410a0) {
            ctx->pc = 0x1410A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1410A0u;
            // 0x1410a4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1410E0u;
            goto label_1410e0;
        }
    }
    ctx->pc = 0x1410A8u;
    // 0x1410a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1410ac: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1410acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1410b0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1410b4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1410b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1410b8: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1410b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1410bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1410bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1410c0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1410c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1410c4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1410c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1410c8: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x1410c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1410cc: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x1410ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1410d0: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x1410d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1410d4: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1410d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1410d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1410D8u;
    {
        const bool branch_taken_0x1410d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410D8u;
        // 0x1410dc: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410d8) {
            ctx->pc = 0x141140u;
            goto label_141140;
        }
    }
    ctx->pc = 0x1410E0u;
label_1410e0:
    // 0x1410e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1410e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1410e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1410E4u;
    {
        const bool branch_taken_0x1410e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410E4u;
        // 0x1410e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410e4) {
            ctx->pc = 0x141150u;
            goto label_141150;
        }
    }
    ctx->pc = 0x1410ECu;
    // 0x1410ec: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1410f0: 0x32840400  andi        $a0, $s4, 0x400
    ctx->pc = 0x1410f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1024);
    // 0x1410f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1410f8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1410F8u;
    {
        const bool branch_taken_0x1410f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410F8u;
        // 0x1410fc: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410f8) {
            ctx->pc = 0x141130u;
            goto label_141130;
        }
    }
    ctx->pc = 0x141100u;
    // 0x141100: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x141104: 0x32820800  andi        $v0, $s4, 0x800
    ctx->pc = 0x141104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2048);
    // 0x141108: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141108u;
    {
        const bool branch_taken_0x141108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141108u;
        // 0x14110c: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141108) {
            ctx->pc = 0x14111Cu;
            goto label_14111c;
        }
    }
    ctx->pc = 0x141110u;
    // 0x141110: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x141114: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141118: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x141118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_14111c:
    // 0x14111c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x141120: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x141120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141124: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x141124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x141128: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x141128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14112c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x14112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_141130:
    // 0x141130: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x141134: 0xc067586  jal         func_19D618
    ctx->pc = 0x141134u;
    SET_GPR_U32(ctx, 31, 0x14113Cu);
    ctx->pc = 0x141138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141134u;
    // 0x141138: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x141134u, 0x14113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14113Cu;
label_14113c:
    // 0x14113c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x14113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_141140:
    // 0x141140: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x141140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141144: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x141144u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x141148: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x141148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14114c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14114cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_141150:
    // 0x141150: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x141150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141154: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x141154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x141158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14115c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14115cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x141160: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x141160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141164: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x141164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x141168: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x141168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14116c: 0x3e00008  jr          $ra
    ctx->pc = 0x14116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14116Cu;
        // 0x141170: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14116Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141174u;
}
