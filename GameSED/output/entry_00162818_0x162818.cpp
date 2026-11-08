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

// Function: entry_00162818
// Address: 0x162818 - 0x162848
void entry_00162818_0x162818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162818_0x162818");
#endif

    ctx->pc = 0x162818u;

    // 0x162818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x162818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16281c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x16281Cu;
    {
        const bool branch_taken_0x16281c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16281c) {
            ctx->pc = 0x162820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16281Cu;
            // 0x162820: 0x8e2219c4  lw          $v0, 0x19C4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1628B8u;
            return;
        }
    }
    ctx->pc = 0x162824u;
    // 0x162824: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x162824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162828: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x162828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16282c: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x16282cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x162830: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x162830u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x162834: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x162834u;
    {
        const bool branch_taken_0x162834 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x162838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162834u;
        // 0x162838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162834) {
            ctx->pc = 0x1628B4u;
            return;
        }
    }
    ctx->pc = 0x16283Cu;
    // 0x16283c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x16283cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x162840: 0x263011c0  addiu       $s0, $s1, 0x11C0
    ctx->pc = 0x162840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4544));
    // 0x162844: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x162844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x162848u;
}
