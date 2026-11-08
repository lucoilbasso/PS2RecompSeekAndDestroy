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

// Function: caseD_9
// Address: 0x14db38 - 0x14db50
void caseD_9_0x14db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x14db38");
#endif

    switch (ctx->pc) {
        case 0x14db40u: goto label_14db40;
        default: break;
    }

    ctx->pc = 0x14db38u;

    // 0x14db38: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DB38u;
    SET_GPR_U32(ctx, 31, 0x14DB40u);
    ctx->pc = 0x14DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DB38u;
    // 0x14db3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DB38u, 0x14DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB40u;
label_14db40:
    // 0x14db40: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x14db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14db44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14db44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14db48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DB48u;
    {
        const bool branch_taken_0x14db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB48u;
        // 0x14db4c: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db48) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14DB50u;
}
