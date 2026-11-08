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

// Function: entry_0011f598
// Address: 0x11f598 - 0x11f5b8
void entry_0011f598_0x11f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f598_0x11f598");
#endif

    ctx->pc = 0x11f598u;

    // 0x11f598: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x11F598u;
    {
        const bool branch_taken_0x11f598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f598) {
            ctx->pc = 0x11F59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F598u;
            // 0x11f59c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F6B4u;
            return;
        }
    }
    ctx->pc = 0x11F5A0u;
    // 0x11f5a0: 0x51200005  beql        $t1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F5A0u;
    {
        const bool branch_taken_0x11f5a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f5a0) {
            ctx->pc = 0x11F5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F5A0u;
            // 0x11f5a4: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F5B8u;
            return;
        }
    }
    ctx->pc = 0x11F5A8u;
    // 0x11f5a8: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x11f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f5ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x11f5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x11f5b0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x11f5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x11f5b4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11f5b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x11f5b8u;
}
