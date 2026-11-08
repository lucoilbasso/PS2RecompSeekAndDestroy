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

// Function: entry_00161ac8
// Address: 0x161ac8 - 0x161af8
void entry_00161ac8_0x161ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161ac8_0x161ac8");
#endif

    ctx->pc = 0x161ac8u;

    // 0x161ac8: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161ad0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x161ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x161ad4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x161ad8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x161ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161adc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x161adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161ae0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x161AE0u;
    {
        const bool branch_taken_0x161ae0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AE0u;
        // 0x161ae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ae0) {
            ctx->pc = 0x161B7Cu;
            return;
        }
    }
    ctx->pc = 0x161AE8u;
    // 0x161ae8: 0xc7858320  lwc1        $f5, -0x7CE0($gp)
    ctx->pc = 0x161ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161aec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161af0: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x161af0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x161af4: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    ctx->pc = 0x161af8u;
}
