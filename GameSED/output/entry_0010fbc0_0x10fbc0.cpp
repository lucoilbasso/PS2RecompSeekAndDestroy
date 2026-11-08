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

// Function: entry_0010fbc0
// Address: 0x10fbc0 - 0x10fbd0
void entry_0010fbc0_0x10fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbc0_0x10fbc0");
#endif

    ctx->pc = 0x10fbc0u;

    // 0x10fbc0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FBC0u;
    {
        const bool branch_taken_0x10fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fbc0) {
            ctx->pc = 0x10FBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FBC0u;
            // 0x10fbc4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FBD0u;
            return;
        }
    }
    ctx->pc = 0x10FBC8u;
    // 0x10fbc8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10fbcc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x10fbd0u;
}
