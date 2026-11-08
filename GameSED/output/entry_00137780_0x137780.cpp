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

// Function: entry_00137780
// Address: 0x137780 - 0x13779c
void entry_00137780_0x137780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137780_0x137780");
#endif

    ctx->pc = 0x137780u;

    // 0x137780: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x137780u;
    {
        const bool branch_taken_0x137780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137780) {
            ctx->pc = 0x137784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137780u;
            // 0x137784: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13779Cu;
            return;
        }
    }
    ctx->pc = 0x137788u;
    // 0x137788: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x137788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x13778c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x13778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x137790: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x137790u;
    {
        const bool branch_taken_0x137790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137790) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137798u;
    // 0x137798: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x137798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x13779cu;
}
