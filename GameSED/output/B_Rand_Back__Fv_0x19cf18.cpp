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

// Function: B_Rand_Back__Fv
// Address: 0x19cf18 - 0x19cfd8
void B_Rand_Back__Fv_0x19cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Rand_Back__Fv_0x19cf18");
#endif

    switch (ctx->pc) {
        case 0x19cf38u: goto label_19cf38;
        case 0x19cf98u: goto label_19cf98;
        default: break;
    }

    ctx->pc = 0x19cf18u;

    // 0x19cf18: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x19cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x19cf1c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19cf20: 0x2444df70  addiu       $a0, $v0, -0x2090
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958960));
    // 0x19cf24: 0x2463f008  addiu       $v1, $v1, -0xFF8
    ctx->pc = 0x19cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963208));
    // 0x19cf28: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x19cf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19cf2c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x19cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x19cf30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19CF30u;
    {
        const bool branch_taken_0x19cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF30u;
        // 0x19cf34: 0x246200e0  addiu       $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf30) {
            ctx->pc = 0x19CF98u;
            goto label_19cf98;
        }
    }
    ctx->pc = 0x19CF38u;
label_19cf38:
    // 0x19cf38: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x19cf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19cf3c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x19cf3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x19cf40: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x19cf40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x19cf44: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x19cf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x19cf48: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x19cf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x19cf4c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x19cf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x19cf50: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x19cf50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x19cf54: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x19cf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x19cf58: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x19cf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf5c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x19cf5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf60: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x19cf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf64: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x19cf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf68: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x19cf68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf6c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x19cf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf70: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x19cf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf74: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x19cf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cf78: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19cf7c: 0x0  nop
    ctx->pc = 0x19cf7cu;
    // NOP
    // 0x19cf80: 0x0  nop
    ctx->pc = 0x19cf80u;
    // NOP
    // 0x19cf84: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19CF84u;
    {
        const bool branch_taken_0x19cf84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF84u;
        // 0x19cf88: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf84) {
            ctx->pc = 0x19CF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cf38;
        }
    }
    ctx->pc = 0x19CF8Cu;
    // 0x19cf8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19CF8Cu;
    {
        const bool branch_taken_0x19cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cf8c) {
            ctx->pc = 0x19CFCCu;
            goto label_19cfcc;
        }
    }
    ctx->pc = 0x19CF94u;
    // 0x19cf94: 0x0  nop
    ctx->pc = 0x19cf94u;
    // NOP
label_19cf98:
    // 0x19cf98: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x19cf98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cf9c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x19cf9cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19cfa0: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x19cfa0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19cfa4: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x19cfa4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19cfa8: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x19cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x19cfac: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x19cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x19cfb0: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x19cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x19cfb4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x19cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x19cfb8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19cfbc: 0x0  nop
    ctx->pc = 0x19cfbcu;
    // NOP
    // 0x19cfc0: 0x0  nop
    ctx->pc = 0x19cfc0u;
    // NOP
    // 0x19cfc4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19CFC4u;
    {
        const bool branch_taken_0x19cfc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFC4u;
        // 0x19cfc8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfc4) {
            ctx->pc = 0x19CF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cf98;
        }
    }
    ctx->pc = 0x19CFCCu;
label_19cfcc:
    // 0x19cfcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19cfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFD0u;
        // 0x19cfd4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CFD8u;
}
