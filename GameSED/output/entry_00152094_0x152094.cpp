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

// Function: entry_00152094
// Address: 0x152094 - 0x152110
void entry_00152094_0x152094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152094_0x152094");
#endif

    ctx->pc = 0x152094u;

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
            return;
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
            return;
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
}
