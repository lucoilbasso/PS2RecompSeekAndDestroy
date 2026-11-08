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

// Function: entry_00110fac
// Address: 0x110fac - 0x110fb8
void entry_00110fac_0x110fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110fac_0x110fac");
#endif

    ctx->pc = 0x110facu;

    // 0x110fac: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x110fb0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x110FB0u;
    {
        const bool branch_taken_0x110fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB0u;
        // 0x110fb4: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb0) {
            ctx->pc = 0x1110ACu;
            return;
        }
    }
    ctx->pc = 0x110FB8u;
}
