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

// Function: entry_0010fbf8
// Address: 0x10fbf8 - 0x10fc0c
void entry_0010fbf8_0x10fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbf8_0x10fbf8");
#endif

    ctx->pc = 0x10fbf8u;

    // 0x10fbf8: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x10fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x10fbfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBFCu;
    {
        const bool branch_taken_0x10fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBFCu;
        // 0x10fc00: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbfc) {
            ctx->pc = 0x10FC0Cu;
            return;
        }
    }
    ctx->pc = 0x10FC04u;
    // 0x10fc04: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x10fc04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x10fc08: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x10fc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x10fc0cu;
}
