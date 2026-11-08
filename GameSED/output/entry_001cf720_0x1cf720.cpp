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

// Function: entry_001cf720
// Address: 0x1cf720 - 0x1cf740
void entry_001cf720_0x1cf720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf720_0x1cf720");
#endif

    ctx->pc = 0x1cf720u;

    // 0x1cf720: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1cf720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1cf724: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1cf724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1cf728: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF728u;
    {
        const bool branch_taken_0x1cf728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF728u;
        // 0x1cf72c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf728) {
            ctx->pc = 0x1CF740u;
            return;
        }
    }
    ctx->pc = 0x1CF730u;
    // 0x1cf730: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1cf730u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cf734: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF734u;
    {
        const bool branch_taken_0x1cf734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF734u;
        // 0x1cf738: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf734) {
            ctx->pc = 0x1CF744u;
            return;
        }
    }
    ctx->pc = 0x1CF73Cu;
    // 0x1cf73c: 0x0  nop
    ctx->pc = 0x1cf73cu;
    // NOP
    ctx->pc = 0x1cf740u;
}
