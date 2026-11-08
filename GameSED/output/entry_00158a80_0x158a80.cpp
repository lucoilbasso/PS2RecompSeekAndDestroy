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

// Function: entry_00158a80
// Address: 0x158a80 - 0x158b10
void entry_00158a80_0x158a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158a80_0x158a80");
#endif

    switch (ctx->pc) {
        case 0x158aa4u: goto label_158aa4;
        case 0x158ad0u: goto label_158ad0;
        case 0x158b04u: goto label_158b04;
        default: break;
    }

    ctx->pc = 0x158a80u;

    // 0x158a80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158a84: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x158A84u;
    {
        const bool branch_taken_0x158a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A84u;
        // 0x158a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a84) {
            ctx->pc = 0x158B10u;
            return;
        }
    }
    ctx->pc = 0x158A8Cu;
    // 0x158a8c: 0xae00047c  sw          $zero, 0x47C($s0)
    ctx->pc = 0x158a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 0));
    // 0x158a90: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158a94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a9c: 0xc056314  jal         func_158C50
    ctx->pc = 0x158A9Cu;
    SET_GPR_U32(ctx, 31, 0x158AA4u);
    ctx->pc = 0x158AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A9Cu;
    // 0x158aa0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158A9Cu, 0x158AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AA4u;
label_158aa4:
    // 0x158aa4: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x158AA4u;
    {
        const bool branch_taken_0x158aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158aa4) {
            ctx->pc = 0x158AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AA4u;
            // 0x158aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B30u;
            return;
        }
    }
    ctx->pc = 0x158AACu;
    // 0x158aac: 0x8e02047c  lw          $v0, 0x47C($s0)
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x158ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ab4: 0xae00047c  sw          $zero, 0x47C($s0)
    ctx->pc = 0x158ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 0));
    // 0x158ab8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158abc: 0xae020480  sw          $v0, 0x480($s0)
    ctx->pc = 0x158abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 2));
    // 0x158ac0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ac4: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158ac8: 0xc056314  jal         func_158C50
    ctx->pc = 0x158AC8u;
    SET_GPR_U32(ctx, 31, 0x158AD0u);
    ctx->pc = 0x158ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AC8u;
    // 0x158acc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158AC8u, 0x158AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AD0u;
label_158ad0:
    // 0x158ad0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x158AD0u;
    {
        const bool branch_taken_0x158ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158ad0) {
            ctx->pc = 0x158AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AD0u;
            // 0x158ad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B30u;
            return;
        }
    }
    ctx->pc = 0x158AD8u;
    // 0x158ad8: 0x8e03047c  lw          $v1, 0x47C($s0)
    ctx->pc = 0x158ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x158adc: 0x8e020480  lw          $v0, 0x480($s0)
    ctx->pc = 0x158adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1152)));
    // 0x158ae0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158ae4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x158AE4u;
    {
        const bool branch_taken_0x158ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0xae030484  sw          $v1, 0x484($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae4) {
            ctx->pc = 0x158B2Cu;
            return;
        }
    }
    ctx->pc = 0x158AECu;
    // 0x158aec: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158af4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158af8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158afc: 0xc056434  jal         func_1590D0
    ctx->pc = 0x158AFCu;
    SET_GPR_U32(ctx, 31, 0x158B04u);
    ctx->pc = 0x158B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AFCu;
    // 0x158b00: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1590D0u, 0x158AFCu, 0x158B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B04u;
label_158b04:
    // 0x158b04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x158B04u;
    {
        const bool branch_taken_0x158b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B04u;
        // 0x158b08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b04) {
            ctx->pc = 0x158B30u;
            return;
        }
    }
    ctx->pc = 0x158B0Cu;
    // 0x158b0c: 0x0  nop
    ctx->pc = 0x158b0cu;
    // NOP
    ctx->pc = 0x158b10u;
}
