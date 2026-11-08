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

// Function: LockMarkerVisible__8ApcPanelb
// Address: 0x160e90 - 0x160ef8
void LockMarkerVisible__8ApcPanelb_0x160e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LockMarkerVisible__8ApcPanelb_0x160e90");
#endif

    switch (ctx->pc) {
        case 0x160e90u: goto label_160e90;
        case 0x160e94u: goto label_160e94;
        case 0x160e98u: goto label_160e98;
        case 0x160e9cu: goto label_160e9c;
        case 0x160ea0u: goto label_160ea0;
        case 0x160ea4u: goto label_160ea4;
        case 0x160ea8u: goto label_160ea8;
        case 0x160eacu: goto label_160eac;
        case 0x160eb0u: goto label_160eb0;
        case 0x160eb4u: goto label_160eb4;
        case 0x160eb8u: goto label_160eb8;
        case 0x160ebcu: goto label_160ebc;
        case 0x160ec0u: goto label_160ec0;
        case 0x160ec4u: goto label_160ec4;
        case 0x160ec8u: goto label_160ec8;
        case 0x160eccu: goto label_160ecc;
        case 0x160ed0u: goto label_160ed0;
        case 0x160ed4u: goto label_160ed4;
        case 0x160ed8u: goto label_160ed8;
        case 0x160edcu: goto label_160edc;
        case 0x160ee0u: goto label_160ee0;
        case 0x160ee4u: goto label_160ee4;
        case 0x160ee8u: goto label_160ee8;
        case 0x160eecu: goto label_160eec;
        case 0x160ef0u: goto label_160ef0;
        case 0x160ef4u: goto label_160ef4;
        default: break;
    }

    ctx->pc = 0x160e90u;

label_160e90:
    // 0x160e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_160e94:
    // 0x160e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_160e98:
    // 0x160e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160e9c:
    // 0x160e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_160ea0:
    // 0x160ea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x160ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160ea4:
    // 0x160ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_160ea8:
    // 0x160ea8: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x160ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_160eac:
    // 0x160eac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160eb0:
    // 0x160eb0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160eb4:
    // 0x160eb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160eb8:
    // 0x160eb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160ebc:
    // 0x160ebc: 0x60f809  jalr        $v1
label_160ec0:
    if (ctx->pc == 0x160EC0u) {
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EC4u;
        goto label_160ec4;
    }
    ctx->pc = 0x160EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160EC4u);
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160EBCu, 0x160EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160EC4u;
label_160ec4:
    // 0x160ec4: 0x8e060168  lw          $a2, 0x168($s0)
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_160ec8:
    // 0x160ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160ecc:
    // 0x160ecc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_160ed0:
    // 0x160ed0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x160ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_160ed4:
    // 0x160ed4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160ed8:
    // 0x160ed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_160edc:
    // 0x160edc: 0x60f809  jalr        $v1
label_160ee0:
    if (ctx->pc == 0x160EE0u) {
        ctx->pc = 0x160EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EDCu;
        // 0x160ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EE4u;
        goto label_160ee4;
    }
    ctx->pc = 0x160EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160EE4u);
        ctx->pc = 0x160EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EDCu;
        // 0x160ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160EDCu, 0x160EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160EE4u;
label_160ee4:
    // 0x160ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160ee8:
    // 0x160ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_160eec:
    // 0x160eec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160ef0:
    // 0x160ef0: 0x3e00008  jr          $ra
label_160ef4:
    if (ctx->pc == 0x160EF4u) {
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EF0u;
        // 0x160ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EF8u;
        goto label_fallthrough_0x160ef0;
    }
    ctx->pc = 0x160EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EF0u;
        // 0x160ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x160ef0:
    ctx->pc = 0x160EF8u;
}
