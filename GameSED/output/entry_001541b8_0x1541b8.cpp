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

// Function: entry_001541b8
// Address: 0x1541b8 - 0x1541d0
void entry_001541b8_0x1541b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001541b8_0x1541b8");
#endif

    ctx->pc = 0x1541b8u;

    // 0x1541b8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1541bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1541bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1541c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1541c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1541C4u;
    {
        const bool branch_taken_0x1541c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541C4u;
        // 0x1541c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541c4) {
            ctx->pc = 0x1541D0u;
            return;
        }
    }
    ctx->pc = 0x1541CCu;
    // 0x1541cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1541ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1541d0u;
}
