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

// Function: entry_0019fce4
// Address: 0x19fce4 - 0x19fcf8
void entry_0019fce4_0x19fce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fce4_0x19fce4");
#endif

    ctx->pc = 0x19fce4u;

    // 0x19fce4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19fce8: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x19fce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19fcec: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FCECu;
            // 0x19fcf0: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FCB8u;
            return;
        }
    }
    ctx->pc = 0x19FCF4u;
    // 0x19fcf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19fcf8u;
}
