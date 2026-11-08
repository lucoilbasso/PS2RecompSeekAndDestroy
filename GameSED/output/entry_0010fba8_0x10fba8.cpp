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

// Function: entry_0010fba8
// Address: 0x10fba8 - 0x10fbc0
void entry_0010fba8_0x10fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fba8_0x10fba8");
#endif

    ctx->pc = 0x10fba8u;

    // 0x10fba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FBA8u;
    {
        const bool branch_taken_0x10fba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBA8u;
        // 0x10fbac: 0x2c822000  sltiu       $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fba8) {
            ctx->pc = 0x10FBC0u;
            return;
        }
    }
    ctx->pc = 0x10FBB0u;
    // 0x10fbb0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x10fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x10fbb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FBB4u;
    {
        const bool branch_taken_0x10fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBB4u;
        // 0x10fbb8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbb4) {
            ctx->pc = 0x10FBD0u;
            return;
        }
    }
    ctx->pc = 0x10FBBCu;
    // 0x10fbbc: 0x0  nop
    ctx->pc = 0x10fbbcu;
    // NOP
    ctx->pc = 0x10fbc0u;
}
