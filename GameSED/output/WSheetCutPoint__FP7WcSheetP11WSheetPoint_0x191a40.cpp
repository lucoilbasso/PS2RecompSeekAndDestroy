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

// Function: WSheetCutPoint__FP7WcSheetP11WSheetPoint
// Address: 0x191a40 - 0x191b10
void WSheetCutPoint__FP7WcSheetP11WSheetPoint_0x191a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetCutPoint__FP7WcSheetP11WSheetPoint_0x191a40");
#endif

    switch (ctx->pc) {
        case 0x191a40u: goto label_191a40;
        case 0x191a44u: goto label_191a44;
        case 0x191a48u: goto label_191a48;
        case 0x191a4cu: goto label_191a4c;
        case 0x191a50u: goto label_191a50;
        case 0x191a54u: goto label_191a54;
        case 0x191a58u: goto label_191a58;
        case 0x191a5cu: goto label_191a5c;
        case 0x191a60u: goto label_191a60;
        case 0x191a64u: goto label_191a64;
        case 0x191a68u: goto label_191a68;
        case 0x191a6cu: goto label_191a6c;
        case 0x191a70u: goto label_191a70;
        case 0x191a74u: goto label_191a74;
        case 0x191a78u: goto label_191a78;
        case 0x191a7cu: goto label_191a7c;
        case 0x191a80u: goto label_191a80;
        case 0x191a84u: goto label_191a84;
        case 0x191a88u: goto label_191a88;
        case 0x191a8cu: goto label_191a8c;
        case 0x191a90u: goto label_191a90;
        case 0x191a94u: goto label_191a94;
        case 0x191a98u: goto label_191a98;
        case 0x191a9cu: goto label_191a9c;
        case 0x191aa0u: goto label_191aa0;
        case 0x191aa4u: goto label_191aa4;
        case 0x191aa8u: goto label_191aa8;
        case 0x191aacu: goto label_191aac;
        case 0x191ab0u: goto label_191ab0;
        case 0x191ab4u: goto label_191ab4;
        case 0x191ab8u: goto label_191ab8;
        case 0x191abcu: goto label_191abc;
        case 0x191ac0u: goto label_191ac0;
        case 0x191ac4u: goto label_191ac4;
        case 0x191ac8u: goto label_191ac8;
        case 0x191accu: goto label_191acc;
        case 0x191ad0u: goto label_191ad0;
        case 0x191ad4u: goto label_191ad4;
        case 0x191ad8u: goto label_191ad8;
        case 0x191adcu: goto label_191adc;
        case 0x191ae0u: goto label_191ae0;
        case 0x191ae4u: goto label_191ae4;
        case 0x191ae8u: goto label_191ae8;
        case 0x191aecu: goto label_191aec;
        case 0x191af0u: goto label_191af0;
        case 0x191af4u: goto label_191af4;
        case 0x191af8u: goto label_191af8;
        case 0x191afcu: goto label_191afc;
        case 0x191b00u: goto label_191b00;
        case 0x191b04u: goto label_191b04;
        case 0x191b08u: goto label_191b08;
        case 0x191b0cu: goto label_191b0c;
        default: break;
    }

    ctx->pc = 0x191a40u;

label_191a40:
    // 0x191a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191a44:
    // 0x191a44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x191a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191a48:
    // 0x191a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191a4c:
    // 0x191a4c: 0x8cc20158  lw          $v0, 0x158($a2)
    ctx->pc = 0x191a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
label_191a50:
    // 0x191a50: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_191a54:
    if (ctx->pc == 0x191A54u) {
        ctx->pc = 0x191A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A50u;
        // 0x191a54: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A58u;
        goto label_191a58;
    }
    ctx->pc = 0x191A50u;
    {
        const bool branch_taken_0x191a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A50u;
        // 0x191a54: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a50) {
            ctx->pc = 0x191B04u;
            goto label_191b04;
        }
    }
    ctx->pc = 0x191A58u;
label_191a58:
    // 0x191a58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191a5c:
    // 0x191a5c: 0x0  nop
    ctx->pc = 0x191a5cu;
    // NOP
label_191a60:
    // 0x191a60: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
label_191a64:
    if (ctx->pc == 0x191A64u) {
        ctx->pc = 0x191A68u;
        goto label_191a68;
    }
    ctx->pc = 0x191A60u;
    {
        const bool branch_taken_0x191a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x191a60) {
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A68u;
label_191a68:
    // 0x191a68: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_191a6c:
    // 0x191a6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_191a70:
    if (ctx->pc == 0x191A70u) {
        ctx->pc = 0x191A74u;
        goto label_191a74;
    }
    ctx->pc = 0x191A6Cu;
    {
        const bool branch_taken_0x191a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a6c) {
            ctx->pc = 0x191A80u;
            goto label_191a80;
        }
    }
    ctx->pc = 0x191A74u;
label_191a74:
    // 0x191a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191a78:
    // 0x191a78: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_191a7c:
    if (ctx->pc == 0x191A7Cu) {
        ctx->pc = 0x191A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A78u;
        // 0x191a7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A80u;
        goto label_191a80;
    }
    ctx->pc = 0x191A78u;
    {
        const bool branch_taken_0x191a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A78u;
        // 0x191a7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a78) {
            ctx->pc = 0x191A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191a60;
        }
    }
    ctx->pc = 0x191A80u;
label_191a80:
    // 0x191a80: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_191a84:
    if (ctx->pc == 0x191A84u) {
        ctx->pc = 0x191A88u;
        goto label_191a88;
    }
    ctx->pc = 0x191A80u;
    {
        const bool branch_taken_0x191a80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a80) {
            ctx->pc = 0x191A94u;
            goto label_191a94;
        }
    }
    ctx->pc = 0x191A88u;
label_191a88:
    // 0x191a88: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
label_191a8c:
    if (ctx->pc == 0x191A8Cu) {
        ctx->pc = 0x191A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A88u;
        // 0x191a8c: 0x8cc50158  lw          $a1, 0x158($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A90u;
        goto label_191a90;
    }
    ctx->pc = 0x191A88u;
    {
        const bool branch_taken_0x191a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a88) {
            ctx->pc = 0x191A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A88u;
            // 0x191a8c: 0x8cc50158  lw          $a1, 0x158($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A94u;
            goto label_191a94;
        }
    }
    ctx->pc = 0x191A90u;
label_191a90:
    // 0x191a90: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_191a94:
    // 0x191a94: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_191a98:
    if (ctx->pc == 0x191A98u) {
        ctx->pc = 0x191A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A94u;
        // 0x191a98: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A9Cu;
        goto label_191a9c;
    }
    ctx->pc = 0x191A94u;
    {
        const bool branch_taken_0x191a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A94u;
        // 0x191a98: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a94) {
            ctx->pc = 0x191AA8u;
            goto label_191aa8;
        }
    }
    ctx->pc = 0x191A9Cu;
label_191a9c:
    // 0x191a9c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_191aa0:
    // 0x191aa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_191aa4:
    if (ctx->pc == 0x191AA4u) {
        ctx->pc = 0x191AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA0u;
        // 0x191aa4: 0xacc20158  sw          $v0, 0x158($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AA8u;
        goto label_191aa8;
    }
    ctx->pc = 0x191AA0u;
    {
        const bool branch_taken_0x191aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA0u;
        // 0x191aa4: 0xacc20158  sw          $v0, 0x158($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191aa0) {
            ctx->pc = 0x191AB0u;
            goto label_191ab0;
        }
    }
    ctx->pc = 0x191AA8u;
label_191aa8:
    // 0x191aa8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_191aac:
    // 0x191aac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x191aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_191ab0:
    // 0x191ab0: 0x246301d0  addiu       $v1, $v1, 0x1D0
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
label_191ab4:
    // 0x191ab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191ab8:
    // 0x191ab8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x191ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_191abc:
    // 0x191abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_191ac0:
    // 0x191ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_191ac4:
    // 0x191ac4: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x191ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
label_191ac8:
    // 0x191ac8: 0x8cc201dc  lw          $v0, 0x1DC($a2)
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 476)));
label_191acc:
    // 0x191acc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x191accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_191ad0:
    // 0x191ad0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_191ad4:
    if (ctx->pc == 0x191AD4u) {
        ctx->pc = 0x191AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AD0u;
        // 0x191ad4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AD8u;
        goto label_191ad8;
    }
    ctx->pc = 0x191AD0u;
    {
        const bool branch_taken_0x191ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AD0u;
        // 0x191ad4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ad0) {
            ctx->pc = 0x191B04u;
            goto label_191b04;
        }
    }
    ctx->pc = 0x191AD8u;
label_191ad8:
    // 0x191ad8: 0x8cc201d0  lw          $v0, 0x1D0($a2)
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 464)));
label_191adc:
    // 0x191adc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x191adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_191ae0:
    // 0x191ae0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_191ae4:
    if (ctx->pc == 0x191AE4u) {
        ctx->pc = 0x191AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AE0u;
        // 0x191ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AE8u;
        goto label_191ae8;
    }
    ctx->pc = 0x191AE0u;
    {
        const bool branch_taken_0x191ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AE0u;
        // 0x191ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ae0) {
            ctx->pc = 0x191B08u;
            goto label_191b08;
        }
    }
    ctx->pc = 0x191AE8u;
label_191ae8:
    // 0x191ae8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x191ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_191aec:
    // 0x191aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191af0:
    // 0x191af0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_191af4:
    // 0x191af4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x191af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_191af8:
    // 0x191af8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x191af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_191afc:
    // 0x191afc: 0x60f809  jalr        $v1
label_191b00:
    if (ctx->pc == 0x191B00u) {
        ctx->pc = 0x191B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AFCu;
        // 0x191b00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B04u;
        goto label_191b04;
    }
    ctx->pc = 0x191AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x191B04u);
        ctx->pc = 0x191B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AFCu;
        // 0x191b00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191AFCu, 0x191B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191B04u;
label_191b04:
    // 0x191b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191b08:
    // 0x191b08: 0x3e00008  jr          $ra
label_191b0c:
    if (ctx->pc == 0x191B0Cu) {
        ctx->pc = 0x191B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B08u;
        // 0x191b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B10u;
        goto label_fallthrough_0x191b08;
    }
    ctx->pc = 0x191B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B08u;
        // 0x191b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x191b08:
    ctx->pc = 0x191B10u;
}
