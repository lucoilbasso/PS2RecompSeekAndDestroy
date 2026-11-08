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

// Function: entry_00163d24
// Address: 0x163d24 - 0x163d98
void entry_00163d24_0x163d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163d24_0x163d24");
#endif

    switch (ctx->pc) {
        case 0x163d68u: goto label_163d68;
        case 0x163d90u: goto label_163d90;
        default: break;
    }

    ctx->pc = 0x163d24u;

    // 0x163d24: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x163D24u;
    {
        const bool branch_taken_0x163d24 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D24u;
        // 0x163d28: 0x265001f0  addiu       $s0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d24) {
            ctx->pc = 0x163DB0u;
            return;
        }
    }
    ctx->pc = 0x163D2Cu;
    // 0x163d2c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x163d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x163d30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x163d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x163d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x163d38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x163d38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x163d3c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x163D3Cu;
    {
        const bool branch_taken_0x163d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163d3c) {
            ctx->pc = 0x163DB0u;
            return;
        }
    }
    ctx->pc = 0x163D44u;
    // 0x163d44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x163d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163d48: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x163D48u;
    {
        const bool branch_taken_0x163d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D48u;
        // 0x163d4c: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d48) {
            ctx->pc = 0x163DB0u;
            return;
        }
    }
    ctx->pc = 0x163D50u;
    // 0x163d50: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x163d50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x163d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x163d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163d58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d5c: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x163d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
    // 0x163d60: 0xc0618da  jal         func_186368
    ctx->pc = 0x163D60u;
    SET_GPR_U32(ctx, 31, 0x163D68u);
    ctx->pc = 0x163D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D60u;
    // 0x163d64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163D60u, 0x163D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D68u;
label_163d68:
    // 0x163d68: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x163d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x163d6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x163d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163d70: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x163d74: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x163d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x163d78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163D78u;
    {
        const bool branch_taken_0x163d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D78u;
        // 0x163d7c: 0x8e100040  lw          $s0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d78) {
            ctx->pc = 0x163D98u;
            return;
        }
    }
    ctx->pc = 0x163D80u;
    // 0x163d80: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x163d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x163d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d88: 0xc0618da  jal         func_186368
    ctx->pc = 0x163D88u;
    SET_GPR_U32(ctx, 31, 0x163D90u);
    ctx->pc = 0x163D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D88u;
    // 0x163d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163D88u, 0x163D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D90u;
label_163d90:
    // 0x163d90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163D90u;
    {
        const bool branch_taken_0x163d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d90) {
            ctx->pc = 0x163DB0u;
            return;
        }
    }
    ctx->pc = 0x163D98u;
}
