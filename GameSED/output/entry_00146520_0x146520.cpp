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

// Function: entry_00146520
// Address: 0x146520 - 0x14657c
void entry_00146520_0x146520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146520_0x146520");
#endif

    switch (ctx->pc) {
        case 0x14655cu: goto label_14655c;
        default: break;
    }

    ctx->pc = 0x146520u;

    // 0x146520: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x146520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146524: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x146524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146528: 0xc4a301b8  lwc1        $f3, 0x1B8($a1)
    ctx->pc = 0x146528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14652c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x14652cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x146530: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x146530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x146538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14653c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14653cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x146540: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x146540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x146544: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x146544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x146548: 0xc4a001bc  lwc1        $f0, 0x1BC($a1)
    ctx->pc = 0x146548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14654c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x14654cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x146550: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x146550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x146554: 0xc0679ba  jal         func_19E6E8
    ctx->pc = 0x146554u;
    SET_GPR_U32(ctx, 31, 0x14655Cu);
    ctx->pc = 0x146558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146554u;
    // 0x146558: 0xc60d0018  lwc1        $f13, 0x18($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E6E8u, 0x146554u, 0x14655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14655Cu;
label_14655c:
    // 0x14655c: 0xc7818188  lwc1        $f1, -0x7E78($gp)
    ctx->pc = 0x14655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146560: 0x8e0204f0  lw          $v0, 0x4F0($s0)
    ctx->pc = 0x146560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x146564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146568u;
    {
        const bool branch_taken_0x146568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146568u;
        // 0x14656c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146568) {
            ctx->pc = 0x14657Cu;
            return;
        }
    }
    ctx->pc = 0x146570u;
    // 0x146570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146574: 0xc051f9a  jal         func_147E68
    ctx->pc = 0x146574u;
    SET_GPR_U32(ctx, 31, 0x14657Cu);
    ctx->pc = 0x146578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146574u;
    // 0x146578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147E68u, 0x146574u, 0x14657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14657Cu;
}
