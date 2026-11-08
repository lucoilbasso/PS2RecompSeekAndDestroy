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

// Function: entry_0012afb0
// Address: 0x12afb0 - 0x12afe8
void entry_0012afb0_0x12afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012afb0_0x12afb0");
#endif

    ctx->pc = 0x12afb0u;

    // 0x12afb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12afb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb4: 0x184000c8  blez        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x12AFB4u;
    {
        const bool branch_taken_0x12afb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFB4u;
        // 0x12afb8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afb4) {
            ctx->pc = 0x12B2D8u;
            return;
        }
    }
    ctx->pc = 0x12AFBCu;
    // 0x12afbc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x12afc0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x12afc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12afc8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12afc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12afcc: 0x244beb70  addiu       $t3, $v0, -0x1490
    ctx->pc = 0x12afccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x12afd0: 0x8fb000e4  lw          $s0, 0xE4($sp)
    ctx->pc = 0x12afd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x12afd4: 0x246aebf0  addiu       $t2, $v1, -0x1410
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x12afd8: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x12afd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12afdc: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x12afdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12afe0: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x12afe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12afe4: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x12afe4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x12afe8u;
}
