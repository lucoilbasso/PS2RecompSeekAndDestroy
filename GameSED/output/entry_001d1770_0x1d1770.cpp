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

// Function: entry_001d1770
// Address: 0x1d1770 - 0x1d17b8
void entry_001d1770_0x1d1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1770_0x1d1770");
#endif

    switch (ctx->pc) {
        case 0x1d1794u: goto label_1d1794;
        default: break;
    }

    ctx->pc = 0x1d1770u;

    // 0x1d1770: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x1d1770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x1d1774: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1774u;
    {
        const bool branch_taken_0x1d1774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1774) {
            ctx->pc = 0x1D1778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1774u;
            // 0x1d1778: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D17C0u;
            return;
        }
    }
    ctx->pc = 0x1D177Cu;
    // 0x1d177c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d1780: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d1780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d1784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1788: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1d1788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d178c: 0xc074abe  jal         func_1D2AF8
    ctx->pc = 0x1D178Cu;
    SET_GPR_U32(ctx, 31, 0x1D1794u);
    ctx->pc = 0x1D1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D178Cu;
    // 0x1d1790: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2AF8u, 0x1D178Cu, 0x1D1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1794u;
label_1d1794:
    // 0x1d1794: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x1d1794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x1d1798: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d179c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1d17a0: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x1d17a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d17a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D17A4u;
    {
        const bool branch_taken_0x1d17a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17A4u;
        // 0x1d17a8: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17a4) {
            ctx->pc = 0x1D17B8u;
            return;
        }
    }
    ctx->pc = 0x1D17ACu;
    // 0x1d17ac: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d17acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d17b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D17B0u;
    {
        const bool branch_taken_0x1d17b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B0u;
        // 0x1d17b4: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17b0) {
            ctx->pc = 0x1D1824u;
            return;
        }
    }
    ctx->pc = 0x1D17B8u;
}
