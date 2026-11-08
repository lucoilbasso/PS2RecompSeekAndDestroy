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

// Function: entry_00161bb8
// Address: 0x161bb8 - 0x161bf8
void entry_00161bb8_0x161bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161bb8_0x161bb8");
#endif

    ctx->pc = 0x161bb8u;

    // 0x161bb8: 0x8e8219e0  lw          $v0, 0x19E0($s4)
    ctx->pc = 0x161bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6624)));
    // 0x161bbc: 0x1582007c  bne         $t4, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x161BBCu;
    {
        const bool branch_taken_0x161bbc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x161BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BBCu;
        // 0x161bc0: 0x268611b0  addiu       $a2, $s4, 0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bbc) {
            ctx->pc = 0x161DB0u;
            return;
        }
    }
    ctx->pc = 0x161BC4u;
    // 0x161bc4: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x161bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x161bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bcc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x161bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x161bd0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x161bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x161bd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161bd8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x161bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161bdc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x161bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161be0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x161BE0u;
    {
        const bool branch_taken_0x161be0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x161BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BE0u;
        // 0x161be4: 0xad4e0020  sw          $t6, 0x20($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161be0) {
            ctx->pc = 0x161C7Cu;
            return;
        }
    }
    ctx->pc = 0x161BE8u;
    // 0x161be8: 0xc7858324  lwc1        $f5, -0x7CDC($gp)
    ctx->pc = 0x161be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161bec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x161becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bf0: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x161bf0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x161bf4: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x161bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    ctx->pc = 0x161bf8u;
}
