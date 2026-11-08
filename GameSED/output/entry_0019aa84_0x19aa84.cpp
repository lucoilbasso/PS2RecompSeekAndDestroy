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

// Function: entry_0019aa84
// Address: 0x19aa84 - 0x19aaa8
void entry_0019aa84_0x19aa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa84_0x19aa84");
#endif

    ctx->pc = 0x19aa84u;

    // 0x19aa84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19aa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19aa88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa8c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19aa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa90: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x19AA90u;
    {
        const bool branch_taken_0x19aa90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA90u;
        // 0x19aa94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa90) {
            ctx->pc = 0x19AAECu;
            return;
        }
    }
    ctx->pc = 0x19AA98u;
    // 0x19aa98: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19aa98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aa9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19AA9Cu;
    {
        const bool branch_taken_0x19aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA9Cu;
        // 0x19aaa0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa9c) {
            ctx->pc = 0x19AAF8u;
            return;
        }
    }
    ctx->pc = 0x19AAA4u;
    // 0x19aaa4: 0x0  nop
    ctx->pc = 0x19aaa4u;
    // NOP
    ctx->pc = 0x19aaa8u;
}
