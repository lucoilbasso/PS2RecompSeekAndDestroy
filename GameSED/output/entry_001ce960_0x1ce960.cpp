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

// Function: entry_001ce960
// Address: 0x1ce960 - 0x1ce9a0
void entry_001ce960_0x1ce960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce960_0x1ce960");
#endif

    ctx->pc = 0x1ce960u;

    // 0x1ce960: 0x108000e6  beqz        $a0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1CE960u;
    {
        const bool branch_taken_0x1ce960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE960u;
        // 0x1ce964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce960) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CE968u;
    // 0x1ce968: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ce96c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE96Cu;
    {
        const bool branch_taken_0x1ce96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE96Cu;
        // 0x1ce970: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce96c) {
            ctx->pc = 0x1CE9A0u;
            return;
        }
    }
    ctx->pc = 0x1CE974u;
    // 0x1ce974: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce978: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce97c: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce97cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce980: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x1ce984: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce988: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce98c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce994: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ce994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ce998: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE998u;
    SET_GPR_U32(ctx, 31, 0x1CE9A0u);
    ctx->pc = 0x1CE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE998u;
    // 0x1ce99c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE998u, 0x1CE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9A0u;
}
