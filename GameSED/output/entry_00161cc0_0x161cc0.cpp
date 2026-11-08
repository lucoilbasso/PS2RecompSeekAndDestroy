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

// Function: entry_00161cc0
// Address: 0x161cc0 - 0x161cf0
void entry_00161cc0_0x161cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161cc0_0x161cc0");
#endif

    ctx->pc = 0x161cc0u;

    // 0x161cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161cc4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x161cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161cc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ccc: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161cd0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x161cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161cd4: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x161CD4u;
    {
        const bool branch_taken_0x161cd4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CD4u;
        // 0x161cd8: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cd4) {
            ctx->pc = 0x161D74u;
            return;
        }
    }
    ctx->pc = 0x161CDCu;
    // 0x161cdc: 0xc7868328  lwc1        $f6, -0x7CD8($gp)
    ctx->pc = 0x161cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x161ce0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce4: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x161ce4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x161ce8: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    // 0x161cec: 0x0  nop
    ctx->pc = 0x161cecu;
    // NOP
    ctx->pc = 0x161cf0u;
}
