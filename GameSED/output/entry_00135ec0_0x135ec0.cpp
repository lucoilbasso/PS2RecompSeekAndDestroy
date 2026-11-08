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

// Function: entry_00135ec0
// Address: 0x135ec0 - 0x135ef0
void entry_00135ec0_0x135ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ec0_0x135ec0");
#endif

    switch (ctx->pc) {
        case 0x135ee4u: goto label_135ee4;
        default: break;
    }

    ctx->pc = 0x135ec0u;

label_135ec0:
    // 0x135ec0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_135ec4:
    if (ctx->pc == 0x135EC4u) {
        ctx->pc = 0x135EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EC0u;
        // 0x135ec4: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EC8u;
        goto label_135ec8;
    }
    ctx->pc = 0x135EC0u;
    {
        const bool branch_taken_0x135ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x135ec0) {
            ctx->pc = 0x135EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135EC0u;
            // 0x135ec4: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135EF0u;
            return;
        }
    }
    ctx->pc = 0x135EC8u;
label_135ec8:
    // 0x135ec8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_135ecc:
    // 0x135ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135ed0:
    // 0x135ed0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_135ed4:
    // 0x135ed4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x135ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_135ed8:
    // 0x135ed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x135ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135edc:
    // 0x135edc: 0x60f809  jalr        $v1
label_135ee0:
    if (ctx->pc == 0x135EE0u) {
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EDCu;
        // 0x135ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EE4u;
        goto label_135ee4;
    }
    ctx->pc = 0x135EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x135EE4u);
        ctx->pc = 0x135EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EDCu;
        // 0x135ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EDCu, 0x135EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135EE4u;
label_135ee4:
    // 0x135ee4: 0x10000007  b           . + 4 + (0x7 << 2)
label_135ee8:
    if (ctx->pc == 0x135EE8u) {
        ctx->pc = 0x135EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EE4u;
        // 0x135ee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EECu;
        goto label_135eec;
    }
    ctx->pc = 0x135EE4u;
    {
        const bool branch_taken_0x135ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EE4u;
        // 0x135ee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ee4) {
            ctx->pc = 0x135F04u;
            return;
        }
    }
    ctx->pc = 0x135EECu;
label_135eec:
    // 0x135eec: 0x0  nop
    ctx->pc = 0x135eecu;
    // NOP
    ctx->pc = 0x135ef0u;
}
