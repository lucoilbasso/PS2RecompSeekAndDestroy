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

// Function: entry_00125290
// Address: 0x125290 - 0x1252b8
void entry_00125290_0x125290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125290_0x125290");
#endif

    ctx->pc = 0x125290u;

    // 0x125290: 0x4617a836  c.le.s      $f21, $f23
    ctx->pc = 0x125290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125294: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x125294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x125298: 0x450000cd  bc1f        . + 4 + (0xCD << 2)
    ctx->pc = 0x125298u;
    {
        const bool branch_taken_0x125298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125298u;
        // 0x12529c: 0x8fa30134  lw          $v1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125298) {
            ctx->pc = 0x1255D0u;
            return;
        }
    }
    ctx->pc = 0x1252A0u;
    // 0x1252a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1252a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1252a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1252a8: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1252ac: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1252b0: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1252b4: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x1252b8u;
}
