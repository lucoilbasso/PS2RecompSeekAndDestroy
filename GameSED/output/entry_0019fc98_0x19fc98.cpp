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

// Function: entry_0019fc98
// Address: 0x19fc98 - 0x19fcb8
void entry_0019fc98_0x19fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc98_0x19fc98");
#endif

    ctx->pc = 0x19fc98u;

    // 0x19fc98: 0x54800021  bnel        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x19FC98u;
    {
        const bool branch_taken_0x19fc98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc98) {
            ctx->pc = 0x19FC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC98u;
            // 0x19fc9c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FD20u;
            return;
        }
    }
    ctx->pc = 0x19FCA0u;
    // 0x19fca0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fca4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fca8: 0x2448f640  addiu       $t0, $v0, -0x9C0
    ctx->pc = 0x19fca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x19fcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19fcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcb0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x19fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
    // 0x19fcb4: 0x0  nop
    ctx->pc = 0x19fcb4u;
    // NOP
    ctx->pc = 0x19fcb8u;
}
