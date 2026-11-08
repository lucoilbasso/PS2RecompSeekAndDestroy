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

// Function: caseD_8
// Address: 0x14db20 - 0x14db38
void caseD_8_0x14db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x14db20");
#endif

    switch (ctx->pc) {
        case 0x14db28u: goto label_14db28;
        default: break;
    }

    ctx->pc = 0x14db20u;

    // 0x14db20: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DB20u;
    SET_GPR_U32(ctx, 31, 0x14DB28u);
    ctx->pc = 0x14DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB20u;
    // 0x14db24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DB20u, 0x14DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB28u;
label_14db28:
    // 0x14db28: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14DB30u;
    {
        const bool branch_taken_0x14db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB30u;
        // 0x14db34: 0xe620030c  swc1        $f0, 0x30C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 780), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db30) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14DB38u;
}
