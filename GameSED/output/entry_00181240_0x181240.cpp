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

// Function: entry_00181240
// Address: 0x181240 - 0x181268
void entry_00181240_0x181240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181240_0x181240");
#endif

    ctx->pc = 0x181240u;

    // 0x181240: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x181240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181244: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x181244u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181248: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x181248u;
    {
        const bool branch_taken_0x181248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181248) {
            ctx->pc = 0x181268u;
            return;
        }
    }
    ctx->pc = 0x181250u;
    // 0x181250: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x181250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181258: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x181258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x18125c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x18125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181260: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x181260u;
    {
        const bool branch_taken_0x181260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181260u;
        // 0x181264: 0xe5600004  swc1        $f0, 0x4($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181260) {
            ctx->pc = 0x181300u;
            return;
        }
    }
    ctx->pc = 0x181268u;
}
