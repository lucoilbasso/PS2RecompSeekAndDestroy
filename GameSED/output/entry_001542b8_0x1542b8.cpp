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

// Function: entry_001542b8
// Address: 0x1542b8 - 0x1542f0
void entry_001542b8_0x1542b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001542b8_0x1542b8");
#endif

    switch (ctx->pc) {
        case 0x1542c4u: goto label_1542c4;
        case 0x1542e4u: goto label_1542e4;
        default: break;
    }

    ctx->pc = 0x1542b8u;

    // 0x1542b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1542b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542bc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1542BCu;
    SET_GPR_U32(ctx, 31, 0x1542C4u);
    ctx->pc = 0x1542C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542BCu;
    // 0x1542c0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1542BCu, 0x1542C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542C4u;
label_1542c4:
    // 0x1542c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1542c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1542c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1542cc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1542d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1542d4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1542D4u;
    {
        const bool branch_taken_0x1542d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1542D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542D4u;
        // 0x1542d8: 0x108a03  sra         $s1, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542d4) {
            ctx->pc = 0x1542F0u;
            return;
        }
    }
    ctx->pc = 0x1542DCu;
    // 0x1542dc: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x1542DCu;
    SET_GPR_U32(ctx, 31, 0x1542E4u);
    ctx->pc = 0x1542E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542DCu;
    // 0x1542e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x1542DCu, 0x1542E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542E4u;
label_1542e4:
    // 0x1542e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1542E4u;
    {
        const bool branch_taken_0x1542e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E4u;
        // 0x1542e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542e4) {
            ctx->pc = 0x1542FCu;
            return;
        }
    }
    ctx->pc = 0x1542ECu;
    // 0x1542ec: 0x0  nop
    ctx->pc = 0x1542ecu;
    // NOP
    ctx->pc = 0x1542f0u;
}
