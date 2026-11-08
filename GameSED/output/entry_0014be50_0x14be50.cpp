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

// Function: entry_0014be50
// Address: 0x14be50 - 0x14be68
void entry_0014be50_0x14be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014be50_0x14be50");
#endif

    ctx->pc = 0x14be50u;

    // 0x14be50: 0x24050946  addiu       $a1, $zero, 0x946
    ctx->pc = 0x14be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x14be54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14be58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14be5c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14be60: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BE60u;
    {
        const bool branch_taken_0x14be60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x14BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BE60u;
        // 0x14be64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14be60) {
            ctx->pc = 0x14BE74u;
            return;
        }
    }
    ctx->pc = 0x14BE68u;
}
