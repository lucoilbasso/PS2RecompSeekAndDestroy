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

// Function: entry_0010faa8
// Address: 0x10faa8 - 0x10fac8
void entry_0010faa8_0x10faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010faa8_0x10faa8");
#endif

    ctx->pc = 0x10faa8u;

    // 0x10faa8: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x10faa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x10faac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FAACu;
    {
        const bool branch_taken_0x10faac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAACu;
        // 0x10fab0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faac) {
            ctx->pc = 0x10FAC8u;
            return;
        }
    }
    ctx->pc = 0x10FAB4u;
    // 0x10fab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fabc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x10fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fac0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fac4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x10fac8u;
}
