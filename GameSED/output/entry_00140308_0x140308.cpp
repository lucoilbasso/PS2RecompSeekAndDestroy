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

// Function: entry_00140308
// Address: 0x140308 - 0x140328
void entry_00140308_0x140308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140308_0x140308");
#endif

    ctx->pc = 0x140308u;

    // 0x140308: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x140308u;
    {
        const bool branch_taken_0x140308 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x140308) {
            ctx->pc = 0x14030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140308u;
            // 0x14030c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140328u;
            return;
        }
    }
    ctx->pc = 0x140310u;
    // 0x140310: 0xc6400184  lwc1        $f0, 0x184($s2)
    ctx->pc = 0x140310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140314: 0xc6410188  lwc1        $f1, 0x188($s2)
    ctx->pc = 0x140314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140318: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x140318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x14031c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14031Cu;
    {
        const bool branch_taken_0x14031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14031Cu;
        // 0x140320: 0xe64101a8  swc1        $f1, 0x1A8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14031c) {
            ctx->pc = 0x140434u;
            return;
        }
    }
    ctx->pc = 0x140324u;
    // 0x140324: 0x0  nop
    ctx->pc = 0x140324u;
    // NOP
    ctx->pc = 0x140328u;
}
