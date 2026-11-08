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

// Function: entry_001965bc
// Address: 0x1965bc - 0x1965d0
void entry_001965bc_0x1965bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001965bc_0x1965bc");
#endif

    ctx->pc = 0x1965bcu;

    // 0x1965bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1965bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1965c0: 0x1ac00023  blez        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x1965C0u;
    {
        const bool branch_taken_0x1965c0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1965C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965C0u;
        // 0x1965c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965c0) {
            ctx->pc = 0x196650u;
            return;
        }
    }
    ctx->pc = 0x1965C8u;
    // 0x1965c8: 0x8e8501b4  lw          $a1, 0x1B4($s4)
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1965cc: 0x268600d0  addiu       $a2, $s4, 0xD0
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    ctx->pc = 0x1965d0u;
}
