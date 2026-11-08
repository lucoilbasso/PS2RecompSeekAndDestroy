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

// Function: WImageTransferCLUTtoFBuffer__FP10WImageInfo
// Address: 0x17dbd8 - 0x17dca8
void WImageTransferCLUTtoFBuffer__FP10WImageInfo_0x17dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageTransferCLUTtoFBuffer__FP10WImageInfo_0x17dbd8");
#endif

    switch (ctx->pc) {
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc64u: goto label_17dc64;
        default: break;
    }

    ctx->pc = 0x17dbd8u;

    // 0x17dbd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17dbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17dbdc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17dbe0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17dbe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17dbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dbe8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17dbec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17dbf0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17dbf4: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x17dbf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17dbf8: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x17dbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17dbfc: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x17dbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17dc00: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x17dc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dc04: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x17dc04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dc08: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DC08u;
    {
        const bool branch_taken_0x17dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC08u;
        // 0x17dc0c: 0x8e110024  lw          $s1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc08) {
            ctx->pc = 0x17DC30u;
            goto label_17dc30;
        }
    }
    ctx->pc = 0x17DC10u;
    // 0x17dc10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17dc14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dc18: 0xa7a20014  sh          $v0, 0x14($sp)
    ctx->pc = 0x17dc18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dc1c: 0xa7a30016  sh          $v1, 0x16($sp)
    ctx->pc = 0x17dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dc20: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x17dc20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dc24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17DC24u;
    {
        const bool branch_taken_0x17dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC24u;
        // 0x17dc28: 0xa7a00012  sh          $zero, 0x12($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc24) {
            ctx->pc = 0x17DC40u;
            goto label_17dc40;
        }
    }
    ctx->pc = 0x17DC2Cu;
    // 0x17dc2c: 0x0  nop
    ctx->pc = 0x17dc2cu;
    // NOP
label_17dc30:
    // 0x17dc30: 0xa7a30016  sh          $v1, 0x16($sp)
    ctx->pc = 0x17dc30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dc34: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x17dc34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dc38: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x17dc38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dc3c: 0xa7a30014  sh          $v1, 0x14($sp)
    ctx->pc = 0x17dc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 3));
label_17dc40:
    // 0x17dc40: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x17dc40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x17dc44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC90u;
            goto label_17dc90;
        }
    }
    ctx->pc = 0x17DC4Cu;
    // 0x17dc4c: 0x0  nop
    ctx->pc = 0x17dc4cu;
    // NOP
label_17dc50:
    // 0x17dc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dc58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dc5c: 0xc05dc0a  jal         func_177028
    ctx->pc = 0x17DC5Cu;
    SET_GPR_U32(ctx, 31, 0x17DC64u);
    ctx->pc = 0x17DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC5Cu;
    // 0x17dc60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177028u, 0x17DC5Cu, 0x17DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC64u;
label_17dc64:
    // 0x17dc64: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x17dc64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17dc68: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x17dc68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc6c: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x17dc6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x17dc70: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x17dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x17dc74: 0x97a50006  lhu         $a1, 0x6($sp)
    ctx->pc = 0x17dc74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x17dc78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17dc7c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x17dc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17dc80: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17dc84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17dc88: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x17DC88u;
    {
        const bool branch_taken_0x17dc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC88u;
        // 0x17dc8c: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc88) {
            ctx->pc = 0x17DC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dc50;
        }
    }
    ctx->pc = 0x17DC90u;
label_17dc90:
    // 0x17dc90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17dc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dc94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17dc94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dc98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17dc98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dc9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17dc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17dca0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA0u;
        // 0x17dca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DCA8u;
}
