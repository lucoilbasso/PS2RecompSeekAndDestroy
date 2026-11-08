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

// Function: entry_001b7d60
// Address: 0x1b7d60 - 0x1b7dcc
void entry_001b7d60_0x1b7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7d60_0x1b7d60");
#endif

    switch (ctx->pc) {
        case 0x1b7db0u: goto label_1b7db0;
        case 0x1b7dc4u: goto label_1b7dc4;
        default: break;
    }

    ctx->pc = 0x1b7d60u;

    // 0x1b7d60: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b7d64: 0x8c44bfe0  lw          $a0, -0x4020($v0)
    ctx->pc = 0x1b7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40BFE0u));
    // 0x1b7d68: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1b7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1b7d6c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1b7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1b7d70: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1b7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b7d74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b7d78: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1b7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b7d7c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1b7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1b7d80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7d84: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1b7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1b7d88: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1b7d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1b7d8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b7d90: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1b7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1b7d94: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1b7d94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1b7d98: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b7d9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b7da0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b7da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7da8: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B7DA8u;
    SET_GPR_U32(ctx, 31, 0x1B7DB0u);
    ctx->pc = 0x1B7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DA8u;
    // 0x1b7dac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B7DA8u, 0x1B7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DB0u;
label_1b7db0:
    // 0x1b7db0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b7db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1b7db4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7DB4u;
    {
        const bool branch_taken_0x1b7db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DB4u;
        // 0x1b7db8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7db4) {
            ctx->pc = 0x1B7DCCu;
            return;
        }
    }
    ctx->pc = 0x1B7DBCu;
    // 0x1b7dbc: 0xc06be0c  jal         func_1AF830
    ctx->pc = 0x1B7DBCu;
    SET_GPR_U32(ctx, 31, 0x1B7DC4u);
    ctx->pc = 0x1B7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DBCu;
    // 0x1b7dc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF830u, 0x1B7DBCu, 0x1B7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DC4u;
label_1b7dc4:
    // 0x1b7dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7DC4u;
    {
        const bool branch_taken_0x1b7dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DC4u;
        // 0x1b7dc8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7dc4) {
            ctx->pc = 0x1B7DD8u;
            return;
        }
    }
    ctx->pc = 0x1B7DCCu;
}
