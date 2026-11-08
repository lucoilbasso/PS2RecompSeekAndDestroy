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

// Function: entry_0019adfc
// Address: 0x19adfc - 0x19ae20
void entry_0019adfc_0x19adfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019adfc_0x19adfc");
#endif

    ctx->pc = 0x19adfcu;

    // 0x19adfc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19adfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ae00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x19ae04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AE04u;
    {
        const bool branch_taken_0x19ae04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE04u;
        // 0x19ae08: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae04) {
            ctx->pc = 0x19AE20u;
            return;
        }
    }
    ctx->pc = 0x19AE0Cu;
    // 0x19ae0c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x19ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19ae10: 0x27a90001  addiu       $t1, $sp, 0x1
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x19ae14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19AE14u;
    {
        const bool branch_taken_0x19ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE14u;
        // 0x19ae18: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae14) {
            ctx->pc = 0x19AE54u;
            return;
        }
    }
    ctx->pc = 0x19AE1Cu;
    // 0x19ae1c: 0x0  nop
    ctx->pc = 0x19ae1cu;
    // NOP
    ctx->pc = 0x19ae20u;
}
