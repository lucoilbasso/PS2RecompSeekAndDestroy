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

// Function: entry_001c4edc
// Address: 0x1c4edc - 0x1c4f34
void entry_001c4edc_0x1c4edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4edc_0x1c4edc");
#endif

    switch (ctx->pc) {
        case 0x1c4f14u: goto label_1c4f14;
        case 0x1c4f20u: goto label_1c4f20;
        default: break;
    }

    ctx->pc = 0x1c4edcu;

    // 0x1c4edc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1c4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1c4ee0: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C4EE0u;
    {
        const bool branch_taken_0x1c4ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EE0u;
        // 0x1c4ee4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ee0) {
            ctx->pc = 0x1C4E70u;
            return;
        }
    }
    ctx->pc = 0x1C4EE8u;
    // 0x1c4ee8: 0x26910400  addiu       $s1, $s4, 0x400
    ctx->pc = 0x1c4ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x1c4eec: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1c4eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ef0: 0x26c7eec0  addiu       $a3, $s6, -0x1140
    ctx->pc = 0x1c4ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962880));
    // 0x1c4ef4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c4ef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4efc: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1c4efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1c4f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f04: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c4f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c4f08: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1c4f08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4f0c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C4F14u);
    ctx->pc = 0x1C4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F0Cu;
    // 0x1c4f10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C4F0Cu, 0x1C4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F14u;
label_1c4f14:
    // 0x1c4f14: 0x8ea4ddfc  lw          $a0, -0x2204($s5)
    ctx->pc = 0x1c4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    // 0x1c4f18: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C4F18u;
    SET_GPR_U32(ctx, 31, 0x1C4F20u);
    ctx->pc = 0x1C4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F18u;
    // 0x1c4f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C4F18u, 0x1C4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F20u;
label_1c4f20:
    // 0x1c4f20: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4F20u;
    {
        const bool branch_taken_0x1c4f20 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1c4f20) {
            ctx->pc = 0x1C4F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F20u;
            // 0x1c4f24: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4F34u;
            return;
        }
    }
    ctx->pc = 0x1C4F28u;
    // 0x1c4f28: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1c4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1c4f2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4F2Cu;
    {
        const bool branch_taken_0x1c4f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F2Cu;
        // 0x1c4f30: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f2c) {
            ctx->pc = 0x1C4F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F34u;
}
