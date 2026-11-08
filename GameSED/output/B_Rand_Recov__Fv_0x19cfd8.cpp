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

// Function: B_Rand_Recov__Fv
// Address: 0x19cfd8 - 0x19d098
void B_Rand_Recov__Fv_0x19cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Rand_Recov__Fv_0x19cfd8");
#endif

    switch (ctx->pc) {
        case 0x19cff8u: goto label_19cff8;
        case 0x19d058u: goto label_19d058;
        default: break;
    }

    ctx->pc = 0x19cfd8u;

    // 0x19cfd8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19cfdc: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x19cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x19cfe0: 0x2444f008  addiu       $a0, $v0, -0xFF8
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19cfe4: 0x2463df70  addiu       $v1, $v1, -0x2090
    ctx->pc = 0x19cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958960));
    // 0x19cfe8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x19cfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19cfec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x19cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x19cff0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19CFF0u;
    {
        const bool branch_taken_0x19cff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFF0u;
        // 0x19cff4: 0x246200e0  addiu       $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cff0) {
            ctx->pc = 0x19D058u;
            goto label_19d058;
        }
    }
    ctx->pc = 0x19CFF8u;
label_19cff8:
    // 0x19cff8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x19cff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19cffc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x19cffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x19d000: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x19d000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x19d004: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x19d004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x19d008: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x19d008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x19d00c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x19d00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x19d010: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x19d010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x19d014: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x19d014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x19d018: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x19d018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d01c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x19d01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d020: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x19d020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d024: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x19d024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d028: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x19d028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d02c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x19d02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d030: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x19d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d034: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x19d034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19d038: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19d03c: 0x0  nop
    ctx->pc = 0x19d03cu;
    // NOP
    // 0x19d040: 0x0  nop
    ctx->pc = 0x19d040u;
    // NOP
    // 0x19d044: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19D044u;
    {
        const bool branch_taken_0x19d044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D044u;
        // 0x19d048: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d044) {
            ctx->pc = 0x19CFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cff8;
        }
    }
    ctx->pc = 0x19D04Cu;
    // 0x19d04c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19D04Cu;
    {
        const bool branch_taken_0x19d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d04c) {
            ctx->pc = 0x19D08Cu;
            goto label_19d08c;
        }
    }
    ctx->pc = 0x19D054u;
    // 0x19d054: 0x0  nop
    ctx->pc = 0x19d054u;
    // NOP
label_19d058:
    // 0x19d058: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x19d058u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d05c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x19d05cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19d060: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x19d060u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19d064: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x19d064u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19d068: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x19d068u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x19d06c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x19d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x19d070: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x19d070u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x19d074: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x19d074u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x19d078: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19d07c: 0x0  nop
    ctx->pc = 0x19d07cu;
    // NOP
    // 0x19d080: 0x0  nop
    ctx->pc = 0x19d080u;
    // NOP
    // 0x19d084: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19D084u;
    {
        const bool branch_taken_0x19d084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D084u;
        // 0x19d088: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d084) {
            ctx->pc = 0x19D058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d058;
        }
    }
    ctx->pc = 0x19D08Cu;
label_19d08c:
    // 0x19d08c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d090: 0x3e00008  jr          $ra
    ctx->pc = 0x19D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D090u;
        // 0x19d094: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D098u;
}
