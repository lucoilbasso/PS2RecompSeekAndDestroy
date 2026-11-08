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

// Function: entry_001b0b44
// Address: 0x1b0b44 - 0x1b0b58
void entry_001b0b44_0x1b0b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0b44_0x1b0b44");
#endif

    ctx->pc = 0x1b0b44u;

    // 0x1b0b44: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0b48: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1B0B48u;
    {
        const bool branch_taken_0x1b0b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B48u;
        // 0x1b0b4c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b48) {
            ctx->pc = 0x1B0F3Cu;
            return;
        }
    }
    ctx->pc = 0x1B0B50u;
    // 0x1b0b50: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1b0b50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1b0b54: 0x0  nop
    ctx->pc = 0x1b0b54u;
    // NOP
    ctx->pc = 0x1b0b58u;
}
