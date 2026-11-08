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

// Function: entry_0017aa24
// Address: 0x17aa24 - 0x17aa80
void entry_0017aa24_0x17aa24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aa24_0x17aa24");
#endif

    ctx->pc = 0x17aa24u;

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
    ctx->pc = 0x17aa80u;
}
