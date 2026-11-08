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

// Function: entry_00131a70
// Address: 0x131a70 - 0x131ad0
void entry_00131a70_0x131a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a70_0x131a70");
#endif

    ctx->pc = 0x131a70u;

label_131a70:
    // 0x131a70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131a74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x131a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x131a78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x131a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x131a7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x131a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x131a80: 0x0  nop
    ctx->pc = 0x131a80u;
    // NOP
    // 0x131a84: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131A84u;
    {
        const bool branch_taken_0x131a84 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x131A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A84u;
        // 0x131a88: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a84) {
            ctx->pc = 0x131A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131a70;
        }
    }
    ctx->pc = 0x131A8Cu;
    // 0x131a8c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x131a90: 0x94e80038  lhu         $t0, 0x38($a3)
    ctx->pc = 0x131a90u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x131a94: 0x8c490020  lw          $t1, 0x20($v0)
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x131a98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131a9c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x131a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x131aa0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x131aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x131aa4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x131aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x131aa8: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x131aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x131aac: 0xa6080066  sh          $t0, 0x66($s0)
    ctx->pc = 0x131aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 8));
    // 0x131ab0: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x131ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x131ab4: 0xae0400cc  sw          $a0, 0xCC($s0)
    ctx->pc = 0x131ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 4));
    // 0x131ab8: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x131ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x131abc: 0xae0600d4  sw          $a2, 0xD4($s0)
    ctx->pc = 0x131abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 6));
    // 0x131ac0: 0xae070108  sw          $a3, 0x108($s0)
    ctx->pc = 0x131ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 7));
    // 0x131ac4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131AC4u;
    {
        const bool branch_taken_0x131ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131AC4u;
        // 0x131ac8: 0xae09010c  sw          $t1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ac4) {
            ctx->pc = 0x131AECu;
            return;
        }
    }
    ctx->pc = 0x131ACCu;
    // 0x131acc: 0x0  nop
    ctx->pc = 0x131accu;
    // NOP
    ctx->pc = 0x131ad0u;
}
