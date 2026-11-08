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

// Function: entry_00147dc0
// Address: 0x147dc0 - 0x147dfc
void entry_00147dc0_0x147dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147dc0_0x147dc0");
#endif

    switch (ctx->pc) {
        case 0x147dd0u: goto label_147dd0;
        case 0x147ddcu: goto label_147ddc;
        default: break;
    }

    ctx->pc = 0x147dc0u;

    // 0x147dc0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x147DC0u;
    {
        const bool branch_taken_0x147dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147dc0) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147DC8u;
    // 0x147dc8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147DC8u;
    SET_GPR_U32(ctx, 31, 0x147DD0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147DC8u, 0x147DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DD0u;
label_147dd0:
    // 0x147dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147dd4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147DD4u;
    SET_GPR_U32(ctx, 31, 0x147DDCu);
    ctx->pc = 0x147DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DD4u;
    // 0x147dd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147DD4u, 0x147DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DDCu;
label_147ddc:
    // 0x147ddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x147ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147de0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x147de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147de8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x147de8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x147df0: 0xe6210264  swc1        $f1, 0x264($s1)
    ctx->pc = 0x147df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    // 0x147df4: 0xc051d3a  jal         func_1474E8
    ctx->pc = 0x147DF4u;
    SET_GPR_U32(ctx, 31, 0x147DFCu);
    ctx->pc = 0x147DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DF4u;
    // 0x147df8: 0xe620025c  swc1        $f0, 0x25C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 604), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1474E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1474E8u, 0x147DF4u, 0x147DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DFCu;
}
