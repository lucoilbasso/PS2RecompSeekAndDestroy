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

// Function: entry_001262f8
// Address: 0x1262f8 - 0x126390
void entry_001262f8_0x1262f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001262f8_0x1262f8");
#endif

    switch (ctx->pc) {
        case 0x126330u: goto label_126330;
        default: break;
    }

    ctx->pc = 0x1262f8u;

    // 0x1262f8: 0xe6760004  swc1        $f22, 0x4($s3)
    ctx->pc = 0x1262f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1262fc: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1262fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x126300: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x126300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x126304: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x126304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x126308: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x126308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x12630c: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x12630cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x126310: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x126310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x126314: 0x641ffd6  bgez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x126314u;
    {
        const bool branch_taken_0x126314 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x126318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126314u;
        // 0x126318: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126314) {
            ctx->pc = 0x126270u;
            return;
        }
    }
    ctx->pc = 0x12631Cu;
    // 0x12631c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x126320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x126320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126324: 0x24530b70  addiu       $s3, $v0, 0xB70
    ctx->pc = 0x126324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2928));
    // 0x126328: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x126328u;
    SET_GPR_U32(ctx, 31, 0x126330u);
    ctx->pc = 0x12632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126328u;
    // 0x12632c: 0x8ed10000  lw          $s1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x126328u, 0x126330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126330u;
label_126330:
    // 0x126330: 0x8ee20048  lw          $v0, 0x48($s7)
    ctx->pc = 0x126330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x126334: 0xc79580f4  lwc1        $f21, -0x7F0C($gp)
    ctx->pc = 0x126334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126338: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x126338u;
    {
        const bool branch_taken_0x126338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126338) {
            ctx->pc = 0x126390u;
            return;
        }
    }
    ctx->pc = 0x126340u;
    // 0x126340: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x126340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126344: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x126344u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x126348: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x126348u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12634c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x12634cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x126350: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x126350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126354: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126358: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12635c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x12635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x126360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x126360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x126364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x126364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126368: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12636c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126370: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x126370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x126374: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x126374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x126378: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x126378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12637c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12637cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x126380: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x126380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x126384: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x126384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x126388: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x126388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12638c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12638cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x126390u;
}
