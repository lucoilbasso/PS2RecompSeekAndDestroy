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

// Function: entry_00161fc8
// Address: 0x161fc8 - 0x161fe4
void entry_00161fc8_0x161fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161fc8_0x161fc8");
#endif

    ctx->pc = 0x161fc8u;

    // 0x161fc8: 0xad220030  sw          $v0, 0x30($t1)
    ctx->pc = 0x161fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 2));
    // 0x161fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161FCCu;
    {
        const bool branch_taken_0x161fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FCCu;
        // 0x161fd0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fcc) {
            ctx->pc = 0x161FE4u;
            return;
        }
    }
    ctx->pc = 0x161FD4u;
    // 0x161fd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161fd8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x161fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x161fdc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x161fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161fe0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x161fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x161fe4u;
}
