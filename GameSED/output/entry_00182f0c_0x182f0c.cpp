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

// Function: entry_00182f0c
// Address: 0x182f0c - 0x182f20
void entry_00182f0c_0x182f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182f0c_0x182f0c");
#endif

    ctx->pc = 0x182f0cu;

    // 0x182f0c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x182f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182f10: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182f18: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x182F18u;
    {
        const bool branch_taken_0x182f18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182f18) {
            ctx->pc = 0x182F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182F18u;
            // 0x182f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182EF0u;
            return;
        }
    }
    ctx->pc = 0x182F20u;
}
