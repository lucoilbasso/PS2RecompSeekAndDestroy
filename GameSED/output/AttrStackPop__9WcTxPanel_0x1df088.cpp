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

// Function: AttrStackPop__9WcTxPanel
// Address: 0x1df088 - 0x1df0e4
void AttrStackPop__9WcTxPanel_0x1df088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttrStackPop__9WcTxPanel_0x1df088");
#endif

    switch (ctx->pc) {
        case 0x1df0b8u: goto label_1df0b8;
        default: break;
    }

    ctx->pc = 0x1df088u;

    // 0x1df088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df094: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1df094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1df098: 0x26020260  addiu       $v0, $s0, 0x260
    ctx->pc = 0x1df098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1df09c: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x1df09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x1df0a0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF0A0u;
    {
        const bool branch_taken_0x1df0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df0a0) {
            ctx->pc = 0x1DF0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF0A0u;
            // 0x1df0a4: 0x8e02025c  lw          $v0, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF0BCu;
            goto label_1df0bc;
        }
    }
    ctx->pc = 0x1DF0A8u;
    // 0x1df0a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df0ac: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1df0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1df0b0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DF0B0u;
    SET_GPR_U32(ctx, 31, 0x1DF0B8u);
    ctx->pc = 0x1DF0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0B0u;
    // 0x1df0b4: 0x24a58130  addiu       $a1, $a1, -0x7ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DF0B0u, 0x1DF0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0B8u;
label_1df0b8:
    // 0x1df0b8: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x1df0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_1df0bc:
    // 0x1df0bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df0c0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1df0c4: 0xae02025c  sw          $v0, 0x25C($s0)
    ctx->pc = 0x1df0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 2));
    // 0x1df0c8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1df0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1df0cc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1df0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1df0d0: 0xb2030243  sdl         $v1, 0x243($s0)
    ctx->pc = 0x1df0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df0d4: 0xb603023c  sdr         $v1, 0x23C($s0)
    ctx->pc = 0x1df0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0DCu;
        // 0x1df0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF0E4u;
}
