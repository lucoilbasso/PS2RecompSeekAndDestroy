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

// Function: StdCommandEffectEnvironment__8WcSndStdP27W_SNDSTD_EFFECT_ENVIRONMENT
// Address: 0x17aa00 - 0x17ab00
void StdCommandEffectEnvironment__8WcSndStdP27W_SNDSTD_EFFECT_ENVIRONMENT_0x17aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StdCommandEffectEnvironment__8WcSndStdP27W_SNDSTD_EFFECT_ENVIRONMENT_0x17aa00");
#endif

    switch (ctx->pc) {
        case 0x17aa80u: goto label_17aa80;
        case 0x17aa94u: goto label_17aa94;
        default: break;
    }

    ctx->pc = 0x17aa00u;

    // 0x17aa00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aa04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17aa04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17aa0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17aa0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17aa14: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AA14u;
    {
        const bool branch_taken_0x17aa14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA14u;
        // 0x17aa18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa14) {
            ctx->pc = 0x17AA24u;
            goto label_17aa24;
        }
    }
    ctx->pc = 0x17AA1Cu;
    // 0x17aa1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17aa20: 0x2451e990  addiu       $s1, $v0, -0x1670
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
label_17aa24:
    // 0x17aa24: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17aa28: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x17aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17aa2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17aa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17aa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17aa34: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x17aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17aa38: 0x24630250  addiu       $v1, $v1, 0x250
    ctx->pc = 0x17aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 592));
    // 0x17aa3c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x17aa3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17aa40: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x17aa40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17aa44: 0x6a27000f  ldl         $a3, 0xF($s1)
    ctx->pc = 0x17aa44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17aa48: 0x6e270008  ldr         $a3, 0x8($s1)
    ctx->pc = 0x17aa48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17aa4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17aa50: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x17aa50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x17aa54: 0xb022c043  sdl         $v0, -0x3FBD($at)
    ctx->pc = 0x17aa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294950979); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aa58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17aa5c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x17aa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x17aa60: 0xb422c03c  sdr         $v0, -0x3FC4($at)
    ctx->pc = 0x17aa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294950972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aa64: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17aa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17aa68: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x17aa6c: 0xb027c04b  sdl         $a3, -0x3FB5($at)
    ctx->pc = 0x17aa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294950987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aa70: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17aa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17aa74: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x17aa74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x17aa78: 0xb427c044  sdr         $a3, -0x3FBC($at)
    ctx->pc = 0x17aa78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294950980); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17aa7c: 0x0  nop
    ctx->pc = 0x17aa7cu;
    // NOP
label_17aa80:
    // 0x17aa80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17aa84: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AA84u;
    {
        const bool branch_taken_0x17aa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA84u;
        // 0x17aa88: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa84) {
            ctx->pc = 0x17AAA0u;
            goto label_17aaa0;
        }
    }
    ctx->pc = 0x17AA8Cu;
    // 0x17aa8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AA8Cu;
    SET_GPR_U32(ctx, 31, 0x17AA94u);
    ctx->pc = 0x17AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA8Cu;
    // 0x17aa90: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AA8Cu, 0x17AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA94u;
label_17aa94:
    // 0x17aa94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AA94u;
    {
        const bool branch_taken_0x17aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA94u;
        // 0x17aa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa94) {
            ctx->pc = 0x17AAB4u;
            goto label_17aab4;
        }
    }
    ctx->pc = 0x17AA9Cu;
    // 0x17aa9c: 0x0  nop
    ctx->pc = 0x17aa9cu;
    // NOP
label_17aaa0:
    // 0x17aaa0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17aaa4: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x17aaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17aaa8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AAA8u;
    {
        const bool branch_taken_0x17aaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAA8u;
        // 0x17aaac: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aaa8) {
            ctx->pc = 0x17AA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aa80;
        }
    }
    ctx->pc = 0x17AAB0u;
    // 0x17aab0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aab4:
    // 0x17aab4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17aab8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17aabc: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x17aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17aac0: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17aac4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17aac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17aac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aacc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17aad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aad4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17aad8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17aadc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17aae0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x17aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x17aae4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17aae8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x17aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x17aaec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x17aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17aaf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17aaf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aaf4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x17aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAF8u;
        // 0x17aafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB00u;
}
