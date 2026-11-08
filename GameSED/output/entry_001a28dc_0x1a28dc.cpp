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

// Function: entry_001a28dc
// Address: 0x1a28dc - 0x1a28f8
void entry_001a28dc_0x1a28dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a28dc_0x1a28dc");
#endif

    switch (ctx->pc) {
        case 0x1a28e8u: goto label_1a28e8;
        default: break;
    }

    ctx->pc = 0x1a28dcu;

    // 0x1a28dc: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1a28dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a28e0: 0xc067b78  jal         func_19EDE0
    ctx->pc = 0x1A28E0u;
    SET_GPR_U32(ctx, 31, 0x1A28E8u);
    ctx->pc = 0x1A28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28E0u;
    // 0x1a28e4: 0xc60d000c  lwc1        $f13, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDE0u, 0x1A28E0u, 0x1A28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28E8u;
label_1a28e8:
    // 0x1a28e8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1a28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a28ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a28ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a28f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A28F0u;
    {
        const bool branch_taken_0x1a28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28F0u;
        // 0x1a28f4: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28f0) {
            ctx->pc = 0x1A2900u;
            return;
        }
    }
    ctx->pc = 0x1A28F8u;
}
