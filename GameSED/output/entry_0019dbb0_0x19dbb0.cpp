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

// Function: entry_0019dbb0
// Address: 0x19dbb0 - 0x19dbcc
void entry_0019dbb0_0x19dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dbb0_0x19dbb0");
#endif

    ctx->pc = 0x19dbb0u;

    // 0x19dbb0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x19dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dbb4: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x19dbb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dbb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dbbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19dbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19dbc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DBC0u;
    {
        const bool branch_taken_0x19dbc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBC0u;
        // 0x19dbc4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbc0) {
            ctx->pc = 0x19DBCCu;
            return;
        }
    }
    ctx->pc = 0x19DBC8u;
    // 0x19dbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dbccu;
}
