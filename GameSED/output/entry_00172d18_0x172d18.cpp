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

// Function: entry_00172d18
// Address: 0x172d18 - 0x172da8
void entry_00172d18_0x172d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172d18_0x172d18");
#endif

    switch (ctx->pc) {
        case 0x172d50u: goto label_172d50;
        case 0x172d94u: goto label_172d94;
        default: break;
    }

    ctx->pc = 0x172d18u;

    // 0x172d18: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172d1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172d20: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d28: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d30: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172d34: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172d38: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172d3c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172d40: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172d44: 0x24e70063  addiu       $a3, $a3, 0x63
    ctx->pc = 0x172d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    // 0x172d48: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172D48u;
    SET_GPR_U32(ctx, 31, 0x172D50u);
    ctx->pc = 0x172D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D48u;
    // 0x172d4c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172D48u, 0x172D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D50u;
label_172d50:
    // 0x172d50: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x172d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172d54: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172d58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d5c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172d60: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172d64: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172d68: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x172d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x172d6c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x172d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172d70: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172d74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x172d78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172d7c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x172d80: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x172d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172d84: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x172d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x172d88: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172d8c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172D8Cu;
    SET_GPR_U32(ctx, 31, 0x172D94u);
    ctx->pc = 0x172D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D8Cu;
    // 0x172d90: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172D8Cu, 0x172D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D94u;
label_172d94:
    // 0x172d94: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D94u;
    {
        const bool branch_taken_0x172d94 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x172D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D94u;
        // 0x172d98: 0x26b30140  addiu       $s3, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d94) {
            ctx->pc = 0x172DA8u;
            return;
        }
    }
    ctx->pc = 0x172D9Cu;
    // 0x172d9c: 0x26b1fff0  addiu       $s1, $s5, -0x10
    ctx->pc = 0x172d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x172da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172DA0u;
    {
        const bool branch_taken_0x172da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DA0u;
        // 0x172da4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172da0) {
            ctx->pc = 0x172DB0u;
            return;
        }
    }
    ctx->pc = 0x172DA8u;
}
