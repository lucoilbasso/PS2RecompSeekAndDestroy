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

// Function: entry_00154af4
// Address: 0x154af4 - 0x154b10
void entry_00154af4_0x154af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154af4_0x154af4");
#endif

    switch (ctx->pc) {
        case 0x154b04u: goto label_154b04;
        default: break;
    }

    ctx->pc = 0x154af4u;

    // 0x154af4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x154af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154af8: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x154afc: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x154AFCu;
    SET_GPR_U32(ctx, 31, 0x154B04u);
    ctx->pc = 0x154B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AFCu;
    // 0x154b00: 0x2604037c  addiu       $a0, $s0, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x154AFCu, 0x154B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B04u;
label_154b04:
    // 0x154b04: 0xc600034c  lwc1        $f0, 0x34C($s0)
    ctx->pc = 0x154b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154b08: 0xe6000380  swc1        $f0, 0x380($s0)
    ctx->pc = 0x154b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
    // 0x154b0c: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x154b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->pc = 0x154b10u;
}
