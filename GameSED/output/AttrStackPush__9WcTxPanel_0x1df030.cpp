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

// Function: AttrStackPush__9WcTxPanel
// Address: 0x1df030 - 0x1df084
void AttrStackPush__9WcTxPanel_0x1df030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttrStackPush__9WcTxPanel_0x1df030");
#endif

    switch (ctx->pc) {
        case 0x1df078u: goto label_1df078;
        default: break;
    }

    ctx->pc = 0x1df030u;

    // 0x1df030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df034: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1df034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df03c: 0x246502a0  addiu       $a1, $v1, 0x2A0
    ctx->pc = 0x1df03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 672));
    // 0x1df040: 0x8c66025c  lw          $a2, 0x25C($v1)
    ctx->pc = 0x1df040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x1df044: 0x68620243  ldl         $v0, 0x243($v1)
    ctx->pc = 0x1df044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1df048: 0x6c62023c  ldr         $v0, 0x23C($v1)
    ctx->pc = 0x1df048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1df04c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x1df04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df050: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x1df050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df054: 0x8c62025c  lw          $v0, 0x25C($v1)
    ctx->pc = 0x1df054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x1df058: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1df058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1df05c: 0x45282b  sltu        $a1, $v0, $a1
    ctx->pc = 0x1df05cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1df060: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF060u;
    {
        const bool branch_taken_0x1df060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF060u;
        // 0x1df064: 0xac62025c  sw          $v0, 0x25C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df060) {
            ctx->pc = 0x1DF078u;
            goto label_1df078;
        }
    }
    ctx->pc = 0x1DF068u;
    // 0x1df068: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df06c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1df06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1df070: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DF070u;
    SET_GPR_U32(ctx, 31, 0x1DF078u);
    ctx->pc = 0x1DF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF070u;
    // 0x1df074: 0x24a58118  addiu       $a1, $a1, -0x7EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DF070u, 0x1DF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF078u;
label_1df078:
    // 0x1df078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF07Cu;
        // 0x1df080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF084u;
}
