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

// Function: _lf_bind
// Address: 0x1b5b90 - 0x1b5c90
void _lf_bind_0x1b5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_bind_0x1b5b90");
#endif

    switch (ctx->pc) {
        case 0x1b5bb8u: goto label_1b5bb8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5c10u: goto label_1b5c10;
        case 0x1b5c50u: goto label_1b5c50;
        default: break;
    }

    ctx->pc = 0x1b5b90u;

    // 0x1b5b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5b94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b5b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b5b98: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1b5b98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1b5b9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b5ba0: 0x8e42aa20  lw          $v0, -0x55E0($s2)
    ctx->pc = 0x1b5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA20u));
    // 0x1b5ba4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b5ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b5ba8: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B5BA8u;
    {
        const bool branch_taken_0x1b5ba8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BA8u;
        // 0x1b5bac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ba8) {
            ctx->pc = 0x1B5C74u;
            goto label_1b5c74;
        }
    }
    ctx->pc = 0x1B5BB0u;
    // 0x1b5bb0: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b5bb4: 0x2630b600  addiu       $s0, $s1, -0x4A00
    ctx->pc = 0x1b5bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948352));
label_1b5bb8:
    // 0x1b5bb8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b5bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bc0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1b5bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1b5bc4: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1B5BC4u;
    SET_GPR_U32(ctx, 31, 0x1B5BCCu);
    ctx->pc = 0x1B5BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5BC4u;
    // 0x1b5bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1B5BC4u, 0x1B5BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5BCCu;
label_1b5bcc:
    // 0x1b5bcc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5BCCu;
    {
        const bool branch_taken_0x1b5bcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5bcc) {
            ctx->pc = 0x1B5BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5BCCu;
            // 0x1b5bd0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5BDCu;
            goto label_1b5bdc;
        }
    }
    ctx->pc = 0x1B5BD4u;
    // 0x1b5bd4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B5BD4u;
    {
        const bool branch_taken_0x1b5bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BD4u;
        // 0x1b5bd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bd4) {
            ctx->pc = 0x1B5C78u;
            goto label_1b5c78;
        }
    }
    ctx->pc = 0x1B5BDCu;
label_1b5bdc:
    // 0x1b5bdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B5BDCu;
    {
        const bool branch_taken_0x1b5bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BDCu;
        // 0x1b5be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5bdc) {
            ctx->pc = 0x1B5C44u;
            goto label_1b5c44;
        }
    }
    ctx->pc = 0x1B5BE4u;
    // 0x1b5be4: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5be4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b5be8: 0xae40aa20  sw          $zero, -0x55E0($s2)
    ctx->pc = 0x1b5be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945312), GPR_U32(ctx, 0));
    // 0x1b5bec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5bf0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b5bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b5bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b5bfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c00: 0x2629b400  addiu       $t1, $s1, -0x4C00
    ctx->pc = 0x1b5c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947840));
    // 0x1b5c04: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5c08: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5C08u;
    SET_GPR_U32(ctx, 31, 0x1B5C10u);
    ctx->pc = 0x1B5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C08u;
    // 0x1b5c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5C08u, 0x1B5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C10u;
label_1b5c10:
    // 0x1b5c10: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5C10u;
    {
        const bool branch_taken_0x1b5c10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C10u;
        // 0x1b5c14: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c10) {
            ctx->pc = 0x1B5C24u;
            goto label_1b5c24;
        }
    }
    ctx->pc = 0x1B5C18u;
    // 0x1b5c18: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b5c1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5C1Cu;
    {
        const bool branch_taken_0x1b5c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C1Cu;
        // 0x1b5c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c1c) {
            ctx->pc = 0x1B5C78u;
            goto label_1b5c78;
        }
    }
    ctx->pc = 0x1B5C24u;
label_1b5c24:
    // 0x1b5c24: 0x2627b400  addiu       $a3, $s1, -0x4C00
    ctx->pc = 0x1b5c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947840));
    // 0x1b5c28: 0x2466b628  addiu       $a2, $v1, -0x49D8
    ctx->pc = 0x1b5c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948392));
    // 0x1b5c2c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1b5c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1b5c30: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1b5c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1b5c34: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1b5c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b5c38: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1b5c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1b5c3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B5C3Cu;
    {
        const bool branch_taken_0x1b5c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C3Cu;
        // 0x1b5c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c3c) {
            ctx->pc = 0x1B5C78u;
            goto label_1b5c78;
        }
    }
    ctx->pc = 0x1B5C44u;
label_1b5c44:
    // 0x1b5c44: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1b5c48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5c4c: 0x0  nop
    ctx->pc = 0x1b5c4cu;
    // NOP
label_1b5c50:
    // 0x1b5c50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5c54: 0x0  nop
    ctx->pc = 0x1b5c54u;
    // NOP
    // 0x1b5c58: 0x0  nop
    ctx->pc = 0x1b5c58u;
    // NOP
    // 0x1b5c5c: 0x0  nop
    ctx->pc = 0x1b5c5cu;
    // NOP
    // 0x1b5c60: 0x0  nop
    ctx->pc = 0x1b5c60u;
    // NOP
    // 0x1b5c64: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5C64u;
    {
        const bool branch_taken_0x1b5c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5c64) {
            ctx->pc = 0x1B5C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5c50;
        }
    }
    ctx->pc = 0x1B5C6Cu;
    // 0x1b5c6c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1B5C6Cu;
    {
        const bool branch_taken_0x1b5c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C6Cu;
        // 0x1b5c70: 0x2630b600  addiu       $s0, $s1, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c6c) {
            ctx->pc = 0x1B5BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5bb8;
        }
    }
    ctx->pc = 0x1B5C74u;
label_1b5c74:
    // 0x1b5c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5c78:
    // 0x1b5c78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5c7c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b5c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5c80: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b5c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5c84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C88u;
        // 0x1b5c8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5C90u;
}
