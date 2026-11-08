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

// Function: entry_001646b8
// Address: 0x1646b8 - 0x1646d8
void entry_001646b8_0x1646b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646b8_0x1646b8");
#endif

    ctx->pc = 0x1646b8u;

    // 0x1646b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1646b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1646bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1646c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1646c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646c4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1646c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1646c8: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1646C8u;
    {
        const bool branch_taken_0x1646c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1646CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C8u;
        // 0x1646cc: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c8) {
            ctx->pc = 0x164728u;
            return;
        }
    }
    ctx->pc = 0x1646D0u;
    // 0x1646d0: 0xc7838360  lwc1        $f3, -0x7CA0($gp)
    ctx->pc = 0x1646d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1646d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1646d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1646d8u;
}
