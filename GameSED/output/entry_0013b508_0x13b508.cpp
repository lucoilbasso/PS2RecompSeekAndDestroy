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

// Function: entry_0013b508
// Address: 0x13b508 - 0x13b558
void entry_0013b508_0x13b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b508_0x13b508");
#endif

    switch (ctx->pc) {
        case 0x13b530u: goto label_13b530;
        default: break;
    }

    ctx->pc = 0x13b508u;

    // 0x13b508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b510: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x13b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x13b514: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x13b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x13b518: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x13b518u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13b51c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x13b51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13b520: 0xc6a10170  lwc1        $f1, 0x170($s5)
    ctx->pc = 0x13b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b524: 0xc6a00174  lwc1        $f0, 0x174($s5)
    ctx->pc = 0x13b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b528: 0xc0516f0  jal         func_145BC0
    ctx->pc = 0x13B528u;
    SET_GPR_U32(ctx, 31, 0x13B530u);
    ctx->pc = 0x13B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B528u;
    // 0x13b52c: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BC0u, 0x13B528u, 0x13B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B530u;
label_13b530:
    // 0x13b530: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13b534: 0x1840004a  blez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x13B534u;
    {
        const bool branch_taken_0x13b534 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B534u;
        // 0x13b538: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b534) {
            ctx->pc = 0x13B660u;
            return;
        }
    }
    ctx->pc = 0x13B53Cu;
    // 0x13b53c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x13b53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x13b540: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x13b540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13b544: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x13b544u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b548: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x13b548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x13b54c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13b54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13b550: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x13b550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b554: 0x0  nop
    ctx->pc = 0x13b554u;
    // NOP
    ctx->pc = 0x13b558u;
}
