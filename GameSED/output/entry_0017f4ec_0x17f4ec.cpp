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

// Function: entry_0017f4ec
// Address: 0x17f4ec - 0x17f500
void entry_0017f4ec_0x17f4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f4ec_0x17f4ec");
#endif

    ctx->pc = 0x17f4ecu;

    // 0x17f4ec: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17f4f0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17F4F0u;
    {
        const bool branch_taken_0x17f4f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4F0u;
        // 0x17f4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4f0) {
            ctx->pc = 0x17F528u;
            return;
        }
    }
    ctx->pc = 0x17F4F8u;
    // 0x17f4f8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17f4fc: 0x0  nop
    ctx->pc = 0x17f4fcu;
    // NOP
    ctx->pc = 0x17f500u;
}
