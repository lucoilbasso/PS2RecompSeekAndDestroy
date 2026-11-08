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

// Function: entry_0014fb9c
// Address: 0x14fb9c - 0x14fbc8
void entry_0014fb9c_0x14fb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb9c_0x14fb9c");
#endif

    ctx->pc = 0x14fb9cu;

    // 0x14fb9c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x14FB9Cu;
    {
        const bool branch_taken_0x14fb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB9Cu;
        // 0x14fba0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb9c) {
            ctx->pc = 0x14FD40u;
            return;
        }
    }
    ctx->pc = 0x14FBA4u;
    // 0x14fba4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x14fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14fba8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fbac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FBACu;
    {
        const bool branch_taken_0x14fbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBACu;
        // 0x14fbb0: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbac) {
            ctx->pc = 0x14FBC8u;
            return;
        }
    }
    ctx->pc = 0x14FBB4u;
    // 0x14fbb4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x14fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14fbb8: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x14fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x14fbbc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14fbc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FBC0u;
    {
        const bool branch_taken_0x14fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBC0u;
        // 0x14fbc4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbc0) {
            ctx->pc = 0x14FBCCu;
            return;
        }
    }
    ctx->pc = 0x14FBC8u;
}
