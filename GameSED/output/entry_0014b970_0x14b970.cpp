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

// Function: entry_0014b970
// Address: 0x14b970 - 0x14b9b8
void entry_0014b970_0x14b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b970_0x14b970");
#endif

    switch (ctx->pc) {
        case 0x14b99cu: goto label_14b99c;
        default: break;
    }

    ctx->pc = 0x14b970u;

    // 0x14b970: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14b970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x14b974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b978: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x14B978u;
    {
        const bool branch_taken_0x14b978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b978) {
            ctx->pc = 0x14B97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B978u;
            // 0x14b97c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9E0u;
            return;
        }
    }
    ctx->pc = 0x14B980u;
    // 0x14b980: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x14b984: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B984u;
    {
        const bool branch_taken_0x14b984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B984u;
        // 0x14b988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b984) {
            ctx->pc = 0x14B9B8u;
            return;
        }
    }
    ctx->pc = 0x14B98Cu;
    // 0x14b98c: 0x26060140  addiu       $a2, $s0, 0x140
    ctx->pc = 0x14b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x14b990: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x14b990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b994: 0xc055d70  jal         func_1575C0
    ctx->pc = 0x14B994u;
    SET_GPR_U32(ctx, 31, 0x14B99Cu);
    ctx->pc = 0x14B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B994u;
    // 0x14b998: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1575C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1575C0u, 0x14B994u, 0x14B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B99Cu;
label_14b99c:
    // 0x14b99c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B99Cu;
    {
        const bool branch_taken_0x14b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b99c) {
            ctx->pc = 0x14B9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B99Cu;
            // 0x14b9a0: 0x8e64006c  lw          $a0, 0x6C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B9BCu;
            return;
        }
    }
    ctx->pc = 0x14B9A4u;
    // 0x14b9a4: 0x16a0000d  bnez        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x14B9A4u;
    {
        const bool branch_taken_0x14b9a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9A4u;
        // 0x14b9a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9a4) {
            ctx->pc = 0x14B9DCu;
            return;
        }
    }
    ctx->pc = 0x14B9ACu;
    // 0x14b9ac: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x14b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x14b9b0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x14b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x14b9b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x14b9b8u;
}
