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

// Function: entry_0017a19c
// Address: 0x17a19c - 0x17a1a8
void entry_0017a19c_0x17a19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a19c_0x17a19c");
#endif

    ctx->pc = 0x17a19cu;

    // 0x17a19c: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A19Cu;
    {
        const bool branch_taken_0x17a19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a19c) {
            ctx->pc = 0x17A1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A19Cu;
            // 0x17a1a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A170u;
            return;
        }
    }
    ctx->pc = 0x17A1A4u;
    // 0x17a1a4: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x17a1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    ctx->pc = 0x17a1a8u;
}
