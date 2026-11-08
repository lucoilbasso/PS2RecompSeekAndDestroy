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

// Function: entry_0017a160
// Address: 0x17a160 - 0x17a170
void entry_0017a160_0x17a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a160_0x17a160");
#endif

    ctx->pc = 0x17a160u;

    // 0x17a160: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A160u;
    {
        const bool branch_taken_0x17a160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a160) {
            ctx->pc = 0x17A164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A160u;
            // 0x17a164: 0x8e50015c  lw          $s0, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A1A8u;
            return;
        }
    }
    ctx->pc = 0x17A168u;
    // 0x17a168: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17a16c: 0x0  nop
    ctx->pc = 0x17a16cu;
    // NOP
    ctx->pc = 0x17a170u;
}
