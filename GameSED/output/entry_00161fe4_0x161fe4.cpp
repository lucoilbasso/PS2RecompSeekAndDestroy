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

// Function: entry_00161fe4
// Address: 0x161fe4 - 0x162018
void entry_00161fe4_0x161fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161fe4_0x161fe4");
#endif

    ctx->pc = 0x161fe4u;

    // 0x161fe4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x161fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161fec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x161ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x161ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x161ff4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x161ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161ff8: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x161FF8u;
    {
        const bool branch_taken_0x161ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x161FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FF8u;
        // 0x161ffc: 0x25230010  addiu       $v1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ff8) {
            ctx->pc = 0x1620B8u;
            return;
        }
    }
    ctx->pc = 0x162000u;
    // 0x162000: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x162000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x162004: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x162004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162008: 0xc787833c  lwc1        $f7, -0x7CC4($gp)
    ctx->pc = 0x162008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x16200c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x162010: 0xc7868340  lwc1        $f6, -0x7CC0($gp)
    ctx->pc = 0x162010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x162014: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x162014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162018u;
}
