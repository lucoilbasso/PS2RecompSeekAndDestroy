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

// Function: entry_0011fd00
// Address: 0x11fd00 - 0x11fd18
void entry_0011fd00_0x11fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd00_0x11fd00");
#endif

    ctx->pc = 0x11fd00u;

    // 0x11fd00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11fd04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD04u;
    {
        const bool branch_taken_0x11fd04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD04u;
        // 0x11fd08: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd04) {
            ctx->pc = 0x11FD18u;
            return;
        }
    }
    ctx->pc = 0x11FD0Cu;
    // 0x11fd0c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x11fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fd10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11fd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11fd14: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x11fd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    ctx->pc = 0x11fd18u;
}
