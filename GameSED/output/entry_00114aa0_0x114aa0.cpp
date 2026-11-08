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

// Function: entry_00114aa0
// Address: 0x114aa0 - 0x114ad8
void entry_00114aa0_0x114aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114aa0_0x114aa0");
#endif

    switch (ctx->pc) {
        case 0x114ac4u: goto label_114ac4;
        default: break;
    }

    ctx->pc = 0x114aa0u;

    // 0x114aa0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x114aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114aa4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x114aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x114aa8: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x114aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114aac: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x114aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114ab0: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114ab4: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x114ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x114ab8: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x114ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x114abc: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114ABCu;
    SET_GPR_U32(ctx, 31, 0x114AC4u);
    ctx->pc = 0x114AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114ABCu;
    // 0x114ac0: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114ABCu, 0x114AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AC4u;
label_114ac4:
    // 0x114ac4: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x114ac8: 0x26040404  addiu       $a0, $s0, 0x404
    ctx->pc = 0x114ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
    // 0x114acc: 0x24a5fcb0  addiu       $a1, $a1, -0x350
    ctx->pc = 0x114accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966448));
    // 0x114ad0: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114AD0u;
    SET_GPR_U32(ctx, 31, 0x114AD8u);
    ctx->pc = 0x114AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AD0u;
    // 0x114ad4: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114AD0u, 0x114AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AD8u;
}
