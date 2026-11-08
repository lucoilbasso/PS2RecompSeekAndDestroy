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

// Function: entry_001cfb58
// Address: 0x1cfb58 - 0x1cfb68
void entry_001cfb58_0x1cfb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb58_0x1cfb58");
#endif

    ctx->pc = 0x1cfb58u;

    // 0x1cfb58: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFB58u;
    {
        const bool branch_taken_0x1cfb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb58) {
            ctx->pc = 0x1CFB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFB58u;
            // 0x1cfb5c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFB68u;
            return;
        }
    }
    ctx->pc = 0x1CFB60u;
    // 0x1cfb60: 0x61482  srl         $v0, $a2, 18
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 18));
    // 0x1cfb64: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    ctx->pc = 0x1cfb68u;
}
