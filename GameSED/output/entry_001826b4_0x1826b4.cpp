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

// Function: entry_001826b4
// Address: 0x1826b4 - 0x1826d0
void entry_001826b4_0x1826b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001826b4_0x1826b4");
#endif

    ctx->pc = 0x1826b4u;

    // 0x1826b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1826B4u;
    {
        const bool branch_taken_0x1826b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826b4) {
            ctx->pc = 0x1826D0u;
            return;
        }
    }
    ctx->pc = 0x1826BCu;
    // 0x1826bc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1826bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1826c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1826c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1826C4u;
    {
        const bool branch_taken_0x1826c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1826C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826C4u;
        // 0x1826c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826c4) {
            ctx->pc = 0x1826D0u;
            return;
        }
    }
    ctx->pc = 0x1826CCu;
    // 0x1826cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1826ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1826d0u;
}
