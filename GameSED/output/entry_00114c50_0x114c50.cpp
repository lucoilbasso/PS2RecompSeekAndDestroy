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

// Function: entry_00114c50
// Address: 0x114c50 - 0x114c88
void entry_00114c50_0x114c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c50_0x114c50");
#endif

    switch (ctx->pc) {
        case 0x114c74u: goto label_114c74;
        default: break;
    }

    ctx->pc = 0x114c50u;

    // 0x114c50: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x114c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x114c54: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x114c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x114c58: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x114c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114c5c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x114c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114c60: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114c64: 0x26250284  addiu       $a1, $s1, 0x284
    ctx->pc = 0x114c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x114c68: 0x2484fb30  addiu       $a0, $a0, -0x4D0
    ctx->pc = 0x114c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    // 0x114c6c: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114C6Cu;
    SET_GPR_U32(ctx, 31, 0x114C74u);
    ctx->pc = 0x114C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C6Cu;
    // 0x114c70: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114C6Cu, 0x114C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C74u;
label_114c74:
    // 0x114c74: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114c78: 0x26250404  addiu       $a1, $s1, 0x404
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1028));
    // 0x114c7c: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x114c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x114c80: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114C80u;
    SET_GPR_U32(ctx, 31, 0x114C88u);
    ctx->pc = 0x114C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C80u;
    // 0x114c84: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114C80u, 0x114C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C88u;
}
