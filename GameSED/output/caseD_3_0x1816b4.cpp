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

// Function: caseD_3
// Address: 0x1816b4 - 0x181730
void caseD_3_0x1816b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1816b4");
#endif

    switch (ctx->pc) {
        case 0x1816c8u: goto label_1816c8;
        default: break;
    }

    ctx->pc = 0x1816b4u;

    // 0x1816b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1816b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1816b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1816bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816c0: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x1816C0u;
    SET_GPR_U32(ctx, 31, 0x1816C8u);
    ctx->pc = 0x1816C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1816C0u;
    // 0x1816c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x1816C0u, 0x1816C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1816C8u;
label_1816c8:
    // 0x1816c8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1816C8u;
    {
        const bool branch_taken_0x1816c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816C8u;
        // 0x1816cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816c8) {
            ctx->pc = 0x181770u;
            return;
        }
    }
    ctx->pc = 0x1816D0u;
    // 0x1816d0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1816d4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1816D4u;
    {
        const bool branch_taken_0x1816d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816D4u;
        // 0x1816d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816d4) {
            ctx->pc = 0x181770u;
            return;
        }
    }
    ctx->pc = 0x1816DCu;
    // 0x1816dc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1816e0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1816e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1816e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1816e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1816e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1816ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1816ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1816f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1816f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1816f4: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1816f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1816f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1816fc: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x181700: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x181700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x181704: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x181704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x181708: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x181708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18170c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18170cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x181710: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x181714: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x181718: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x181718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18171c: 0x10910004  beq         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18171Cu;
    {
        const bool branch_taken_0x18171c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x181720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18171Cu;
        // 0x181720: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18171c) {
            ctx->pc = 0x181730u;
            return;
        }
    }
    ctx->pc = 0x181724u;
    // 0x181724: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x181724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x181728: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181728u;
    {
        const bool branch_taken_0x181728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181728u;
        // 0x18172c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181728) {
            ctx->pc = 0x181740u;
            return;
        }
    }
    ctx->pc = 0x181730u;
}
