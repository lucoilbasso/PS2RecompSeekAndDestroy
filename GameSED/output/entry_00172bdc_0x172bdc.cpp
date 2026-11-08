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

// Function: entry_00172bdc
// Address: 0x172bdc - 0x172c58
void entry_00172bdc_0x172bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172bdc_0x172bdc");
#endif

    switch (ctx->pc) {
        case 0x172c0cu: goto label_172c0c;
        case 0x172c2cu: goto label_172c2c;
        default: break;
    }

    ctx->pc = 0x172bdcu;

    // 0x172bdc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x172bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x172be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172be4: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x172be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x172be8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172bec: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x172bf0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172bf4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172bf8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172bfc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172c00: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172c04: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172C04u;
    SET_GPR_U32(ctx, 31, 0x172C0Cu);
    ctx->pc = 0x172C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C04u;
    // 0x172c08: 0x24e70103  addiu       $a3, $a3, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172C04u, 0x172C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C0Cu;
label_172c0c:
    // 0x172c0c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172c10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x172c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c18: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x172c1c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172c20: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172c24: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172C24u;
    SET_GPR_U32(ctx, 31, 0x172C2Cu);
    ctx->pc = 0x172C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C24u;
    // 0x172c28: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172C24u, 0x172C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C2Cu;
label_172c2c:
    // 0x172c2c: 0x1ac0000a  blez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x172C2Cu;
    {
        const bool branch_taken_0x172c2c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x172C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C2Cu;
        // 0x172c30: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c2c) {
            ctx->pc = 0x172C58u;
            return;
        }
    }
    ctx->pc = 0x172C34u;
    // 0x172c34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c38: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172c3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172c44: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172c48: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172c4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172c50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172C50u;
    {
        const bool branch_taken_0x172c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C50u;
        // 0x172c54: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c50) {
            ctx->pc = 0x172C78u;
            return;
        }
    }
    ctx->pc = 0x172C58u;
}
