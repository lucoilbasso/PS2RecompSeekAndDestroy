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

// Function: entry_0016dbac
// Address: 0x16dbac - 0x16dbc8
void entry_0016dbac_0x16dbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dbac_0x16dbac");
#endif

    switch (ctx->pc) {
        case 0x16dbb8u: goto label_16dbb8;
        default: break;
    }

    ctx->pc = 0x16dbacu;

    // 0x16dbac: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x16dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x16dbb0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16DBB0u;
    SET_GPR_U32(ctx, 31, 0x16DBB8u);
    ctx->pc = 0x16DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DBB0u;
    // 0x16dbb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DBB0u, 0x16DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBB8u;
label_16dbb8:
    // 0x16dbb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DBB8u;
    {
        const bool branch_taken_0x16dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dbb8) {
            ctx->pc = 0x16DBC8u;
            return;
        }
    }
    ctx->pc = 0x16DBC0u;
    // 0x16dbc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBC0u;
        // 0x16dbc4: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DC04u;
            return;
        }
    }
    ctx->pc = 0x16DBC8u;
}
