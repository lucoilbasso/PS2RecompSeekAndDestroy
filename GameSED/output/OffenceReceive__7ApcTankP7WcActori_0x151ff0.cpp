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

// Function: OffenceReceive__7ApcTankP7WcActori
// Address: 0x151ff0 - 0x1521bc
void OffenceReceive__7ApcTankP7WcActori_0x151ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OffenceReceive__7ApcTankP7WcActori_0x151ff0");
#endif

    switch (ctx->pc) {
        case 0x152020u: goto label_152020;
        case 0x152110u: goto label_152110;
        case 0x152118u: goto label_152118;
        default: break;
    }

    ctx->pc = 0x151ff0u;

    // 0x151ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151ff4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x151ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x151ff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ffc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x151ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x152000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x152000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152004: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x152004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x152008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x152008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15200c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x152010: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x152010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x152014: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x152014u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x152018: 0xc0533d2  jal         func_14CF48
    ctx->pc = 0x152018u;
    SET_GPR_U32(ctx, 31, 0x152020u);
    ctx->pc = 0x15201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152018u;
    // 0x15201c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF48u, 0x152018u, 0x152020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152020u;
label_152020:
    // 0x152020: 0x5a00005d  blezl       $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x152020u;
    {
        const bool branch_taken_0x152020 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x152020) {
            ctx->pc = 0x152024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152020u;
            // 0x152024: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152198u;
            goto label_152198;
        }
    }
    ctx->pc = 0x152028u;
    // 0x152028: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x152028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    // 0x15202c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x152030: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x152030u;
    {
        const bool branch_taken_0x152030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152030) {
            ctx->pc = 0x152034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152030u;
            // 0x152034: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152198u;
            goto label_152198;
        }
    }
    ctx->pc = 0x152038u;
    // 0x152038: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x152038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15203c: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x15203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x152040: 0x54620055  bnel        $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x152040u;
    {
        const bool branch_taken_0x152040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x152040) {
            ctx->pc = 0x152044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152040u;
            // 0x152044: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152198u;
            goto label_152198;
        }
    }
    ctx->pc = 0x152048u;
    // 0x152048: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x152048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15204c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x152050: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x152050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x152054: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x152054u;
    {
        const bool branch_taken_0x152054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152054) {
            ctx->pc = 0x152058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152054u;
            // 0x152058: 0x8e6601ac  lw          $a2, 0x1AC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15215Cu;
            goto label_15215c;
        }
    }
    ctx->pc = 0x15205Cu;
    // 0x15205c: 0x96230266  lhu         $v1, 0x266($s1)
    ctx->pc = 0x15205cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x152060: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x152060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x152064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152068: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x152068u;
    {
        const bool branch_taken_0x152068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152068) {
            ctx->pc = 0x15206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152068u;
            // 0x15206c: 0x8e6601ac  lw          $a2, 0x1AC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15215Cu;
            goto label_15215c;
        }
    }
    ctx->pc = 0x152070u;
    // 0x152070: 0x8e620264  lw          $v0, 0x264($s3)
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x152074: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x152074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x152078: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x152078u;
    {
        const bool branch_taken_0x152078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152078) {
            ctx->pc = 0x15207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152078u;
            // 0x15207c: 0x8e620248  lw          $v0, 0x248($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152094u;
            goto label_152094;
        }
    }
    ctx->pc = 0x152080u;
    // 0x152080: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x152084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152088: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x152088u;
    {
        const bool branch_taken_0x152088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152088) {
            ctx->pc = 0x15208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152088u;
            // 0x15208c: 0x8e6601ac  lw          $a2, 0x1AC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15215Cu;
            goto label_15215c;
        }
    }
    ctx->pc = 0x152090u;
    // 0x152090: 0x8e620248  lw          $v0, 0x248($s3)
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 584)));
label_152094:
    // 0x152094: 0x12220030  beq         $s1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x152094u;
    {
        const bool branch_taken_0x152094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x152098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152094u;
        // 0x152098: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152094) {
            ctx->pc = 0x152158u;
            goto label_152158;
        }
    }
    ctx->pc = 0x15209Cu;
    // 0x15209c: 0x8e220190  lw          $v0, 0x190($s1)
    ctx->pc = 0x15209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x1520a0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1520a4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1520a4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1520a8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1520a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1520ac: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x1520acu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1520b0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1520b4: 0xc78482b0  lwc1        $f4, -0x7D50($gp)
    ctx->pc = 0x1520b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1520b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1520b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1520bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1520bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1520c0: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x1520c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1520c4: 0xc6600270  lwc1        $f0, 0x270($s3)
    ctx->pc = 0x1520c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1520c8: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x1520c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x1520cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1520ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1520d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1520d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1520d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1520d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1520d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1520d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1520dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1520dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1520e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1520e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1520e4: 0x46150029  min.s       $f0, $f0, $f21
    ctx->pc = 0x1520e4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[21]);
    // 0x1520e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1520ec: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1520ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1520f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1520f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1520f4: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x1520f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1520f8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1520f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1520fc: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1520fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x152100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152100u;
    {
        const bool branch_taken_0x152100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152100u;
        // 0x152104: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152100) {
            ctx->pc = 0x152110u;
            goto label_152110;
        }
    }
    ctx->pc = 0x152108u;
    // 0x152108: 0xc061920  jal         func_186480
    ctx->pc = 0x152108u;
    SET_GPR_U32(ctx, 31, 0x152110u);
    ctx->pc = 0x15210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152108u;
    // 0x15210c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x152108u, 0x152110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152110u;
label_152110:
    // 0x152110: 0xc061422  jal         func_185088
    ctx->pc = 0x152110u;
    SET_GPR_U32(ctx, 31, 0x152118u);
    ctx->pc = 0x152114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152110u;
    // 0x152114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x152110u, 0x152118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152118u;
label_152118:
    // 0x152118: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x152118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x15211c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15211cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152120: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x152120u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x152124: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x152124u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152128: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x152128u;
    {
        const bool branch_taken_0x152128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152128u;
        // 0x15212c: 0x26620820  addiu       $v0, $s3, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152128) {
            ctx->pc = 0x152148u;
            goto label_152148;
        }
    }
    ctx->pc = 0x152130u;
    // 0x152130: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x152130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152134: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x152134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152138: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x152138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15213c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15213cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152140: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x152140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152144: 0x26620820  addiu       $v0, $s3, 0x820
    ctx->pc = 0x152144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_152148:
    // 0x152148: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x152148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15214c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x15214cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152150: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x152150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152154: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x152154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_152158:
    // 0x152158: 0x8e6601ac  lw          $a2, 0x1AC($s3)
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
label_15215c:
    // 0x15215c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x15215Cu;
    {
        const bool branch_taken_0x15215c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x152160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15215Cu;
        // 0x152160: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15215c) {
            ctx->pc = 0x152198u;
            goto label_152198;
        }
    }
    ctx->pc = 0x152164u;
    // 0x152164: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x152164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152168: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x152168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15216c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x152170: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152174: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x152174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152178: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x152178u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15217c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x15217cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152180: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x152180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x152184: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x152184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x152188: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x152188u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x15218c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x15218cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x152190: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x152190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x152194: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152198:
    // 0x152198: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x152198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15219c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15219cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1521a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1521a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1521a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1521a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1521a8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1521a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1521ac: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1521acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1521b0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1521b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1521b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1521B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1521B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521B4u;
        // 0x1521b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1521B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1521BCu;
}
