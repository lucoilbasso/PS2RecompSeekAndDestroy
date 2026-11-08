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

// Function: entry_001390ec
// Address: 0x1390ec - 0x139100
void entry_001390ec_0x1390ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001390ec_0x1390ec");
#endif

    ctx->pc = 0x1390ecu;

    // 0x1390ec: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1390ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1390f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1390f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1390f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1390f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1390f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1390F8u;
    {
        const bool branch_taken_0x1390f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1390FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390F8u;
        // 0x1390fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390f8) {
            ctx->pc = 0x139104u;
            return;
        }
    }
    ctx->pc = 0x139100u;
}
