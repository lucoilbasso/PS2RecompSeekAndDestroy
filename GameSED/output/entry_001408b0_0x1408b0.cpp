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

// Function: entry_001408b0
// Address: 0x1408b0 - 0x1408e0
void entry_001408b0_0x1408b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001408b0_0x1408b0");
#endif

    ctx->pc = 0x1408b0u;

    // 0x1408b0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1408B0u;
    {
        const bool branch_taken_0x1408b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408B0u;
        // 0x1408b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408b0) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x1408B8u;
    // 0x1408b8: 0x8c6300d8  lw          $v1, 0xD8($v1)
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1408bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1408BCu;
    {
        const bool branch_taken_0x1408bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1408C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408BCu;
        // 0x1408c0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408bc) {
            ctx->pc = 0x1408E0u;
            return;
        }
    }
    ctx->pc = 0x1408C4u;
    // 0x1408c4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1408C4u;
    {
        const bool branch_taken_0x1408c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1408C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C4u;
        // 0x1408c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408c4) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x1408CCu;
    // 0x1408cc: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1408CCu;
    {
        const bool branch_taken_0x1408cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1408cc) {
            ctx->pc = 0x1408D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1408CCu;
            // 0x1408d0: 0xc481000c  lwc1        $f1, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140908u;
            return;
        }
    }
    ctx->pc = 0x1408D4u;
    // 0x1408d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1408D4u;
    {
        const bool branch_taken_0x1408d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408d4) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x1408DCu;
    // 0x1408dc: 0x0  nop
    ctx->pc = 0x1408dcu;
    // NOP
    ctx->pc = 0x1408e0u;
}
